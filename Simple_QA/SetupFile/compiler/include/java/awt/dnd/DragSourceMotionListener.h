// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_dnd_DragSourceMotionListener__
#define __java_awt_dnd_DragSourceMotionListener__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace dnd
      {
        class DragSourceMotionListener;
        class DragSourceDragEvent;
      }
    }
  }
}

class java::awt::dnd::DragSourceMotionListener : public ::java::lang::Object
{
public:
  virtual void dragMouseMoved (::java::awt::dnd::DragSourceDragEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_dnd_DragSourceMotionListener__ */
