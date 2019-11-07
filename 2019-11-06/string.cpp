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
        for(size_t i = 0;i < n; ++i)
          Pushback(c);
      }
      //作业实现
      void Append(const char* str);
      String& operator += (const char* str);

      void Clear()
      {
        _size = 0;
        _str[_size] = '\0';
      }
      void Swap(String& s)
      {
        swap(_str,s._str);
        swap(_size,s._size);
        swap(_capacity,s._capacity);
      }

      const char* C_Str()const{
        return _str;
      }

      ////////////////////////////////////////////////////////////
      //capacity
      size_t Size()const
      {
        return _size;
      }

      size_t Capacity()const 
      {
        return _capacity; 
      }

      bool Empty()const 
      {
        return 0 == _size;
      }

      void Resize(size_t newSize, char c = char())
      {
        if(newSize > _size)
        {
          //如果newSize大于底层的大小，则需要从新开辟空间
          if(newSize > _capacity)
          {
            Reserve(newSize);
          }
          memset(_str + _size, c, newSize - _size);
        }
        _size = newSize;
        _str[newSize] = '\0';
      }

      void Reverse(size_t newCapacity)
      {
        //如果新容量大于旧容量，则开辟空间
        if(newCapacity > _capacity)
        {
          char* str = new char[newCapacity + 1];
          strcpy(str, _str);
          //释放原来的空间，使用新空间
          delete[] _str;
          _str = str;
          _capacity = newCapacity;
        }
      }

      //////////////////////////////////////////////////////////
      //access
      char& operator[](size_t index)
      {
        assert(index < _size);
        return _str[index];
      }

      const char& operator[](size_t index)const
      {
        assert(index < _size);
        return _str[index];
      }

      //////////////////////////////////////////////////////////
      //作业
      bool operator<(const String& s);
      bool operator<=(const String& s);
      bool operator>(const String& s);
      bool operator>=(const String& s);
      bool operator==(const String& s);
      bool operator!=(const String& s);
    private:
      char* _str;
      size_t _capacity;
      size_t _size;
  };
}
