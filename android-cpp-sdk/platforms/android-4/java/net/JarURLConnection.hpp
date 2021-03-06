/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.JarURLConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_JARURLCONNECTION_HPP_DECL
#define J2CPP_JAVA_NET_JARURLCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace net { class URLConnection; } } }
namespace j2cpp { namespace java { namespace util { namespace jar { class Attributes; } } } }
namespace j2cpp { namespace java { namespace util { namespace jar { class Manifest; } } } }
namespace j2cpp { namespace java { namespace util { namespace jar { class JarFile; } } } }
namespace j2cpp { namespace java { namespace util { namespace jar { class JarEntry; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/URL.hpp>
#include <java/net/URLConnection.hpp>
#include <java/security/cert/Certificate.hpp>
#include <java/util/jar/Attributes.hpp>
#include <java/util/jar/JarEntry.hpp>
#include <java/util/jar/JarFile.hpp>
#include <java/util/jar/Manifest.hpp>


namespace j2cpp {

namespace java { namespace net {

	class JarURLConnection;
	class JarURLConnection
		: public object<JarURLConnection>
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
		J2CPP_DECLARE_FIELD(0)

		explicit JarURLConnection(jobject jobj)
		: object<JarURLConnection>(jobj)
		{
		}

		operator local_ref<java::net::URLConnection>() const;
		operator local_ref<java::lang::Object>() const;


		local_ref< java::util::jar::Attributes > getAttributes();
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> > getCertificates();
		local_ref< java::lang::String > getEntryName();
		local_ref< java::util::jar::JarEntry > getJarEntry();
		local_ref< java::util::jar::Manifest > getManifest();
		local_ref< java::util::jar::JarFile > getJarFile();
		local_ref< java::net::URL > getJarFileURL();
		local_ref< java::util::jar::Attributes > getMainAttributes();

	}; //class JarURLConnection

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_JARURLCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_JARURLCONNECTION_HPP_IMPL
#define J2CPP_JAVA_NET_JARURLCONNECTION_HPP_IMPL

namespace j2cpp {



java::net::JarURLConnection::operator local_ref<java::net::URLConnection>() const
{
	return local_ref<java::net::URLConnection>(get_jobject());
}

java::net::JarURLConnection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::util::jar::Attributes > java::net::JarURLConnection::getAttributes()
{
	return call_method<
		java::net::JarURLConnection::J2CPP_CLASS_NAME,
		java::net::JarURLConnection::J2CPP_METHOD_NAME(1),
		java::net::JarURLConnection::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::jar::Attributes >
	>(get_jobject());
}

local_ref< array< local_ref< java::security::cert::Certificate >, 1> > java::net::JarURLConnection::getCertificates()
{
	return call_method<
		java::net::JarURLConnection::J2CPP_CLASS_NAME,
		java::net::JarURLConnection::J2CPP_METHOD_NAME(2),
		java::net::JarURLConnection::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> >
	>(get_jobject());
}

local_ref< java::lang::String > java::net::JarURLConnection::getEntryName()
{
	return call_method<
		java::net::JarURLConnection::J2CPP_CLASS_NAME,
		java::net::JarURLConnection::J2CPP_METHOD_NAME(3),
		java::net::JarURLConnection::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::util::jar::JarEntry > java::net::JarURLConnection::getJarEntry()
{
	return call_method<
		java::net::JarURLConnection::J2CPP_CLASS_NAME,
		java::net::JarURLConnection::J2CPP_METHOD_NAME(4),
		java::net::JarURLConnection::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::jar::JarEntry >
	>(get_jobject());
}

local_ref< java::util::jar::Manifest > java::net::JarURLConnection::getManifest()
{
	return call_method<
		java::net::JarURLConnection::J2CPP_CLASS_NAME,
		java::net::JarURLConnection::J2CPP_METHOD_NAME(5),
		java::net::JarURLConnection::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::jar::Manifest >
	>(get_jobject());
}

local_ref< java::util::jar::JarFile > java::net::JarURLConnection::getJarFile()
{
	return call_method<
		java::net::JarURLConnection::J2CPP_CLASS_NAME,
		java::net::JarURLConnection::J2CPP_METHOD_NAME(6),
		java::net::JarURLConnection::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::jar::JarFile >
	>(get_jobject());
}

local_ref< java::net::URL > java::net::JarURLConnection::getJarFileURL()
{
	return call_method<
		java::net::JarURLConnection::J2CPP_CLASS_NAME,
		java::net::JarURLConnection::J2CPP_METHOD_NAME(7),
		java::net::JarURLConnection::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::net::URL >
	>(get_jobject());
}

local_ref< java::util::jar::Attributes > java::net::JarURLConnection::getMainAttributes()
{
	return call_method<
		java::net::JarURLConnection::J2CPP_CLASS_NAME,
		java::net::JarURLConnection::J2CPP_METHOD_NAME(8),
		java::net::JarURLConnection::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::jar::Attributes >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(java::net::JarURLConnection,"java/net/JarURLConnection")
J2CPP_DEFINE_METHOD(java::net::JarURLConnection,0,"<init>","(Ljava/net/URL;)V")
J2CPP_DEFINE_METHOD(java::net::JarURLConnection,1,"getAttributes","()Ljava/util/jar/Attributes;")
J2CPP_DEFINE_METHOD(java::net::JarURLConnection,2,"getCertificates","()[java.security.cert.Certificate")
J2CPP_DEFINE_METHOD(java::net::JarURLConnection,3,"getEntryName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::JarURLConnection,4,"getJarEntry","()Ljava/util/jar/JarEntry;")
J2CPP_DEFINE_METHOD(java::net::JarURLConnection,5,"getManifest","()Ljava/util/jar/Manifest;")
J2CPP_DEFINE_METHOD(java::net::JarURLConnection,6,"getJarFile","()Ljava/util/jar/JarFile;")
J2CPP_DEFINE_METHOD(java::net::JarURLConnection,7,"getJarFileURL","()Ljava/net/URL;")
J2CPP_DEFINE_METHOD(java::net::JarURLConnection,8,"getMainAttributes","()Ljava/util/jar/Attributes;")
J2CPP_DEFINE_FIELD(java::net::JarURLConnection,0,"jarFileURLConnection","Ljava/net/URLConnection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_JARURLCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
