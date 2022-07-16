// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_NamingException__
#define __javax_naming_NamingException__

#pragma interface

#include <java/lang/Exception.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      class NamingException;
      class Name;
    }
  }
}

class javax::naming::NamingException : public ::java::lang::Exception
{
public:
  NamingException ();
  NamingException (::java::lang::String *);
  virtual ::java::lang::Throwable *getRootCause () { return rootException; }
  virtual void setRootCause (::java::lang::Throwable *);
  virtual ::javax::naming::Name *getResolvedName () { return resolvedName; }
  virtual void setResolvedName (::javax::naming::Name *);
  virtual ::java::lang::Object *getResolvedObj () { return resolvedObj; }
  virtual void setResolvedObj (::java::lang::Object *);
  virtual ::javax::naming::Name *getRemainingName () { return remainingName; }
  virtual void setRemainingName (::javax::naming::Name *);
  virtual void appendRemainingName (::javax::naming::Name *);
  virtual void appendRemainingComponent (::java::lang::String *);
  virtual ::java::lang::String *getExplanation ();
  virtual ::java::lang::String *toString (jboolean);
  virtual ::java::lang::String *toString ();
  virtual void printStackTrace ();
  virtual void printStackTrace (::java::io::PrintStream *);
  virtual void printStackTrace (::java::io::PrintWriter *);
private:
  static const jlong serialVersionUID = -1299181962103167177LL;
public:  // actually protected
  ::java::lang::Throwable * __attribute__((aligned(__alignof__( ::java::lang::Exception )))) rootException;
  ::javax::naming::Name *resolvedName;
  ::java::lang::Object *resolvedObj;
  ::javax::naming::Name *remainingName;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_naming_NamingException__ */