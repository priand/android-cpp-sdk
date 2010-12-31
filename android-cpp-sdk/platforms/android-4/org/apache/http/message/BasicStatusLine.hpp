/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.BasicStatusLine
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class StatusLine; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/ProtocolVersion.hpp>
#include <org/apache/http/StatusLine.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicStatusLine;
	class BasicStatusLine
		: public object<BasicStatusLine>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit BasicStatusLine(jobject jobj)
		: object<BasicStatusLine>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::StatusLine>() const;
		operator local_ref<java::lang::Cloneable>() const;


		BasicStatusLine(local_ref< org::apache::http::ProtocolVersion > const&, jint, local_ref< java::lang::String > const&);
		jint getStatusCode();
		local_ref< org::apache::http::ProtocolVersion > getProtocolVersion();
		local_ref< java::lang::String > getReasonPhrase();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Object > clone();
	}; //class BasicStatusLine

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE_HPP_IMPL

namespace j2cpp {



org::apache::http::message::BasicStatusLine::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::message::BasicStatusLine::operator local_ref<org::apache::http::StatusLine>() const
{
	return local_ref<org::apache::http::StatusLine>(get_jobject());
}

org::apache::http::message::BasicStatusLine::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}


org::apache::http::message::BasicStatusLine::BasicStatusLine(local_ref< org::apache::http::ProtocolVersion > const &a0, jint a1, local_ref< java::lang::String > const &a2)
: object<org::apache::http::message::BasicStatusLine>(
	call_new_object<
		org::apache::http::message::BasicStatusLine::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_NAME(0),
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}


jint org::apache::http::message::BasicStatusLine::getStatusCode()
{
	return call_method<
		org::apache::http::message::BasicStatusLine::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_NAME(1),
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

local_ref< org::apache::http::ProtocolVersion > org::apache::http::message::BasicStatusLine::getProtocolVersion()
{
	return call_method<
		org::apache::http::message::BasicStatusLine::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_NAME(2),
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::ProtocolVersion > >
	(get_jobject());
}

local_ref< java::lang::String > org::apache::http::message::BasicStatusLine::getReasonPhrase()
{
	return call_method<
		org::apache::http::message::BasicStatusLine::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_NAME(3),
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > org::apache::http::message::BasicStatusLine::toString()
{
	return call_method<
		org::apache::http::message::BasicStatusLine::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_NAME(4),
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::message::BasicStatusLine::clone()
{
	return call_method<
		org::apache::http::message::BasicStatusLine::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_NAME(5),
		org::apache::http::message::BasicStatusLine::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicStatusLine,"org/apache/http/message/BasicStatusLine")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicStatusLine,0,"<init>","(Lorg/apache/http/ProtocolVersion;ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicStatusLine,1,"getStatusCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicStatusLine,2,"getProtocolVersion","()Lorg/apache/http/ProtocolVersion;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicStatusLine,3,"getReasonPhrase","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicStatusLine,4,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicStatusLine,5,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION