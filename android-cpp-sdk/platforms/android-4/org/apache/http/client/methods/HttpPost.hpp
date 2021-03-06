/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.methods.HttpPost
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPOST_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPOST_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntityEnclosingRequest; } } } }
namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { namespace methods { class HttpUriRequest; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { namespace methods { class AbortableHttpRequest; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { namespace methods { class HttpEntityEnclosingRequestBase; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { namespace methods { class HttpRequestBase; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class AbstractHttpMessage; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/URI.hpp>
#include <org/apache/http/HttpEntityEnclosingRequest.hpp>
#include <org/apache/http/HttpMessage.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/client/methods/AbortableHttpRequest.hpp>
#include <org/apache/http/client/methods/HttpEntityEnclosingRequestBase.hpp>
#include <org/apache/http/client/methods/HttpRequestBase.hpp>
#include <org/apache/http/client/methods/HttpUriRequest.hpp>
#include <org/apache/http/message/AbstractHttpMessage.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace methods {

	class HttpPost;
	class HttpPost
		: public object<HttpPost>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)

		explicit HttpPost(jobject jobj)
		: object<HttpPost>(jobj)
		{
		}

		operator local_ref<org::apache::http::HttpEntityEnclosingRequest>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::client::methods::HttpUriRequest>() const;
		operator local_ref<org::apache::http::client::methods::AbortableHttpRequest>() const;
		operator local_ref<org::apache::http::client::methods::HttpEntityEnclosingRequestBase>() const;
		operator local_ref<org::apache::http::client::methods::HttpRequestBase>() const;
		operator local_ref<org::apache::http::HttpRequest>() const;
		operator local_ref<org::apache::http::message::AbstractHttpMessage>() const;
		operator local_ref<org::apache::http::HttpMessage>() const;


		HttpPost();
		HttpPost(local_ref< java::net::URI > const&);
		HttpPost(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getMethod();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > METHOD_NAME;
	}; //class HttpPost

} //namespace methods
} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPOST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPOST_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPOST_HPP_IMPL

namespace j2cpp {



org::apache::http::client::methods::HttpPost::operator local_ref<org::apache::http::HttpEntityEnclosingRequest>() const
{
	return local_ref<org::apache::http::HttpEntityEnclosingRequest>(get_jobject());
}

org::apache::http::client::methods::HttpPost::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

org::apache::http::client::methods::HttpPost::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::client::methods::HttpPost::operator local_ref<org::apache::http::client::methods::HttpUriRequest>() const
{
	return local_ref<org::apache::http::client::methods::HttpUriRequest>(get_jobject());
}

org::apache::http::client::methods::HttpPost::operator local_ref<org::apache::http::client::methods::AbortableHttpRequest>() const
{
	return local_ref<org::apache::http::client::methods::AbortableHttpRequest>(get_jobject());
}

org::apache::http::client::methods::HttpPost::operator local_ref<org::apache::http::client::methods::HttpEntityEnclosingRequestBase>() const
{
	return local_ref<org::apache::http::client::methods::HttpEntityEnclosingRequestBase>(get_jobject());
}

org::apache::http::client::methods::HttpPost::operator local_ref<org::apache::http::client::methods::HttpRequestBase>() const
{
	return local_ref<org::apache::http::client::methods::HttpRequestBase>(get_jobject());
}

org::apache::http::client::methods::HttpPost::operator local_ref<org::apache::http::HttpRequest>() const
{
	return local_ref<org::apache::http::HttpRequest>(get_jobject());
}

org::apache::http::client::methods::HttpPost::operator local_ref<org::apache::http::message::AbstractHttpMessage>() const
{
	return local_ref<org::apache::http::message::AbstractHttpMessage>(get_jobject());
}

org::apache::http::client::methods::HttpPost::operator local_ref<org::apache::http::HttpMessage>() const
{
	return local_ref<org::apache::http::HttpMessage>(get_jobject());
}


org::apache::http::client::methods::HttpPost::HttpPost()
: object<org::apache::http::client::methods::HttpPost>(
	call_new_object<
		org::apache::http::client::methods::HttpPost::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpPost::J2CPP_METHOD_NAME(0),
		org::apache::http::client::methods::HttpPost::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



org::apache::http::client::methods::HttpPost::HttpPost(local_ref< java::net::URI > const &a0)
: object<org::apache::http::client::methods::HttpPost>(
	call_new_object<
		org::apache::http::client::methods::HttpPost::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpPost::J2CPP_METHOD_NAME(1),
		org::apache::http::client::methods::HttpPost::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



org::apache::http::client::methods::HttpPost::HttpPost(local_ref< java::lang::String > const &a0)
: object<org::apache::http::client::methods::HttpPost>(
	call_new_object<
		org::apache::http::client::methods::HttpPost::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpPost::J2CPP_METHOD_NAME(2),
		org::apache::http::client::methods::HttpPost::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}


local_ref< java::lang::String > org::apache::http::client::methods::HttpPost::getMethod()
{
	return call_method<
		org::apache::http::client::methods::HttpPost::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpPost::J2CPP_METHOD_NAME(3),
		org::apache::http::client::methods::HttpPost::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}


static_field<
	org::apache::http::client::methods::HttpPost::J2CPP_CLASS_NAME,
	org::apache::http::client::methods::HttpPost::J2CPP_FIELD_NAME(0),
	org::apache::http::client::methods::HttpPost::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::client::methods::HttpPost::METHOD_NAME;


J2CPP_DEFINE_CLASS(org::apache::http::client::methods::HttpPost,"org/apache/http/client/methods/HttpPost")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpPost,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpPost,1,"<init>","(Ljava/net/URI;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpPost,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpPost,3,"getMethod","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::methods::HttpPost,0,"METHOD_NAME","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPOST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
