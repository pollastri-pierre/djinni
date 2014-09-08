// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#import "TXSSortItemsCppProxy+Private.h"
#import "DJIError.h"
#import "TXSItemList+Private.h"
#import "TXSSortItemsCppProxy+Private.h"
#import "TXSTextboxListenerObjcProxy+Private.h"
#include <exception>
#include <utility>

@implementation TXSSortItemsCppProxy

- (id)initWithCpp:(const std::shared_ptr<::textsort::SortItems> &)cppRef
{
    if (self = [super init]) {
        _cppRef = cppRef;
    }
    return self;
}

- (void)dealloc
{
    djinni::DbxCppWrapperCache<::textsort::SortItems> & cache = djinni::DbxCppWrapperCache<::textsort::SortItems>::getInstance();
    cache.remove(_cppRef);
}

+ (id)sortItemsWithCpp:(const std::shared_ptr<::textsort::SortItems> &)cppRef
{
    djinni::DbxCppWrapperCache<::textsort::SortItems> & cache = djinni::DbxCppWrapperCache<::textsort::SortItems>::getInstance();
    return cache.get(cppRef, [] (const std::shared_ptr<::textsort::SortItems> & p) { return [[TXSSortItemsCppProxy alloc] initWithCpp:p]; });
}

- (void)sort:(TXSItemList *)items {
    try {
        ::textsort::ItemList cppItems = std::move([items cppItemList]);
        _cppRef->sort(std::move(cppItems));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (id <TXSSortItems>)createWithListener:(id <TXSTextboxListener>)listener {
    try {
        std::shared_ptr<::textsort::TextboxListener> cppListener = ::djinni_generated::TextboxListenerObjcProxy::textbox_listener_with_objc(listener);
        std::shared_ptr<::textsort::SortItems> cppRet = ::textsort::SortItems::create_with_listener(std::move(cppListener));
        id <TXSSortItems> objcRet = [TXSSortItemsCppProxy sortItemsWithCpp:cppRet];
        return objcRet;
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

@end
