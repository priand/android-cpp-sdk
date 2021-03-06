/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.cookie.SetCookie
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_SETCOOKIE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_SETCOOKIE_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>
#include <org/apache/http/cookie/Cookie.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace cookie {

	class SetCookie;
	class SetCookie
		: public object<SetCookie>
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

		explicit SetCookie(jobject jobj)
		: object<SetCookie>(jobj)
		{
		}

		operator local_ref<org::apache::http::cookie::Cookie>() const;
		operator local_ref<java::lang::Object>() const;


		void setValue(local_ref< java::lang::String >  const&);
		void setComment(local_ref< java::lang::String >  const&);
		void setExpiryDate(local_ref< java::util::Date >  const&);
		void setDomain(local_ref< java::lang::String >  const&);
		void setPath(local_ref< java::lang::String >  const&);
		void setSecure(jboolean);
		void setVersion(jint);
	}; //class SetCookie

} //namespace cookie
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_SETCOOKIE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_SETCOOKIE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_SETCOOKIE_HPP_IMPL

namespace j2cpp {



org::apache::http::cookie::SetCookie::operator local_ref<org::apache::http::cookie::Cookie>() const
{
	return local_ref<org::apache::http::cookie::Cookie>(get_jobject());
}

org::apache::http::cookie::SetCookie::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void org::apache::http::cookie::SetCookie::setValue(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::cookie::SetCookie::J2CPP_CLASS_NAME,
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_NAME(0),
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::cookie::SetCookie::setComment(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::cookie::SetCookie::J2CPP_CLASS_NAME,
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_NAME(1),
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::cookie::SetCookie::setExpiryDate(local_ref< java::util::Date > const &a0)
{
	return call_method<
		org::apache::http::cookie::SetCookie::J2CPP_CLASS_NAME,
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_NAME(2),
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::cookie::SetCookie::setDomain(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::cookie::SetCookie::J2CPP_CLASS_NAME,
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_NAME(3),
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::cookie::SetCookie::setPath(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::cookie::SetCookie::J2CPP_CLASS_NAME,
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_NAME(4),
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::cookie::SetCookie::setSecure(jboolean a0)
{
	return call_method<
		org::apache::http::cookie::SetCookie::J2CPP_CLASS_NAME,
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_NAME(5),
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::cookie::SetCookie::setVersion(jint a0)
{
	return call_method<
		org::apache::http::cookie::SetCookie::J2CPP_CLASS_NAME,
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_NAME(6),
		org::apache::http::cookie::SetCookie::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::cookie::SetCookie,"org/apache/http/cookie/SetCookie")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::SetCookie,0,"setValue","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::SetCookie,1,"setComment","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::SetCookie,2,"setExpiryDate","(Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::SetCookie,3,"setDomain","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::SetCookie,4,"setPath","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::SetCookie,5,"setSecure","(Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::SetCookie,6,"setVersion","(I)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_SETCOOKIE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
