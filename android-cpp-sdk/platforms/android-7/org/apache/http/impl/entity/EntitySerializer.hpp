/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.entity.EntitySerializer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYSERIALIZER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYSERIALIZER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionOutputBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class ContentLengthStrategy; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpEntity.hpp>
#include <org/apache/http/HttpMessage.hpp>
#include <org/apache/http/entity/ContentLengthStrategy.hpp>
#include <org/apache/http/io/SessionOutputBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace entity {

	class EntitySerializer;
	class EntitySerializer
		: public object<EntitySerializer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit EntitySerializer(jobject jobj)
		: object<EntitySerializer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		EntitySerializer(local_ref< org::apache::http::entity::ContentLengthStrategy > const&);
		void serialize(local_ref< org::apache::http::io::SessionOutputBuffer >  const&, local_ref< org::apache::http::HttpMessage >  const&, local_ref< org::apache::http::HttpEntity >  const&);
	}; //class EntitySerializer

} //namespace entity
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYSERIALIZER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYSERIALIZER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYSERIALIZER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::entity::EntitySerializer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::entity::EntitySerializer::EntitySerializer(local_ref< org::apache::http::entity::ContentLengthStrategy > const &a0)
: object<org::apache::http::impl::entity::EntitySerializer>(
	call_new_object<
		org::apache::http::impl::entity::EntitySerializer::J2CPP_CLASS_NAME,
		org::apache::http::impl::entity::EntitySerializer::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::entity::EntitySerializer::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



void org::apache::http::impl::entity::EntitySerializer::serialize(local_ref< org::apache::http::io::SessionOutputBuffer > const &a0, local_ref< org::apache::http::HttpMessage > const &a1, local_ref< org::apache::http::HttpEntity > const &a2)
{
	return call_method<
		org::apache::http::impl::entity::EntitySerializer::J2CPP_CLASS_NAME,
		org::apache::http::impl::entity::EntitySerializer::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::entity::EntitySerializer::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::entity::EntitySerializer,"org/apache/http/impl/entity/EntitySerializer")
J2CPP_DEFINE_METHOD(org::apache::http::impl::entity::EntitySerializer,0,"<init>","(Lorg/apache/http/entity/ContentLengthStrategy;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::entity::EntitySerializer,1,"doSerialize","(Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/HttpMessage;)Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::entity::EntitySerializer,2,"serialize","(Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/HttpMessage;Lorg/apache/http/HttpEntity;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYSERIALIZER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
