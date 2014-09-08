// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from set.djinni

#pragma once

#include "djinni_support.hpp"
#include "set_record.hpp"

namespace djinni_generated {

class NativeSetRecord final {
public:
    using CppType = SetRecord;
    using JniType = jobject;

    static jobject toJava(JNIEnv*, SetRecord);
    static SetRecord fromJava(JNIEnv*, jobject);

    const djinni::GlobalRef<jclass> clazz { djinni::jniFindClass("com/dropbox/djinni/test/SetRecord") };
    const jmethodID jconstructor { djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/HashSet;)V") };
    const jfieldID field_mSet { djinni::jniGetFieldID(clazz.get(), "mSet", "Ljava/util/HashSet;") };

private:
    NativeSetRecord() {}
    friend class djinni::JniClass<NativeSetRecord>;
};

}  // namespace djinni_generated
