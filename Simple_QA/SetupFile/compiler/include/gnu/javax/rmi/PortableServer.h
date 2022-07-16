// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_rmi_PortableServer__
#define __gnu_javax_rmi_PortableServer__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace rmi
      {
        class PortableServer;
      }
    }
  }
  namespace javax
  {
    namespace rmi
    {
      namespace CORBA
      {
        class ObjectImpl;
        class Tie;
      }
    }
  }
  namespace java
  {
    namespace rmi
    {
      class Remote;
    }
  }
}

class gnu::javax::rmi::PortableServer : public ::java::lang::Object
{
public:
  static void exportObject (::java::rmi::Remote *);
  static void unexportObject (::java::rmi::Remote *);
  static ::java::rmi::Remote *toStub (::java::rmi::Remote *);
public: // actually package-private
  static ::javax::rmi::CORBA::Tie *getTieFromRemote (::java::rmi::Remote *);
  static ::javax::rmi::CORBA::Tie *getTieFromClass (::java::lang::Class *);
public:
  static ::java::rmi::Remote *getStubFromTie (::javax::rmi::CORBA::Tie *) { return 0; }
  static ::java::rmi::Remote *getStubFromObjectImpl (::javax::rmi::CORBA::ObjectImpl *, ::java::lang::Class *) { return 0; }
  PortableServer ();
private:
  static ::java::util::Hashtable *tieCache;
  static ::java::lang::Object *NO_TIE;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_rmi_PortableServer__ */
