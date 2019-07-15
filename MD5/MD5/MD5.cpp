#include"MD5.h"
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
		b = b + shift((a + f + _k[i] + chunk[g]), _str[i]);
		a = dtemp;
	}
	
	_a += a;
	_b += b;
	_c += c;
	_d += d;
}