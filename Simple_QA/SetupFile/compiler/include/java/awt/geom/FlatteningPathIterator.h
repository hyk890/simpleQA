// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_FlatteningPathIterator__
#define __java_awt_geom_FlatteningPathIterator__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
        class FlatteningPathIterator;
        class PathIterator;
      }
    }
  }
}

class java::awt::geom::FlatteningPathIterator : public ::java::lang::Object
{
public:
  FlatteningPathIterator (::java::awt::geom::PathIterator *, jdouble);
  FlatteningPathIterator (::java::awt::geom::PathIterator *, jdouble, jint);
  virtual jdouble getFlatness ();
  virtual jint getRecursionLimit () { return recursionLimit; }
  virtual jint getWindingRule ();
  virtual jboolean isDone () { return done; }
  virtual void next ();
  virtual jint currentSegment (jdoubleArray);
  virtual jint currentSegment (jfloatArray);
private:
  void fetchSegment ();
  void subdivideQuadratic ();
  void subdivideCubic ();
  ::java::awt::geom::PathIterator * __attribute__((aligned(__alignof__( ::java::lang::Object )))) srcIter;
  jdouble flatnessSq;
  jint recursionLimit;
  jdoubleArray stack;
  jint stackSize;
  jintArray recLevel;
  jdoubleArray scratch;
  jint srcSegType;
  jdouble srcPosX;
  jdouble srcPosY;
  jboolean done;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_geom_FlatteningPathIterator__ */
