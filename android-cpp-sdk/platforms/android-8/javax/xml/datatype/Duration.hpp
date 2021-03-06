/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.datatype.Duration
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_DATATYPE_DURATION_HPP_DECL
#define J2CPP_JAVAX_XML_DATATYPE_DURATION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Number; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace math { class BigDecimal; } } }
namespace j2cpp { namespace java { namespace util { class Calendar; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace javax { namespace xml { namespace namespace { class QName; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace datatype { namespace DatatypeConstants_ { class Field; } } } } }


#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/Date.hpp>
#include <javax/xml/datatype/DatatypeConstants.hpp>
#include <javax/xml/namespace/QName.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace datatype {

	class Duration;
	class Duration
		: public object<Duration>
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
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)

		explicit Duration(jobject jobj)
		: object<Duration>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Duration();
		local_ref< javax::xml::namespace::QName > getXMLSchemaType();
		jint getSign();
		jint getYears();
		jint getMonths();
		jint getDays();
		jint getHours();
		jint getMinutes();
		jint getSeconds();
		jlong getTimeInMillis(local_ref< java::util::Calendar >  const&);
		jlong getTimeInMillis(local_ref< java::util::Date >  const&);
		local_ref< java::lang::Number > getField(local_ref< javax::xml::datatype::DatatypeConstants_::Field >  const&);
		jboolean isSet(local_ref< javax::xml::datatype::DatatypeConstants_::Field >  const&);
		local_ref< javax::xml::datatype::Duration > add(local_ref< javax::xml::datatype::Duration >  const&);
		void addTo(local_ref< java::util::Calendar >  const&);
		void addTo(local_ref< java::util::Date >  const&);
		local_ref< javax::xml::datatype::Duration > subtract(local_ref< javax::xml::datatype::Duration >  const&);
		local_ref< javax::xml::datatype::Duration > multiply(jint);
		local_ref< javax::xml::datatype::Duration > multiply(local_ref< java::math::BigDecimal >  const&);
		local_ref< javax::xml::datatype::Duration > negate();
		local_ref< javax::xml::datatype::Duration > normalizeWith(local_ref< java::util::Calendar >  const&);
		jint compare(local_ref< javax::xml::datatype::Duration >  const&);
		jboolean isLongerThan(local_ref< javax::xml::datatype::Duration >  const&);
		jboolean isShorterThan(local_ref< javax::xml::datatype::Duration >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > toString();
	}; //class Duration

} //namespace datatype
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_DATATYPE_DURATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_DATATYPE_DURATION_HPP_IMPL
#define J2CPP_JAVAX_XML_DATATYPE_DURATION_HPP_IMPL

namespace j2cpp {



javax::xml::datatype::Duration::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


javax::xml::datatype::Duration::Duration()
: object<javax::xml::datatype::Duration>(
	call_new_object<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(0),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< javax::xml::namespace::QName > javax::xml::datatype::Duration::getXMLSchemaType()
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(1),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::xml::namespace::QName >
	>(get_jobject());
}

jint javax::xml::datatype::Duration::getSign()
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(2),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::Duration::getYears()
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(3),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::Duration::getMonths()
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(4),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::Duration::getDays()
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(5),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::Duration::getHours()
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(6),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::Duration::getMinutes()
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(7),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::Duration::getSeconds()
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(8),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

jlong javax::xml::datatype::Duration::getTimeInMillis(local_ref< java::util::Calendar > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(9),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(9), 
		jlong
	>(get_jobject(), a0);
}

jlong javax::xml::datatype::Duration::getTimeInMillis(local_ref< java::util::Date > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(10),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(10), 
		jlong
	>(get_jobject(), a0);
}

local_ref< java::lang::Number > javax::xml::datatype::Duration::getField(local_ref< javax::xml::datatype::DatatypeConstants_::Field > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(11),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Number >
	>(get_jobject(), a0);
}

jboolean javax::xml::datatype::Duration::isSet(local_ref< javax::xml::datatype::DatatypeConstants_::Field > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(12),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< javax::xml::datatype::Duration > javax::xml::datatype::Duration::add(local_ref< javax::xml::datatype::Duration > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(13),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< javax::xml::datatype::Duration >
	>(get_jobject(), a0);
}

void javax::xml::datatype::Duration::addTo(local_ref< java::util::Calendar > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(14),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::Duration::addTo(local_ref< java::util::Date > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(15),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

local_ref< javax::xml::datatype::Duration > javax::xml::datatype::Duration::subtract(local_ref< javax::xml::datatype::Duration > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(16),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< javax::xml::datatype::Duration >
	>(get_jobject(), a0);
}

local_ref< javax::xml::datatype::Duration > javax::xml::datatype::Duration::multiply(jint a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(17),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< javax::xml::datatype::Duration >
	>(get_jobject(), a0);
}

local_ref< javax::xml::datatype::Duration > javax::xml::datatype::Duration::multiply(local_ref< java::math::BigDecimal > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(18),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< javax::xml::datatype::Duration >
	>(get_jobject(), a0);
}

local_ref< javax::xml::datatype::Duration > javax::xml::datatype::Duration::negate()
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(19),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< javax::xml::datatype::Duration >
	>(get_jobject());
}

local_ref< javax::xml::datatype::Duration > javax::xml::datatype::Duration::normalizeWith(local_ref< java::util::Calendar > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(20),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< javax::xml::datatype::Duration >
	>(get_jobject(), a0);
}

jint javax::xml::datatype::Duration::compare(local_ref< javax::xml::datatype::Duration > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(21),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject(), a0);
}

jboolean javax::xml::datatype::Duration::isLongerThan(local_ref< javax::xml::datatype::Duration > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(22),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(22), 
		jboolean
	>(get_jobject(), a0);
}

jboolean javax::xml::datatype::Duration::isShorterThan(local_ref< javax::xml::datatype::Duration > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(23),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(23), 
		jboolean
	>(get_jobject(), a0);
}

jboolean javax::xml::datatype::Duration::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(24),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(get_jobject(), a0);
}

jint javax::xml::datatype::Duration::hashCode()
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(25),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > javax::xml::datatype::Duration::toString()
{
	return call_method<
		javax::xml::datatype::Duration::J2CPP_CLASS_NAME,
		javax::xml::datatype::Duration::J2CPP_METHOD_NAME(26),
		javax::xml::datatype::Duration::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::xml::datatype::Duration,"javax/xml/datatype/Duration")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,1,"getXMLSchemaType","()Ljavax/xml/namespace/QName;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,2,"getSign","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,3,"getYears","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,4,"getMonths","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,5,"getDays","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,6,"getHours","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,7,"getMinutes","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,8,"getSeconds","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,9,"getTimeInMillis","(Ljava/util/Calendar;)J")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,10,"getTimeInMillis","(Ljava/util/Date;)J")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,11,"getField","(Ljavax/xml/datatype/DatatypeConstants$Field;)Ljava/lang/Number;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,12,"isSet","(Ljavax/xml/datatype/DatatypeConstants$Field;)Z")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,13,"add","(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,14,"addTo","(Ljava/util/Calendar;)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,15,"addTo","(Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,16,"subtract","(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,17,"multiply","(I)Ljavax/xml/datatype/Duration;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,18,"multiply","(Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,19,"negate","()Ljavax/xml/datatype/Duration;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,20,"normalizeWith","(Ljava/util/Calendar;)Ljavax/xml/datatype/Duration;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,21,"compare","(Ljavax/xml/datatype/Duration;)I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,22,"isLongerThan","(Ljavax/xml/datatype/Duration;)Z")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,23,"isShorterThan","(Ljavax/xml/datatype/Duration;)Z")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,24,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,25,"hashCode","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::Duration,26,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_DATATYPE_DURATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
