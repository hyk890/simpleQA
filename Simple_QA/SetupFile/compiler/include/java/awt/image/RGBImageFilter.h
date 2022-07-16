// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_RGBImageFilter__
#define __java_awt_image_RGBImageFilter__

#pragma interface

#include <java/awt/image/ImageFilter.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class RGBImageFilter;
        class IndexColorModel;
        class ColorModel;
      }
    }
  }
}

class java::awt::image::RGBImageFilter : public ::java::awt::image::ImageFilter
{
public:
  RGBImageFilter ();
  virtual void setColorModel (::java::awt::image::ColorModel *);
  virtual void substituteColorModel (::java::awt::image::ColorModel *, ::java::awt::image::ColorModel *);
  virtual ::java::awt::image::IndexColorModel *filterIndexColorModel (::java::awt::image::IndexColorModel *);
private:
  jint makeColor (jbyte, jbyte, jbyte, jbyte);
public:
  virtual void filterRGBPixels (jint, jint, jint, jint, jintArray, jint, jint);
  virtual void setPixels (jint, jint, jint, jint, ::java::awt::image::ColorModel *, jbyteArray, jint, jint);
  virtual void setPixels (jint, jint, jint, jint, ::java::awt::image::ColorModel *, jintArray, jint, jint);
private:
  void convertColorModelToDefault (jint, jint, jint, jint, ::java::awt::image::ColorModel *, jintArray, jint, jint);
  jint makeColorbyDefaultCM (jint);
  jint makeColor (jint, jint, jint, jint);
public:
  virtual jint filterRGB (jint, jint, jint) = 0;
public:  // actually protected
  ::java::awt::image::ColorModel * __attribute__((aligned(__alignof__( ::java::awt::image::ImageFilter )))) origmodel;
  ::java::awt::image::ColorModel *newmodel;
  jboolean canFilterIndexColorModel;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_RGBImageFilter__ */
