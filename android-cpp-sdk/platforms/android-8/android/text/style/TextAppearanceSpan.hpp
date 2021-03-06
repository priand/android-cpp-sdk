/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.TextAppearanceSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace text { class ParcelableSpan; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class UpdateLayout; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class UpdateAppearance; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class CharacterStyle; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class MetricAffectingSpan; } } } }
namespace j2cpp { namespace android { namespace text { class TextPaint; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class ColorStateList; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/content/res/ColorStateList.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/text/ParcelableSpan.hpp>
#include <android/text/TextPaint.hpp>
#include <android/text/style/CharacterStyle.hpp>
#include <android/text/style/MetricAffectingSpan.hpp>
#include <android/text/style/UpdateAppearance.hpp>
#include <android/text/style/UpdateLayout.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class TextAppearanceSpan;
	class TextAppearanceSpan
		: public object<TextAppearanceSpan>
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

		explicit TextAppearanceSpan(jobject jobj)
		: object<TextAppearanceSpan>(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<android::text::ParcelableSpan>() const;
		operator local_ref<android::text::style::UpdateLayout>() const;
		operator local_ref<android::text::style::UpdateAppearance>() const;
		operator local_ref<android::text::style::CharacterStyle>() const;
		operator local_ref<android::text::style::MetricAffectingSpan>() const;
		operator local_ref<java::lang::Object>() const;


		TextAppearanceSpan(local_ref< android::content::Context > const&, jint);
		TextAppearanceSpan(local_ref< android::content::Context > const&, jint, jint);
		TextAppearanceSpan(local_ref< java::lang::String > const&, jint, jint, local_ref< android::content::res::ColorStateList > const&, local_ref< android::content::res::ColorStateList > const&);
		TextAppearanceSpan(local_ref< android::os::Parcel > const&);
		jint getSpanTypeId();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		local_ref< java::lang::String > getFamily();
		local_ref< android::content::res::ColorStateList > getTextColor();
		local_ref< android::content::res::ColorStateList > getLinkTextColor();
		jint getTextSize();
		jint getTextStyle();
		void updateDrawState(local_ref< android::text::TextPaint >  const&);
		void updateMeasureState(local_ref< android::text::TextPaint >  const&);
	}; //class TextAppearanceSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_IMPL

namespace j2cpp {



android::text::style::TextAppearanceSpan::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::text::style::TextAppearanceSpan::operator local_ref<android::text::ParcelableSpan>() const
{
	return local_ref<android::text::ParcelableSpan>(get_jobject());
}

android::text::style::TextAppearanceSpan::operator local_ref<android::text::style::UpdateLayout>() const
{
	return local_ref<android::text::style::UpdateLayout>(get_jobject());
}

android::text::style::TextAppearanceSpan::operator local_ref<android::text::style::UpdateAppearance>() const
{
	return local_ref<android::text::style::UpdateAppearance>(get_jobject());
}

android::text::style::TextAppearanceSpan::operator local_ref<android::text::style::CharacterStyle>() const
{
	return local_ref<android::text::style::CharacterStyle>(get_jobject());
}

android::text::style::TextAppearanceSpan::operator local_ref<android::text::style::MetricAffectingSpan>() const
{
	return local_ref<android::text::style::MetricAffectingSpan>(get_jobject());
}

android::text::style::TextAppearanceSpan::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::style::TextAppearanceSpan::TextAppearanceSpan(local_ref< android::content::Context > const &a0, jint a1)
: object<android::text::style::TextAppearanceSpan>(
	call_new_object<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(0),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::text::style::TextAppearanceSpan::TextAppearanceSpan(local_ref< android::content::Context > const &a0, jint a1, jint a2)
: object<android::text::style::TextAppearanceSpan>(
	call_new_object<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(1),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2)
)
{
}



android::text::style::TextAppearanceSpan::TextAppearanceSpan(local_ref< java::lang::String > const &a0, jint a1, jint a2, local_ref< android::content::res::ColorStateList > const &a3, local_ref< android::content::res::ColorStateList > const &a4)
: object<android::text::style::TextAppearanceSpan>(
	call_new_object<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(2),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2, a3, a4)
)
{
}



android::text::style::TextAppearanceSpan::TextAppearanceSpan(local_ref< android::os::Parcel > const &a0)
: object<android::text::style::TextAppearanceSpan>(
	call_new_object<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(3),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}


jint android::text::style::TextAppearanceSpan::getSpanTypeId()
{
	return call_method<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(4),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint android::text::style::TextAppearanceSpan::describeContents()
{
	return call_method<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(5),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

void android::text::style::TextAppearanceSpan::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(6),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::text::style::TextAppearanceSpan::getFamily()
{
	return call_method<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(7),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< android::content::res::ColorStateList > android::text::style::TextAppearanceSpan::getTextColor()
{
	return call_method<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(8),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::content::res::ColorStateList >
	>(get_jobject());
}

local_ref< android::content::res::ColorStateList > android::text::style::TextAppearanceSpan::getLinkTextColor()
{
	return call_method<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(9),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::content::res::ColorStateList >
	>(get_jobject());
}

jint android::text::style::TextAppearanceSpan::getTextSize()
{
	return call_method<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(10),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject());
}

jint android::text::style::TextAppearanceSpan::getTextStyle()
{
	return call_method<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(11),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

void android::text::style::TextAppearanceSpan::updateDrawState(local_ref< android::text::TextPaint > const &a0)
{
	return call_method<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(12),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void android::text::style::TextAppearanceSpan::updateMeasureState(local_ref< android::text::TextPaint > const &a0)
{
	return call_method<
		android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME,
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(13),
		android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::style::TextAppearanceSpan,"android/text/style/TextAppearanceSpan")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,0,"<init>","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,1,"<init>","(Landroid/content/Context;II)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,2,"<init>","(Ljava/lang/String;IILandroid/content/res/ColorStateList;Landroid/content/res/ColorStateList;)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,3,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,4,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,5,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,6,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,7,"getFamily","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,8,"getTextColor","()Landroid/content/res/ColorStateList;")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,9,"getLinkTextColor","()Landroid/content/res/ColorStateList;")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,10,"getTextSize","()I")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,11,"getTextStyle","()I")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,12,"updateDrawState","(Landroid/text/TextPaint;)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,13,"updateMeasureState","(Landroid/text/TextPaint;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
