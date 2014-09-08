// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#pragma once

#include "djinni_support.hpp"
#include "map_list_record.hpp"

namespace djinni_generated {

class NativeMapListRecord final {
public:
    using CppType = MapListRecord;
    using JniType = jobject;

    static jobject toJava(JNIEnv*, MapListRecord);
    static MapListRecord fromJava(JNIEnv*, jobject);

    const djinni::GlobalRef<jclass> clazz { djinni::jniFindClass("com/dropbox/djinni/test/MapListRecord") };
    const jmethodID jconstructor { djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/ArrayList;)V") };
    const jfieldID field_mMapList { djinni::jniGetFieldID(clazz.get(), "mMapList", "Ljava/util/ArrayList;") };

private:
    NativeMapListRecord() {}
    friend class djinni::JniClass<NativeMapListRecord>;
};

}  // namespace djinni_generated
