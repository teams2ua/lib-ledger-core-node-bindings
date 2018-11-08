// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#ifndef DJINNI_GENERATED_NJSLEDGERCORE_HPP
#define DJINNI_GENERATED_NJSLEDGERCORE_HPP


#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/LedgerCore.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSLedgerCore final {
public:

    static void Initialize(Local<Object> target);
    NJSLedgerCore() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::LedgerCore> &object);
    static Nan::Persistent<ObjectTemplate> LedgerCore_prototype;

private:
    /**
     * Gets the version of the library as a human readable string.
     * @return The version of the library (e.g. '1.0.1')
     */
    static NAN_METHOD(getStringVersion);

    /**
     * Get the integer version of the Library
     * @return The integer version of the library
     */
    static NAN_METHOD(getIntVersion);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSLEDGERCORE_HPP
