/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.mock.MockResources
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOCK_MOCKRESOURCES_HPP_DECL
#define J2CPP_ANDROID_TEST_MOCK_MOCKRESOURCES_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace util { class DisplayMetrics; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace util { class TypedValue; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class ColorStateList; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Configuration; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class XmlResourceParser; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class TypedArray; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class AssetFileDescriptor; } } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Movie; } } }


#include <android/content/res/AssetFileDescriptor.hpp>
#include <android/content/res/ColorStateList.hpp>
#include <android/content/res/Configuration.hpp>
#include <android/content/res/Resources.hpp>
#include <android/content/res/TypedArray.hpp>
#include <android/content/res/XmlResourceParser.hpp>
#include <android/graphics/Movie.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/util/DisplayMetrics.hpp>
#include <android/util/TypedValue.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace test { namespace mock {

	class MockResources;
	class MockResources
		: public object<MockResources>
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
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)

		explicit MockResources(jobject jobj)
		: object<MockResources>(jobj)
		{
		}

		operator local_ref<android::content::res::Resources>() const;
		operator local_ref<java::lang::Object>() const;


		MockResources();
		void updateConfiguration(local_ref< android::content::res::Configuration >  const&, local_ref< android::util::DisplayMetrics >  const&);
		local_ref< java::lang::CharSequence > getText(jint);
		local_ref< java::lang::CharSequence > getQuantityText(jint, jint);
		local_ref< java::lang::String > getString(jint);
		local_ref< java::lang::String > getString(jint, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::lang::String > getQuantityString(jint, jint, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::lang::String > getQuantityString(jint, jint);
		local_ref< java::lang::CharSequence > getText(jint, local_ref< java::lang::CharSequence >  const&);
		local_ref< array< local_ref< java::lang::CharSequence >, 1> > getTextArray(jint);
		local_ref< array< local_ref< java::lang::String >, 1> > getStringArray(jint);
		local_ref< array<jint,1> > getIntArray(jint);
		local_ref< android::content::res::TypedArray > obtainTypedArray(jint);
		jfloat getDimension(jint);
		jint getDimensionPixelOffset(jint);
		jint getDimensionPixelSize(jint);
		local_ref< android::graphics::drawable::Drawable > getDrawable(jint);
		local_ref< android::graphics::Movie > getMovie(jint);
		jint getColor(jint);
		local_ref< android::content::res::ColorStateList > getColorStateList(jint);
		jint getInteger(jint);
		local_ref< android::content::res::XmlResourceParser > getLayout(jint);
		local_ref< android::content::res::XmlResourceParser > getAnimation(jint);
		local_ref< android::content::res::XmlResourceParser > getXml(jint);
		local_ref< java::io::InputStream > openRawResource(jint);
		local_ref< android::content::res::AssetFileDescriptor > openRawResourceFd(jint);
		void getValue(jint, local_ref< android::util::TypedValue >  const&, jboolean);
		void getValue(local_ref< java::lang::String >  const&, local_ref< android::util::TypedValue >  const&, jboolean);
		local_ref< android::content::res::TypedArray > obtainAttributes(local_ref< android::util::AttributeSet >  const&, local_ref< array<jint,1> >  const&);
		local_ref< android::util::DisplayMetrics > getDisplayMetrics();
		local_ref< android::content::res::Configuration > getConfiguration();
		jint getIdentifier(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getResourceName(jint);
		local_ref< java::lang::String > getResourcePackageName(jint);
		local_ref< java::lang::String > getResourceTypeName(jint);
		local_ref< java::lang::String > getResourceEntryName(jint);
	}; //class MockResources

} //namespace mock
} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOCK_MOCKRESOURCES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOCK_MOCKRESOURCES_HPP_IMPL
#define J2CPP_ANDROID_TEST_MOCK_MOCKRESOURCES_HPP_IMPL

namespace j2cpp {



android::test::mock::MockResources::operator local_ref<android::content::res::Resources>() const
{
	return local_ref<android::content::res::Resources>(get_jobject());
}

android::test::mock::MockResources::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::test::mock::MockResources::MockResources()
: object<android::test::mock::MockResources>(
	call_new_object<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(0),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::test::mock::MockResources::updateConfiguration(local_ref< android::content::res::Configuration > const &a0, local_ref< android::util::DisplayMetrics > const &a1)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(1),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::CharSequence > android::test::mock::MockResources::getText(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(2),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::test::mock::MockResources::getQuantityText(jint a0, jint a1)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(3),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::test::mock::MockResources::getString(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(4),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::test::mock::MockResources::getString(jint a0, local_ref< array< local_ref< java::lang::Object >, 1> > const &a1)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(5),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::test::mock::MockResources::getQuantityString(jint a0, jint a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(6),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::String > android::test::mock::MockResources::getQuantityString(jint a0, jint a1)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(7),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::CharSequence > android::test::mock::MockResources::getText(jint a0, local_ref< java::lang::CharSequence > const &a1)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(8),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0, a1);
}

local_ref< array< local_ref< java::lang::CharSequence >, 1> > android::test::mock::MockResources::getTextArray(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(9),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< array< local_ref< java::lang::CharSequence >, 1> >
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > android::test::mock::MockResources::getStringArray(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(10),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject(), a0);
}

local_ref< array<jint,1> > android::test::mock::MockResources::getIntArray(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(11),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< array<jint,1> >
	>(get_jobject(), a0);
}

local_ref< android::content::res::TypedArray > android::test::mock::MockResources::obtainTypedArray(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(12),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::content::res::TypedArray >
	>(get_jobject(), a0);
}

jfloat android::test::mock::MockResources::getDimension(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(13),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(13), 
		jfloat
	>(get_jobject(), a0);
}

jint android::test::mock::MockResources::getDimensionPixelOffset(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(14),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject(), a0);
}

jint android::test::mock::MockResources::getDimensionPixelSize(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(15),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(15), 
		jint
	>(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::test::mock::MockResources::getDrawable(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(16),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject(), a0);
}

local_ref< android::graphics::Movie > android::test::mock::MockResources::getMovie(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(17),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< android::graphics::Movie >
	>(get_jobject(), a0);
}

jint android::test::mock::MockResources::getColor(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(18),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(get_jobject(), a0);
}

local_ref< android::content::res::ColorStateList > android::test::mock::MockResources::getColorStateList(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(19),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< android::content::res::ColorStateList >
	>(get_jobject(), a0);
}

jint android::test::mock::MockResources::getInteger(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(20),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject(), a0);
}

local_ref< android::content::res::XmlResourceParser > android::test::mock::MockResources::getLayout(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(21),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< android::content::res::XmlResourceParser >
	>(get_jobject(), a0);
}

local_ref< android::content::res::XmlResourceParser > android::test::mock::MockResources::getAnimation(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(22),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< android::content::res::XmlResourceParser >
	>(get_jobject(), a0);
}

local_ref< android::content::res::XmlResourceParser > android::test::mock::MockResources::getXml(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(23),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< android::content::res::XmlResourceParser >
	>(get_jobject(), a0);
}

local_ref< java::io::InputStream > android::test::mock::MockResources::openRawResource(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(24),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::io::InputStream >
	>(get_jobject(), a0);
}

local_ref< android::content::res::AssetFileDescriptor > android::test::mock::MockResources::openRawResourceFd(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(25),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< android::content::res::AssetFileDescriptor >
	>(get_jobject(), a0);
}

void android::test::mock::MockResources::getValue(jint a0, local_ref< android::util::TypedValue > const &a1, jboolean a2)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(26),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(26), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::test::mock::MockResources::getValue(local_ref< java::lang::String > const &a0, local_ref< android::util::TypedValue > const &a1, jboolean a2)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(27),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::content::res::TypedArray > android::test::mock::MockResources::obtainAttributes(local_ref< android::util::AttributeSet > const &a0, local_ref< array<jint,1> > const &a1)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(28),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< android::content::res::TypedArray >
	>(get_jobject(), a0, a1);
}

local_ref< android::util::DisplayMetrics > android::test::mock::MockResources::getDisplayMetrics()
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(29),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< android::util::DisplayMetrics >
	>(get_jobject());
}

local_ref< android::content::res::Configuration > android::test::mock::MockResources::getConfiguration()
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(30),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< android::content::res::Configuration >
	>(get_jobject());
}

jint android::test::mock::MockResources::getIdentifier(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(31),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(31), 
		jint
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::String > android::test::mock::MockResources::getResourceName(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(32),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::test::mock::MockResources::getResourcePackageName(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(33),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::test::mock::MockResources::getResourceTypeName(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(34),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(34), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::test::mock::MockResources::getResourceEntryName(jint a0)
{
	return call_method<
		android::test::mock::MockResources::J2CPP_CLASS_NAME,
		android::test::mock::MockResources::J2CPP_METHOD_NAME(35),
		android::test::mock::MockResources::J2CPP_METHOD_SIGNATURE(35), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::test::mock::MockResources,"android/test/mock/MockResources")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,1,"updateConfiguration","(Landroid/content/res/Configuration;Landroid/util/DisplayMetrics;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,2,"getText","(I)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,3,"getQuantityText","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,4,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,5,"getString","(I[java.lang.Object)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,6,"getQuantityString","(II[java.lang.Object)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,7,"getQuantityString","(II)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,8,"getText","(ILjava/lang/CharSequence;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,9,"getTextArray","(I)[java.lang.CharSequence")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,10,"getStringArray","(I)[java.lang.String")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,11,"getIntArray","(I)[I")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,12,"obtainTypedArray","(I)Landroid/content/res/TypedArray;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,13,"getDimension","(I)F")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,14,"getDimensionPixelOffset","(I)I")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,15,"getDimensionPixelSize","(I)I")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,16,"getDrawable","(I)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,17,"getMovie","(I)Landroid/graphics/Movie;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,18,"getColor","(I)I")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,19,"getColorStateList","(I)Landroid/content/res/ColorStateList;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,20,"getInteger","(I)I")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,21,"getLayout","(I)Landroid/content/res/XmlResourceParser;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,22,"getAnimation","(I)Landroid/content/res/XmlResourceParser;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,23,"getXml","(I)Landroid/content/res/XmlResourceParser;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,24,"openRawResource","(I)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,25,"openRawResourceFd","(I)Landroid/content/res/AssetFileDescriptor;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,26,"getValue","(ILandroid/util/TypedValue;Z)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,27,"getValue","(Ljava/lang/String;Landroid/util/TypedValue;Z)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,28,"obtainAttributes","(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,29,"getDisplayMetrics","()Landroid/util/DisplayMetrics;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,30,"getConfiguration","()Landroid/content/res/Configuration;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,31,"getIdentifier","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,32,"getResourceName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,33,"getResourcePackageName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,34,"getResourceTypeName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::mock::MockResources,35,"getResourceEntryName","(I)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOCK_MOCKRESOURCES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
