// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_Skeleton__
#define __java_rmi_server_Skeleton__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace server
      {
        class Skeleton;
        class Operation;
        class RemoteCall;
      }
      class Remote;
    }
  }
}

class java::rmi::server::Skeleton : public ::java::lang::Object
{
public:
  virtual void dispatch (::java::rmi::Remote *, ::java::rmi::server::RemoteCall *, jint, jlong) = 0;
  virtual JArray< ::java::rmi::server::Operation *> *getOperations () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_rmi_server_Skeleton__ */
