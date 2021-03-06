/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.parsers.SAXParserFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_DECL
#define J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace xml { namespace parsers { class SAXParser; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace validation { class Schema; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/parsers/SAXParser.hpp>
#include <javax/xml/validation/Schema.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace parsers {

	class SAXParserFactory;
	class SAXParserFactory
		: public object<SAXParserFactory>
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
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)

		explicit SAXParserFactory(jobject jobj)
		: object<SAXParserFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< javax::xml::parsers::SAXParserFactory > newInstance();
		local_ref< javax::xml::parsers::SAXParser > newSAXParser();
		void setNamespaceAware(jboolean);
		void setValidating(jboolean);
		jboolean isNamespaceAware();
		jboolean isValidating();
		void setFeature(local_ref< java::lang::String >  const&, jboolean);
		jboolean getFeature(local_ref< java::lang::String >  const&);
		local_ref< javax::xml::validation::Schema > getSchema();
		void setSchema(local_ref< javax::xml::validation::Schema >  const&);
		void setXIncludeAware(jboolean);
		jboolean isXIncludeAware();
	}; //class SAXParserFactory

} //namespace parsers
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_IMPL
#define J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_IMPL

namespace j2cpp {



javax::xml::parsers::SAXParserFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< javax::xml::parsers::SAXParserFactory > javax::xml::parsers::SAXParserFactory::newInstance()
{
	return call_static_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(1),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::xml::parsers::SAXParserFactory >
	>();
}

local_ref< javax::xml::parsers::SAXParser > javax::xml::parsers::SAXParserFactory::newSAXParser()
{
	return call_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(2),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::xml::parsers::SAXParser >
	>(get_jobject());
}

void javax::xml::parsers::SAXParserFactory::setNamespaceAware(jboolean a0)
{
	return call_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(3),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void javax::xml::parsers::SAXParserFactory::setValidating(jboolean a0)
{
	return call_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(4),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

jboolean javax::xml::parsers::SAXParserFactory::isNamespaceAware()
{
	return call_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(5),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject());
}

jboolean javax::xml::parsers::SAXParserFactory::isValidating()
{
	return call_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(6),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}

void javax::xml::parsers::SAXParserFactory::setFeature(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(7),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1);
}

jboolean javax::xml::parsers::SAXParserFactory::getFeature(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(8),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< javax::xml::validation::Schema > javax::xml::parsers::SAXParserFactory::getSchema()
{
	return call_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(9),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< javax::xml::validation::Schema >
	>(get_jobject());
}

void javax::xml::parsers::SAXParserFactory::setSchema(local_ref< javax::xml::validation::Schema > const &a0)
{
	return call_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(10),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void javax::xml::parsers::SAXParserFactory::setXIncludeAware(jboolean a0)
{
	return call_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(11),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

jboolean javax::xml::parsers::SAXParserFactory::isXIncludeAware()
{
	return call_method<
		javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(12),
		javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::xml::parsers::SAXParserFactory,"javax/xml/parsers/SAXParserFactory")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,1,"newInstance","()Ljavax/xml/parsers/SAXParserFactory;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,2,"newSAXParser","()Ljavax/xml/parsers/SAXParser;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,3,"setNamespaceAware","(Z)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,4,"setValidating","(Z)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,5,"isNamespaceAware","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,6,"isValidating","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,7,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,8,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,9,"getSchema","()Ljavax/xml/validation/Schema;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,10,"setSchema","(Ljavax/xml/validation/Schema;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,11,"setXIncludeAware","(Z)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,12,"isXIncludeAware","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
