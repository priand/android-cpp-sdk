/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.ls.LSOutput
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_LSOUTPUT_HPP_DECL
#define J2CPP_ORG_W3C_DOM_LS_LSOUTPUT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/OutputStream.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom { namespace ls {

	class LSOutput;
	class LSOutput
		: public object<LSOutput>
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

		explicit LSOutput(jobject jobj)
		: object<LSOutput>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::io::Writer > getCharacterStream();
		void setCharacterStream(local_ref< java::io::Writer >  const&);
		local_ref< java::io::OutputStream > getByteStream();
		void setByteStream(local_ref< java::io::OutputStream >  const&);
		local_ref< java::lang::String > getSystemId();
		void setSystemId(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getEncoding();
		void setEncoding(local_ref< java::lang::String >  const&);
	}; //class LSOutput

} //namespace ls
} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_LSOUTPUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_LSOUTPUT_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_LS_LSOUTPUT_HPP_IMPL

namespace j2cpp {



org::w3c::dom::ls::LSOutput::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::io::Writer > org::w3c::dom::ls::LSOutput::getCharacterStream()
{
	return call_method<
		org::w3c::dom::ls::LSOutput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_NAME(0),
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::io::Writer >
	>(get_jobject());
}

void org::w3c::dom::ls::LSOutput::setCharacterStream(local_ref< java::io::Writer > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSOutput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_NAME(1),
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

local_ref< java::io::OutputStream > org::w3c::dom::ls::LSOutput::getByteStream()
{
	return call_method<
		org::w3c::dom::ls::LSOutput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_NAME(2),
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::io::OutputStream >
	>(get_jobject());
}

void org::w3c::dom::ls::LSOutput::setByteStream(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSOutput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_NAME(3),
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::ls::LSOutput::getSystemId()
{
	return call_method<
		org::w3c::dom::ls::LSOutput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_NAME(4),
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::w3c::dom::ls::LSOutput::setSystemId(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSOutput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_NAME(5),
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::ls::LSOutput::getEncoding()
{
	return call_method<
		org::w3c::dom::ls::LSOutput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_NAME(6),
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::w3c::dom::ls::LSOutput::setEncoding(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSOutput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_NAME(7),
		org::w3c::dom::ls::LSOutput::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::ls::LSOutput,"org/w3c/dom/ls/LSOutput")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSOutput,0,"getCharacterStream","()Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSOutput,1,"setCharacterStream","(Ljava/io/Writer;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSOutput,2,"getByteStream","()Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSOutput,3,"setByteStream","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSOutput,4,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSOutput,5,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSOutput,6,"getEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSOutput,7,"setEncoding","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_LSOUTPUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
