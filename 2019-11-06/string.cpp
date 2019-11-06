#include<iostream>
#include<assert.h>
#include<string.h>
using namespace std;
namespace moyu
{
  class String 
  {
    public:
      typedef char* Iterator;

    public:
      String(const char* str = "")
      {
        //构造string对象时，如果传递nullptr指针，认为程序非法，此处断言
        if(nullptr == str)
        {
          assert(false);
          return;
        }
        _size = strlen(str);
        _capacity = _size;
        _str = new char[_capacity + 1];
        strcpy(_str,str);
      }

      String(const String& s)
        :_str(new char[s._capacity + 1])
        ,_size(s._size)
        ,_capacity(s._capacity)
    {
      strcpy(_str,s._str);
    }
      String& operator = (const String& s)
      {
        if(this != &s)
        {
          char* pStr = new char[s._capacity + 1];
          strcpy(pStr,s._str);
          delete[] _str;
          _str = pStr;
          _size = s._size;
          _capacity = s._capacity;
        }
        return *this;
      }

      ~String()
      {
        if(_str)
        {
          delete[] _str;
          _str = nullptr;
        }
      }
      /////////////////////////////////////////////////////////////////////
      //Iterator
      Iterator Begin()
      {
        return _str;
      }

      Iterator End()
      {
        return _str + _size;
      }

      /////////////////////////////////////////////////////////////////////
      //modify
      void Pushback(char c)
      {
        if(_size == _capacity)
          Reserver(_capacity * 2);
        _str[_size++] = c;
        _str[_size] = '\0';
      }
      
      void Append(size_t n,char c)
      {

      }
      //作业实现
      void Append(const char* str);
      String& operator += (const char* str);

      void Clear()
      {
        _size = 0;
        _str[_size] = '\0';
      }
    private:
      char* _str;
      size_t _capacity;
      size_t _size;
  };
}
