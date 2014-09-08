// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include "NativeSortItems.hpp"  // my header
#include "NativeItemList.hpp"
#include "NativeSortItems.hpp"
#include "NativeTextboxListener.hpp"

namespace djinni_generated {

NativeSortItems::NativeSortItems() : djinni::JniInterfaceCppExt<::textsort::SortItems>("com/dropbox/textsort/SortItems$NativeProxy") {}

using namespace ::djinni_generated;

CJNIEXPORT void JNICALL Java_com_dropbox_textsort_SortItems_00024NativeProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<std::shared_ptr<::textsort::SortItems>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_dropbox_textsort_SortItems_00024NativeProxy_native_1sort(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_items)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const std::shared_ptr<::textsort::SortItems> & ref = *reinterpret_cast<const std::shared_ptr<::textsort::SortItems>*>(nativeRef);
        ::textsort::ItemList c_items = NativeItemList::fromJava(jniEnv, j_items);
        jniEnv->DeleteLocalRef(j_items);

        ref->sort(c_items);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_textsort_SortItems_createWithListener(JNIEnv* jniEnv, jobject /*this*/, jobject j_listener)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        std::shared_ptr<::textsort::TextboxListener> c_listener = NativeTextboxListener::fromJava(jniEnv, j_listener);
        jniEnv->DeleteLocalRef(j_listener);

        std::shared_ptr<::textsort::SortItems> cr = ::textsort::SortItems::create_with_listener(c_listener);

        return NativeSortItems::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

}  // namespace djinni_generated
