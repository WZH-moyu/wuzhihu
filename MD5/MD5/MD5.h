#pragma once
#include<string>
#include<cstring>
#include<cmath>
#include<iostream>
#include<fstream>
#define N 64
class MD5
{
public:
	MD5();
	std::string getFilleMd5(const char* filename);
	std::string getStringMd5(const std::string& str);
private:
	void init();
	void calculateMD5(size_t* chunk);
	void calculateMD5Final();
	std::string changHex(size_t num);
	/* F(x,y,z) = (x & y) | ((~x) & z) 
	G(x,y,z) = (x & z) | ( y & (~z)) 
	H(x,y,z) = x ^ y ^ z 
	I(x,y,z) = y ^ (x | (~z)) */

	size_t F(size_t b, size_t c, size_t d)
	{
		return (b & c) | ((~b) & d);
	}
	size_t G(size_t b, size_t c, size_t d)
	{
		return (b & c) | (c & (~d));
	}
	size_t H(size_t b, size_t c, size_t d)
	{
		return b ^ c ^ d;
	}
	size_t I(size_t b, size_t c, size_t d)
	{
		return c ^ (b | (~d));
	}
	size_t _a;
	size_t _b;
	size_t _c;
	size_t _d;
	size_t _lastByte;
	size_t _k[N];

	size_t _sft[N];
	size_t shift(size_t num, size_t n)
	{
		//循环左移3位：先把x左移3位得到y；再把x右移n-3位得到z；循环左移三位的结果就是y||z;
		return ((num << n) | (num >> (32 - n)));
	}
	const size_t _chunkByte;
	unsigned char _chunk[N];
	unsigned long long _totalByte;
};
