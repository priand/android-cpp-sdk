/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.ServerSocket
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SERVERSOCKET_HPP_DECL
#define J2CPP_JAVA_NET_SERVERSOCKET_HPP_DECL


namespace j2cpp { namespace java { namespace nio { namespace channels { class ServerSocketChannel; } } } }
namespace j2cpp { namespace java { namespace net { class SocketAddress; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace java { namespace net { class SocketImplFactory; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/Socket.hpp>
#include <java/net/SocketAddress.hpp>
#include <java/net/SocketImplFactory.hpp>
#include <java/nio/channels/ServerSocketChannel.hpp>


namespace j2cpp {

namespace java { namespace net {

	class ServerSocket;
	class ServerSocket
		: public object<ServerSocket>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)

		explicit ServerSocket(jobject jobj)
		: object<ServerSocket>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ServerSocket();
		ServerSocket(jint);
		ServerSocket(jint, jint);
		ServerSocket(jint, jint, local_ref< java::net::InetAddress > const&);
		local_ref< java::net::Socket > accept();
		void close();
		local_ref< java::net::InetAddress > getInetAddress();
		jint getLocalPort();
		jint getSoTimeout();
		static void setSocketFactory(local_ref< java::net::SocketImplFactory >  const&);
		void setSoTimeout(jint);
		local_ref< java::lang::String > toString();
		void bind(local_ref< java::net::SocketAddress >  const&);
		void bind(local_ref< java::net::SocketAddress >  const&, jint);
		local_ref< java::net::SocketAddress > getLocalSocketAddress();
		jboolean isBound();
		jboolean isClosed();
		void setReuseAddress(jboolean);
		jboolean getReuseAddress();
		void setReceiveBufferSize(jint);
		jint getReceiveBufferSize();
		local_ref< java::nio::channels::ServerSocketChannel > getChannel();
		void setPerformancePreferences(jint, jint, jint);
	}; //class ServerSocket

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SERVERSOCKET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SERVERSOCKET_HPP_IMPL
#define J2CPP_JAVA_NET_SERVERSOCKET_HPP_IMPL

namespace j2cpp {



java::net::ServerSocket::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::ServerSocket::ServerSocket()
: object<java::net::ServerSocket>(
	call_new_object<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(0),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::net::ServerSocket::ServerSocket(jint a0)
: object<java::net::ServerSocket>(
	call_new_object<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(1),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::net::ServerSocket::ServerSocket(jint a0, jint a1)
: object<java::net::ServerSocket>(
	call_new_object<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(2),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



java::net::ServerSocket::ServerSocket(jint a0, jint a1, local_ref< java::net::InetAddress > const &a2)
: object<java::net::ServerSocket>(
	call_new_object<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(3),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1, a2)
)
{
}


local_ref< java::net::Socket > java::net::ServerSocket::accept()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(4),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::net::Socket >
	>(get_jobject());
}

void java::net::ServerSocket::close()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(5),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

local_ref< java::net::InetAddress > java::net::ServerSocket::getInetAddress()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(6),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::net::InetAddress >
	>(get_jobject());
}

jint java::net::ServerSocket::getLocalPort()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(7),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

jint java::net::ServerSocket::getSoTimeout()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(8),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}


void java::net::ServerSocket::setSocketFactory(local_ref< java::net::SocketImplFactory > const &a0)
{
	return call_static_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(10),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(a0);
}

void java::net::ServerSocket::setSoTimeout(jint a0)
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(11),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::net::ServerSocket::toString()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(12),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::net::ServerSocket::bind(local_ref< java::net::SocketAddress > const &a0)
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(13),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void java::net::ServerSocket::bind(local_ref< java::net::SocketAddress > const &a0, jint a1)
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(14),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::net::SocketAddress > java::net::ServerSocket::getLocalSocketAddress()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(15),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::net::SocketAddress >
	>(get_jobject());
}

jboolean java::net::ServerSocket::isBound()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(16),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject());
}

jboolean java::net::ServerSocket::isClosed()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(17),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject());
}

void java::net::ServerSocket::setReuseAddress(jboolean a0)
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(18),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

jboolean java::net::ServerSocket::getReuseAddress()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(19),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(19), 
		jboolean
	>(get_jobject());
}

void java::net::ServerSocket::setReceiveBufferSize(jint a0)
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(20),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

jint java::net::ServerSocket::getReceiveBufferSize()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(21),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject());
}

local_ref< java::nio::channels::ServerSocketChannel > java::net::ServerSocket::getChannel()
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(22),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::nio::channels::ServerSocketChannel >
	>(get_jobject());
}

void java::net::ServerSocket::setPerformancePreferences(jint a0, jint a1, jint a2)
{
	return call_method<
		java::net::ServerSocket::J2CPP_CLASS_NAME,
		java::net::ServerSocket::J2CPP_METHOD_NAME(23),
		java::net::ServerSocket::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::net::ServerSocket,"java/net/ServerSocket")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,2,"<init>","(II)V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,3,"<init>","(IILjava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,4,"accept","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,5,"close","()V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,6,"getInetAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,7,"getLocalPort","()I")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,8,"getSoTimeout","()I")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,9,"implAccept","(Ljava/net/Socket;)V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,10,"setSocketFactory","(Ljava/net/SocketImplFactory;)V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,11,"setSoTimeout","(I)V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,12,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,13,"bind","(Ljava/net/SocketAddress;)V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,14,"bind","(Ljava/net/SocketAddress;I)V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,15,"getLocalSocketAddress","()Ljava/net/SocketAddress;")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,16,"isBound","()Z")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,17,"isClosed","()Z")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,18,"setReuseAddress","(Z)V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,19,"getReuseAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,20,"setReceiveBufferSize","(I)V")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,21,"getReceiveBufferSize","()I")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,22,"getChannel","()Ljava/nio/channels/ServerSocketChannel;")
J2CPP_DEFINE_METHOD(java::net::ServerSocket,23,"setPerformancePreferences","(III)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SERVERSOCKET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
