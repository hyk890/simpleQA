// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_LongBuffer__
#define __java_nio_LongBuffer__

#pragma interface

#include <java/nio/Buffer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class ByteOrder;
      class LongBuffer;
    }
  }
}

class java::nio::LongBuffer : public ::java::nio::Buffer
{
public: // actually package-private
  LongBuffer (jint, jint, jint, jint);
  LongBuffer (jlongArray, jint, jint, jint, jint, jint);
public:
  static ::java::nio::LongBuffer *allocate (jint);
  static ::java::nio::LongBuffer *wrap (jlongArray, jint, jint);
  static ::java::nio::LongBuffer *wrap (jlongArray);
  virtual ::java::nio::LongBuffer *get (jlongArray, jint, jint);
  virtual ::java::nio::LongBuffer *get (jlongArray);
  virtual ::java::nio::LongBuffer *put (::java::nio::LongBuffer *);
  virtual ::java::nio::LongBuffer *put (jlongArray, jint, jint);
  ::java::nio::LongBuffer *put (jlongArray);
  jboolean hasArray ();
  jlongArray array ();
  jint arrayOffset ();
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);
  virtual jint compareTo (::java::lang::Object *);
  virtual ::java::nio::ByteOrder *order () = 0;
  virtual jlong get () = 0;
  virtual ::java::nio::LongBuffer *put (jlong) = 0;
  virtual jlong get (jint) = 0;
  virtual ::java::nio::LongBuffer *put (jint, jlong) = 0;
  virtual ::java::nio::LongBuffer *compact () = 0;
  virtual jboolean isDirect () = 0;
  virtual ::java::nio::LongBuffer *slice () = 0;
  virtual ::java::nio::LongBuffer *duplicate () = 0;
  virtual ::java::nio::LongBuffer *asReadOnlyBuffer () = 0;
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::nio::Buffer ))))  array_offset;
  jlongArray backing_buffer;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_LongBuffer__ */
