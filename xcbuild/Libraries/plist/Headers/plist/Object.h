/**
 Copyright (c) 2015-present, Facebook, Inc.
 All rights reserved.

 This source code is licensed under the BSD-style license found in the
 LICENSE file in the root directory of this source tree. An additional grant
 of patent rights can be found in the PATENTS file in the same directory.
 */

#ifndef __plist_Object_h
#define __plist_Object_h

#include <plist/Base.h>

#include <memory>
#include <string>

namespace plist {

class Object {
public:
    typedef std::unique_ptr <Object> UniquePtr;

public:
    enum Type {
        kTypeNone,
        kTypeInteger,
        kTypeReal,
        kTypeString,
        kTypeBoolean,
        kTypeNull,
        kTypeArray,
        kTypeDictionary,
        kTypeData,
        kTypeDate,
        kTypeUID,
    };

protected:
    Object()
    {
    }

public:
    virtual ~Object()
    {
    }

public:
    virtual Type type() const = 0;

public:
    virtual void release() const
    {
        delete this;
    }

protected:
    virtual std::unique_ptr<Object> _copy() const = 0;

public:
    std::unique_ptr<Object> copy() const
    { return _copy(); }

public:
    virtual bool equals(Object const *obj) const
    {
        return (obj == this);
    }

public:
    static std::unique_ptr<Object> Coerce(Object const *obj);

public:
    static inline enum Object::Type Type()
    {
        return Object::kTypeNone;
    }

public:
    inline char const *typeName() const
    {
        return GetTypeName(type());
    }

public:
    static char const *GetTypeName(enum Object::Type type);
};

template <typename T>
static inline T *CastTo(Object *obj)
{
    return (obj != nullptr && (obj->type() == T::Type() || T::Type() == Object::Type())) ? static_cast <T *> (obj) : nullptr;
}

template <typename T>
static inline T const *CastTo(Object const *obj)
{
    return (obj != nullptr && (obj->type() == T::Type() || T::Type() == Object::Type())) ? static_cast <T const *> (obj) : nullptr;
}

}

#endif  // !__plist_Object_h
