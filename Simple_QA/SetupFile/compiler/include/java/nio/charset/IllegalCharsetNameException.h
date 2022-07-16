// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_charset_IllegalCharsetNameException__
#define __java_nio_charset_IllegalCharsetNameException__

#pragma interface

#include <java/lang/IllegalArgumentException.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace charset
      {
        class IllegalCharsetNameException;
      }
    }
  }
}

class java::nio::charset::IllegalCharsetNameException : public ::java::lang::IllegalArgumentException
{
public:
  IllegalCharsetNameException (::java::lang::String *);
  virtual ::java::lang::String *getCharsetName () { return charsetName; }
private:
  static const jlong serialVersionUID = 1457525358470002989LL;
public: // actually package-private
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::IllegalArgumentException )))) charsetName;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_charset_IllegalCharsetNameException__ */
