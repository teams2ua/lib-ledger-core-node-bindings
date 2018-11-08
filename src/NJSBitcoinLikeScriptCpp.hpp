// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_script.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKESCRIPT_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKESCRIPT_HPP


#include "NJSBitcoinLikeScriptChunkCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/BitcoinLikeScript.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeScript final {
public:

    static void Initialize(Local<Object> target);
    NJSBitcoinLikeScript() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeScript> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeScript_prototype;

private:
    static NAN_METHOD(head);

    static NAN_METHOD(toString);

    static NAN_METHOD(parse);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKESCRIPT_HPP
