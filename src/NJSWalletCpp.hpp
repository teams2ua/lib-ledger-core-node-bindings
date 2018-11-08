// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSWALLET_HPP
#define DJINNI_GENERATED_NJSWALLET_HPP


#include "../include/AccountCreationInfo.hpp"
#include "../include/BitcoinLikeNetworkParameters.hpp"
#include "../include/Currency.hpp"
#include "../include/CurrencyUnit.hpp"
#include "../include/ExtendedKeyAccountCreationInfo.hpp"
#include "../include/WalletType.hpp"
#include "NJSAccountCallback.hpp"
#include "NJSAccountCreationInfoCallback.hpp"
#include "NJSAccountListCallback.hpp"
#include "NJSBitcoinLikeWalletCpp.hpp"
#include "NJSBlockCallback.hpp"
#include "NJSErrorCodeCallback.hpp"
#include "NJSEventBusCpp.hpp"
#include "NJSExtendedKeyAccountCreationInfoCallback.hpp"
#include "NJSI32Callback.hpp"
#include "NJSLoggerCpp.hpp"
#include "NJSPreferencesCpp.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/Wallet.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSWallet final {
public:

    static void Initialize(Local<Object> target);
    NJSWallet() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::Wallet> &object);
    static Nan::Persistent<ObjectTemplate> Wallet_prototype;

private:
    /**
     *Get name of wallet
     *@return string
     */
    static NAN_METHOD(getName);

    /**
     *Get account with specific index
     *@param index, 32 bits integer, index of account in wallet
     *@param callback, Callback returning, if getAccount succeed, an Account object with given index
     */
    static NAN_METHOD(getAccount);

    /**
     *Get number of accounts instanciated under wallet
     *@param callback, Callback returning, if getAccountCount succeed, a 32 bits integer representing number of accounts
     */
    static NAN_METHOD(getAccountCount);

    /**
     *Get list of accounts instanciated under wallet in a given range
     *@param offset, 32 bits integer from which we retrieve accounts
     *@param count, 32 bits integer, number of accounts to retrieve
     *@param callback, ListCallback returning, if getAccounts succeed, list of Accounts object
     */
    static NAN_METHOD(getAccounts);

    /**
     *Get index of next account to create
     *@return callback, Callback returning a 32 bits integer
     */
    static NAN_METHOD(getNextAccountIndex);

    /**
     *Return event bus through which wallet synchronizes it's accounts and interact with blockchain
     *@return EventBus object
     */
    static NAN_METHOD(getEventBus);

    /**
     *Return synchronization status wallet, true if at least one of accounts is synchronizing
     *@return bool
     */
    static NAN_METHOD(isSynchronizing);

    /**
     *Start synchronization of all accounts under wallet
     *@return EventBus object through which wallet get notified of account's synchronization status
     */
    static NAN_METHOD(synchronize);

    /**
     *Get wallet preferences
     *@return Preferences object
     */
    static NAN_METHOD(getPreferences);

    /**
     *Return account's logger which provides all needed (e.g. database) logs
     *@return Logger Object
     */
    static NAN_METHOD(getLogger);

    /**
     *Get preferences of specific account
     *@param index, 32 bits integer, account's index
     *@return Preferences object
     */
    static NAN_METHOD(getAccountPreferences);

    /**
     * asBitcoinLikeWallet(): Callback<BitcoinLikeWallet>;
     * asEthereumLikeWallet(): Callback<EthereumLikeWallet>;
     * asRippleLikeWallet(): Callback<RippleLikeWallet>;
     *Convert wallet to a Bitcoin one
     *@return BitcoinWallet object
     */
    static NAN_METHOD(asBitcoinLikeWallet);

    /**
     *Get currency of wallet
     *@return Currency object
     */
    static NAN_METHOD(getCurrency);

    /**
     *Know if wallet is a Bitcoin one
     *@return bool
     */
    static NAN_METHOD(isInstanceOfBitcoinLikeWallet);

    /**
     *Know if wallet is a Ethereum one
     *@return bool
     */
    static NAN_METHOD(isInstanceOfEthereumLikeWallet);

    /**
     *Know if wallet is a Ripple one
     *@return bool
     */
    static NAN_METHOD(isInstanceOfRippleLikeWallet);

    /**
     *Get wallet type
     *@return WalletType object
     */
    static NAN_METHOD(getWalletType);

    /**
     *Get last block of blockchain the wallet operates on
     *@param callback, Callback returning a Block object
     */
    static NAN_METHOD(getLastBlock);

    /**
     *Return infos about the creation of specific account
     *@param accountIndex, 32 bits account, index of account in wallet
     *@param callback, Callback returning an AccountCreationInfo
     */
    static NAN_METHOD(getAccountCreationInfo);

    /**TODO */
    static NAN_METHOD(getExtendedKeyAccountCreationInfo);

    /**
     *Return infos about the next created account
     *@param callback, Callback returning an AccountCreationInfo
     */
    static NAN_METHOD(getNextAccountCreationInfo);

    /**TODO */
    static NAN_METHOD(getNextExtendedKeyAccountCreationInfo);

    /**
     *Get account from given account creation infos
     *@param accountCreationInfo, AccountCreationInfo object
     *@param callback, Callback returning an Account object with given creation infos
     */
    static NAN_METHOD(newAccountWithInfo);

    /**TODO */
    static NAN_METHOD(newAccountWithExtendedKeyInfo);

    /**
     *Erase data (in user's DB) relative to wallet since given date
     *@param date, start date of data deletion
     */
    static NAN_METHOD(eraseDataSince);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSWALLET_HPP
