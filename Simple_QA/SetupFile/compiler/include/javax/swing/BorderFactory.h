// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_BorderFactory__
#define __javax_swing_BorderFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class BorderFactory;
      class Icon;
      namespace border
      {
        class MatteBorder;
        class CompoundBorder;
        class TitledBorder;
        class Border;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      class Font;
      class Color;
    }
  }
}

class javax::swing::BorderFactory : public ::java::lang::Object
{
public:
  static ::javax::swing::border::Border *createLineBorder (::java::awt::Color *) { return 0; }
  static ::javax::swing::border::Border *createLineBorder (::java::awt::Color *, jint);
  static ::javax::swing::border::Border *createRaisedBevelBorder ();
  static ::javax::swing::border::Border *createLoweredBevelBorder ();
  static ::javax::swing::border::Border *createBevelBorder (jint);
  static ::javax::swing::border::Border *createBevelBorder (jint, ::java::awt::Color *, ::java::awt::Color *);
  static ::javax::swing::border::Border *createBevelBorder (jint, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *);
  static ::javax::swing::border::Border *createEtchedBorder ();
  static ::javax::swing::border::Border *createEtchedBorder (jint);
  static ::javax::swing::border::Border *createEtchedBorder (::java::awt::Color *, ::java::awt::Color *);
  static ::javax::swing::border::Border *createEtchedBorder (jint, ::java::awt::Color *, ::java::awt::Color *);
  static ::javax::swing::border::TitledBorder *createTitledBorder (::java::lang::String *);
  static ::javax::swing::border::TitledBorder *createTitledBorder (::javax::swing::border::Border *);
  static ::javax::swing::border::TitledBorder *createTitledBorder (::javax::swing::border::Border *, ::java::lang::String *);
  static ::javax::swing::border::TitledBorder *createTitledBorder (::javax::swing::border::Border *, ::java::lang::String *, jint, jint);
  static ::javax::swing::border::TitledBorder *createTitledBorder (::javax::swing::border::Border *, ::java::lang::String *, jint, jint, ::java::awt::Font *);
  static ::javax::swing::border::TitledBorder *createTitledBorder (::javax::swing::border::Border *, ::java::lang::String *, jint, jint, ::java::awt::Font *, ::java::awt::Color *);
  static ::javax::swing::border::Border *createEmptyBorder ();
  static ::javax::swing::border::Border *createEmptyBorder (jint, jint, jint, jint);
  static ::javax::swing::border::CompoundBorder *createCompoundBorder ();
  static ::javax::swing::border::CompoundBorder *createCompoundBorder (::javax::swing::border::Border *, ::javax::swing::border::Border *);
  static ::javax::swing::border::MatteBorder *createMatteBorder (jint, jint, jint, jint, ::java::awt::Color *);
  static ::javax::swing::border::MatteBorder *createMatteBorder (jint, jint, jint, jint, ::javax::swing::Icon *);
  BorderFactory ();

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_BorderFactory__ */
