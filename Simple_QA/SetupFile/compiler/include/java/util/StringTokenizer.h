// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_StringTokenizer__
#define __java_util_StringTokenizer__

#pragma interface

#include <java/lang/Object.h>

class java::util::StringTokenizer : public ::java::lang::Object
{
public:
  StringTokenizer (::java::lang::String *);
  StringTokenizer (::java::lang::String *, ::java::lang::String *);
  StringTokenizer (::java::lang::String *, ::java::lang::String *, jboolean);
  virtual jboolean hasMoreTokens ();
  virtual ::java::lang::String *nextToken (::java::lang::String *);
  virtual ::java::lang::String *nextToken ();
  virtual jboolean hasMoreElements ();
  virtual ::java::lang::Object *nextElement ();
  virtual jint countTokens ();
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  pos;
  ::java::lang::String *str;
  jint len;
  ::java::lang::String *delim;
  jboolean retDelims;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_StringTokenizer__ */