/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.OperationApplicationException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_OPERATIONAPPLICATIONEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_CONTENT_OPERATIONAPPLICATIONEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace android { namespace content {

	class OperationApplicationException;
	class OperationApplicationException
		: public object<OperationApplicationException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)

		explicit OperationApplicationException(jobject jobj)
		: object<OperationApplicationException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		OperationApplicationException();
		OperationApplicationException(local_ref< java::lang::String > const&);
		OperationApplicationException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		OperationApplicationException(local_ref< java::lang::Throwable > const&);
		OperationApplicationException(jint);
		OperationApplicationException(local_ref< java::lang::String > const&, jint);
		jint getNumSuccessfulYieldPoints();
	}; //class OperationApplicationException

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_OPERATIONAPPLICATIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_OPERATIONAPPLICATIONEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_OPERATIONAPPLICATIONEXCEPTION_HPP_IMPL

namespace j2cpp {



android::content::OperationApplicationException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::content::OperationApplicationException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::OperationApplicationException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

android::content::OperationApplicationException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


android::content::OperationApplicationException::OperationApplicationException()
: object<android::content::OperationApplicationException>(
	call_new_object<
		android::content::OperationApplicationException::J2CPP_CLASS_NAME,
		android::content::OperationApplicationException::J2CPP_METHOD_NAME(0),
		android::content::OperationApplicationException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::content::OperationApplicationException::OperationApplicationException(local_ref< java::lang::String > const &a0)
: object<android::content::OperationApplicationException>(
	call_new_object<
		android::content::OperationApplicationException::J2CPP_CLASS_NAME,
		android::content::OperationApplicationException::J2CPP_METHOD_NAME(1),
		android::content::OperationApplicationException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



android::content::OperationApplicationException::OperationApplicationException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<android::content::OperationApplicationException>(
	call_new_object<
		android::content::OperationApplicationException::J2CPP_CLASS_NAME,
		android::content::OperationApplicationException::J2CPP_METHOD_NAME(2),
		android::content::OperationApplicationException::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



android::content::OperationApplicationException::OperationApplicationException(local_ref< java::lang::Throwable > const &a0)
: object<android::content::OperationApplicationException>(
	call_new_object<
		android::content::OperationApplicationException::J2CPP_CLASS_NAME,
		android::content::OperationApplicationException::J2CPP_METHOD_NAME(3),
		android::content::OperationApplicationException::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}



android::content::OperationApplicationException::OperationApplicationException(jint a0)
: object<android::content::OperationApplicationException>(
	call_new_object<
		android::content::OperationApplicationException::J2CPP_CLASS_NAME,
		android::content::OperationApplicationException::J2CPP_METHOD_NAME(4),
		android::content::OperationApplicationException::J2CPP_METHOD_SIGNATURE(4)
	>(a0)
)
{
}



android::content::OperationApplicationException::OperationApplicationException(local_ref< java::lang::String > const &a0, jint a1)
: object<android::content::OperationApplicationException>(
	call_new_object<
		android::content::OperationApplicationException::J2CPP_CLASS_NAME,
		android::content::OperationApplicationException::J2CPP_METHOD_NAME(5),
		android::content::OperationApplicationException::J2CPP_METHOD_SIGNATURE(5)
	>(a0, a1)
)
{
}


jint android::content::OperationApplicationException::getNumSuccessfulYieldPoints()
{
	return call_method<
		android::content::OperationApplicationException::J2CPP_CLASS_NAME,
		android::content::OperationApplicationException::J2CPP_METHOD_NAME(6),
		android::content::OperationApplicationException::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::content::OperationApplicationException,"android/content/OperationApplicationException")
J2CPP_DEFINE_METHOD(android::content::OperationApplicationException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::OperationApplicationException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::OperationApplicationException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(android::content::OperationApplicationException,3,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(android::content::OperationApplicationException,4,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::content::OperationApplicationException,5,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::content::OperationApplicationException,6,"getNumSuccessfulYieldPoints","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_OPERATIONAPPLICATIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
