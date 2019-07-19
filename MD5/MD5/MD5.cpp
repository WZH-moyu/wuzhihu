#include"MD5.h"
MD5::MD5()
	:_chunkByte(N)
{
	init();
	memset(_chunk, 0, _chunkByte);
	_lastByte = _totalByte = 0;
}
void MD5::init()
{
	_a = 0x67452301; 
	_b = 0xefcdab89;
	_c = 0x98badcfe;
	_d = 0x10325476;
	size_t s[] = { 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7,
		12, 17, 22, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20,
		4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 6, 10,
		15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21 };
	memcpy(_sft, s, sizeof(s));
	// k[i] 2^32 * abs(sin(i))
	for (int i = 0; i < 64; i++)
	{
		_k[i] = (size_t)(abs(sin(i + 1.0)) * pow(2.0, 32));
	}
}
void MD5::calculateMD5(size_t* chunk)
{
	size_t a = _a;
	size_t b = _b;
	size_t c = _c;
	size_t d = _d;
	size_t f, g;//chunk[g] f:哈希函数返回值
	//64位变换，4轮操作，每一轮操作 16个子操作
	for (size_t i = 0; i < 64; ++i)
	{
		if(0<=i && i<16)
		{
			f = F(b, c, d);
			g = i;
		}
		else if(16<=i && i<32)
		{
			f = G(b, c, d);
			g = (5 * i + 1) % 16;
		}
		else if(32<=i && i<48)
		{
			f = H(b, c, d);
			g= (3 * i + 5) % 16;
		}
		else
		{
			f = I(b, c, d);
			g= (7 * i) % 16;
		}
		size_t dtemp = d;
		d = c;
		c = b;
		b = b + shift((a + f + _k[i] + chunk[g]), _sft[i]);
		a = dtemp;
	}
	_a += a;
	_b += b;
	_c += c;
	_d += d;
}
void MD5::calculateMD5Final()
{
	//lastByte<64 byte： 最后一块数据的大小
	unsigned char* p= _chunk + _lastByte;
	//填充位的前八bit位：1000 0000    0x80 
	*p++ = 0x80;
	size_t remainFillByte = _chunkByte - _lastByte - 1;
	if (remainFillByte < 8)
	{
		memset(p, 0, remainFillByte);
		calculateMD5((size_t*)_chunk);
		memset(_chunk, 0, _chunkByte);
	}
	else
	{
		memset(p, 0, remainFillByte);
	}
	//最后的64位存放原始文档位的长度
	((unsigned long long*)_chunk)[7] = _totalByte * 8;
	calculateMD5((size_t*)_chunk);
}
std::string MD5::changHex(size_t num)
{
	return std::string();
}
std::string changHex(size_t num)
{
	static std::string strMap = "0123456789abcdef";
	std::string ret;
	std::string byteStr;
	for (int i = 0; i < 4; ++i) {
		byteStr = "";
		size_t b = (num >> (i * 8)) & 0xff;
		for (int j = 0; j < 2; ++j) {
			byteStr.insert(0, 1, strMap[b % 16]);
			b /= 16;
		}
		ret += byteStr;
	}
	return ret;
}
std::string MD5::getFilleMd5(const char* filename)
{
	std::ifstream fin(filename, std::ifstream::binary);
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			fin.read((char*)_chunk, _chunkByte);
			if (_chunkByte != fin.gcount())
				break;
			_totalByte += _chunkByte;
			calculateMD5((size_t*)_chunk);
		}
		_lastByte = fin.gcount();
		_totalByte += _lastByte;
		calculateMD5Final();
	}
	return (changHex(_a) + changHex(_b) + changHex(_c) + changHex(_d));
}
std::string MD5::getStringMd5(const std::string& str)
{
	if (str.empty())
		return "";
	else
	{
		unsigned char* pstr = (unsigned char*)str.c_str();
		rsize_t numChunk = str.size() / _chunkByte;
		for (size_t i = 0; i < numChunk; ++i)
		{
			_totalByte += _chunkByte;
			calculateMD5((size_t*)pstr + i * _chunkByte);
		}
		_lastByte = str.size() % _chunkByte;
		memcpy(_chunk, pstr + _totalByte, _lastByte);
		calculateMD5Final();
	}
	return  (changHex(_a) + changHex(_b) + changHex(_c) + changHex(_d));

}