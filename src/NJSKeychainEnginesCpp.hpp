// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#ifndef DJINNI_GENERATED_NJSKEYCHAINENGINES_HPP
#define DJINNI_GENERATED_NJSKEYCHAINENGINES_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/KeychainEngines.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSKeychainEngines final {
public:

    static void Initialize(Local<Object> target);
    NJSKeychainEngines() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::KeychainEngines> &object);
    static Nan::Persistent<ObjectTemplate> KeychainEngines_prototype;

private:
    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSKEYCHAINENGINES_HPP
