// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include "item_list.hpp"
#include "textbox_listener.hpp"
#include <memory>

namespace textsort {

class SortItems {
public:
    virtual ~SortItems() {}

    virtual void sort(const ItemList & items) = 0;

    static std::shared_ptr<SortItems> create_with_listener(const std::shared_ptr<TextboxListener> & listener);
};

}  // namespace textsort
