/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.PasswordTransformationMethod
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_PASSWORDTRANSFORMATIONMETHOD_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_PASSWORDTRANSFORMATIONMETHOD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace text { class NoCopySpan; } } }
namespace j2cpp { namespace android { namespace text { namespace method { class TransformationMethod; } } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace text { class TextWatcher; } } }


#include <android/graphics/Rect.hpp>
#include <android/text/Editable.hpp>
#include <android/text/NoCopySpan.hpp>
#include <android/text/TextWatcher.hpp>
#include <android/text/method/TransformationMethod.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class PasswordTransformationMethod;
	class PasswordTransformationMethod
		: public object<PasswordTransformationMethod>
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

		explicit PasswordTransformationMethod(jobject jobj)
		: object<PasswordTransformationMethod>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::NoCopySpan>() const;
		operator local_ref<android::text::method::TransformationMethod>() const;
		operator local_ref<android::text::TextWatcher>() const;


		PasswordTransformationMethod();
		local_ref< java::lang::CharSequence > getTransformation(local_ref< java::lang::CharSequence >  const&, local_ref< android::view::View >  const&);
		static local_ref< android::text::method::PasswordTransformationMethod > getInstance();
		void beforeTextChanged(local_ref< java::lang::CharSequence >  const&, jint, jint, jint);
		void onTextChanged(local_ref< java::lang::CharSequence >  const&, jint, jint, jint);
		void afterTextChanged(local_ref< android::text::Editable >  const&);
		void onFocusChanged(local_ref< android::view::View >  const&, local_ref< java::lang::CharSequence >  const&, jboolean, jint, local_ref< android::graphics::Rect >  const&);
	}; //class PasswordTransformationMethod

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_PASSWORDTRANSFORMATIONMETHOD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_PASSWORDTRANSFORMATIONMETHOD_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_PASSWORDTRANSFORMATIONMETHOD_HPP_IMPL

namespace j2cpp {



android::text::method::PasswordTransformationMethod::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::method::PasswordTransformationMethod::operator local_ref<android::text::NoCopySpan>() const
{
	return local_ref<android::text::NoCopySpan>(get_jobject());
}

android::text::method::PasswordTransformationMethod::operator local_ref<android::text::method::TransformationMethod>() const
{
	return local_ref<android::text::method::TransformationMethod>(get_jobject());
}

android::text::method::PasswordTransformationMethod::operator local_ref<android::text::TextWatcher>() const
{
	return local_ref<android::text::TextWatcher>(get_jobject());
}


android::text::method::PasswordTransformationMethod::PasswordTransformationMethod()
: object<android::text::method::PasswordTransformationMethod>(
	call_new_object<
		android::text::method::PasswordTransformationMethod::J2CPP_CLASS_NAME,
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_NAME(0),
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::lang::CharSequence > android::text::method::PasswordTransformationMethod::getTransformation(local_ref< java::lang::CharSequence > const &a0, local_ref< android::view::View > const &a1)
{
	return call_method<
		android::text::method::PasswordTransformationMethod::J2CPP_CLASS_NAME,
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_NAME(1),
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0, a1);
}

local_ref< android::text::method::PasswordTransformationMethod > android::text::method::PasswordTransformationMethod::getInstance()
{
	return call_static_method<
		android::text::method::PasswordTransformationMethod::J2CPP_CLASS_NAME,
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_NAME(2),
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::text::method::PasswordTransformationMethod >
	>();
}

void android::text::method::PasswordTransformationMethod::beforeTextChanged(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::text::method::PasswordTransformationMethod::J2CPP_CLASS_NAME,
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_NAME(3),
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::text::method::PasswordTransformationMethod::onTextChanged(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::text::method::PasswordTransformationMethod::J2CPP_CLASS_NAME,
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_NAME(4),
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::text::method::PasswordTransformationMethod::afterTextChanged(local_ref< android::text::Editable > const &a0)
{
	return call_method<
		android::text::method::PasswordTransformationMethod::J2CPP_CLASS_NAME,
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_NAME(5),
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::text::method::PasswordTransformationMethod::onFocusChanged(local_ref< android::view::View > const &a0, local_ref< java::lang::CharSequence > const &a1, jboolean a2, jint a3, local_ref< android::graphics::Rect > const &a4)
{
	return call_method<
		android::text::method::PasswordTransformationMethod::J2CPP_CLASS_NAME,
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_NAME(6),
		android::text::method::PasswordTransformationMethod::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4);
}


J2CPP_DEFINE_CLASS(android::text::method::PasswordTransformationMethod,"android/text/method/PasswordTransformationMethod")
J2CPP_DEFINE_METHOD(android::text::method::PasswordTransformationMethod,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::PasswordTransformationMethod,1,"getTransformation","(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::method::PasswordTransformationMethod,2,"getInstance","()Landroid/text/method/PasswordTransformationMethod;")
J2CPP_DEFINE_METHOD(android::text::method::PasswordTransformationMethod,3,"beforeTextChanged","(Ljava/lang/CharSequence;III)V")
J2CPP_DEFINE_METHOD(android::text::method::PasswordTransformationMethod,4,"onTextChanged","(Ljava/lang/CharSequence;III)V")
J2CPP_DEFINE_METHOD(android::text::method::PasswordTransformationMethod,5,"afterTextChanged","(Landroid/text/Editable;)V")
J2CPP_DEFINE_METHOD(android::text::method::PasswordTransformationMethod,6,"onFocusChanged","(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_PASSWORDTRANSFORMATIONMETHOD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
