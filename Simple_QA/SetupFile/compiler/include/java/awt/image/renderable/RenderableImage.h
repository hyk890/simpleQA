// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_renderable_RenderableImage__
#define __java_awt_image_renderable_RenderableImage__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        namespace renderable
        {
          class RenderableImage;
          class RenderContext;
        }
        class RenderedImage;
      }
      class RenderingHints;
    }
  }
}

class java::awt::image::renderable::RenderableImage : public ::java::lang::Object
{
public:
  virtual ::java::util::Vector *getSources () = 0;
  virtual ::java::lang::Object *getProperty (::java::lang::String *) = 0;
  virtual JArray< ::java::lang::String *> *getPropertyNames () = 0;
  virtual jboolean isDynamic () = 0;
  virtual jfloat getWidth () = 0;
  virtual jfloat getHeight () = 0;
  virtual jfloat getMinX () = 0;
  virtual jfloat getMinY () = 0;
  virtual ::java::awt::image::RenderedImage *createScaledRendering (jint, jint, ::java::awt::RenderingHints *) = 0;
  virtual ::java::awt::image::RenderedImage *createDefaultRendering () = 0;
  virtual ::java::awt::image::RenderedImage *createRendering (::java::awt::image::renderable::RenderContext *) = 0;
  static ::java::lang::String *HINTS_OBSERVED;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_image_renderable_RenderableImage__ */
