// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include "client_interface.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeClientInterface final : djinni::JniInterfaceJavaExt<ClientInterface, NativeClientInterface> {
public:
    using CppType = std::shared_ptr<ClientInterface>;
    using JniType = jobject;

    static std::shared_ptr<ClientInterface> fromJava(JNIEnv* jniEnv, jobject j) { return djinni::JniClass<NativeClientInterface>::get()._fromJava(jniEnv, j); }

    const djinni::GlobalRef<jclass> clazz { djinni::jniFindClass("com/dropbox/djinni/test/ClientInterface") };
    const jmethodID method_getRecord { djinni::jniGetMethodID(clazz.get(), "getRecord", "(Ljava/lang/String;)Lcom/dropbox/djinni/test/ClientReturnedRecord;") };

    class JavaProxy final : djinni::JniWrapperCacheEntry, public ClientInterface {
    public:
        JavaProxy(jobject obj);
        virtual ClientReturnedRecord get_record(const std::string & utf8string) override;

    private:
        using djinni::JniWrapperCacheEntry::getGlobalRef;
        friend class djinni::JniInterfaceJavaExt<ClientInterface, NativeClientInterface>;
        friend class djinni::JniWrapperCache<JavaProxy>;
    };

private:
    NativeClientInterface();
    friend class djinni::JniClass<NativeClientInterface>;
};

}  // namespace djinni_generated
