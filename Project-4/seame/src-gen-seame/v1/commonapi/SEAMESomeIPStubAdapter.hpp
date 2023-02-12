/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V1_COMMONAPI_SEAME_SOMEIP_STUB_ADAPTER_HPP_
#define V1_COMMONAPI_SEAME_SOMEIP_STUB_ADAPTER_HPP_

#include <v1/commonapi/SEAMEStub.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

template <typename _Stub = ::v1::commonapi::SEAMEStub, typename... _Stubs>
class SEAMESomeIPStubAdapterInternal
    : public virtual SEAMEStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>,
      public std::enable_shared_from_this< SEAMESomeIPStubAdapterInternal<_Stub, _Stubs...>>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> SEAMESomeIPStubAdapterHelper;

    ~SEAMESomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        SEAMESomeIPStubAdapterHelper::deinit();
    }

    void fireHumAttributeChanged(const uint8_t &_value);
    
    void fireTmpAttributeChanged(const int8_t &_value);
    
    void fireRpmAttributeChanged(const uint16_t &_value);
    
    void fireSpdAttributeChanged(const uint8_t &_value);
    
    void fireBatAttributeChanged(const uint8_t &_value);
    
    void fireUltrasonicAttributeChanged(const uint8_t &_value);
    
    void deactivateManagedInstances() {}
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        CommonAPI::Version
    > getSEAMEInterfaceVersionStubDispatcher;

    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        uint8_t,
        CommonAPI::SomeIP::IntegerDeployment<uint8_t>
    > getHumAttributeStubDispatcher;
    
    CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        uint8_t,
        CommonAPI::SomeIP::IntegerDeployment<uint8_t>
    > setHumAttributeStubDispatcher;
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        int8_t,
        CommonAPI::SomeIP::IntegerDeployment<int8_t>
    > getTmpAttributeStubDispatcher;
    
    CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        int8_t,
        CommonAPI::SomeIP::IntegerDeployment<int8_t>
    > setTmpAttributeStubDispatcher;
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        uint16_t,
        CommonAPI::SomeIP::IntegerDeployment<uint16_t>
    > getRpmAttributeStubDispatcher;
    
    CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        uint16_t,
        CommonAPI::SomeIP::IntegerDeployment<uint16_t>
    > setRpmAttributeStubDispatcher;
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        uint8_t,
        CommonAPI::SomeIP::IntegerDeployment<uint8_t>
    > getSpdAttributeStubDispatcher;
    
    CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        uint8_t,
        CommonAPI::SomeIP::IntegerDeployment<uint8_t>
    > setSpdAttributeStubDispatcher;
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        uint8_t,
        CommonAPI::SomeIP::IntegerDeployment<uint8_t>
    > getBatAttributeStubDispatcher;
    
    CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        uint8_t,
        CommonAPI::SomeIP::IntegerDeployment<uint8_t>
    > setBatAttributeStubDispatcher;
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        uint8_t,
        CommonAPI::SomeIP::IntegerDeployment<uint8_t>
    > getUltrasonicAttributeStubDispatcher;
    
    CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::commonapi::SEAMEStub,
        uint8_t,
        CommonAPI::SomeIP::IntegerDeployment<uint8_t>
    > setUltrasonicAttributeStubDispatcher;
    
    SEAMESomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        SEAMESomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< SEAMEStub>(_stub)),
        getSEAMEInterfaceVersionStubDispatcher(&SEAMEStub::lockInterfaceVersionAttribute, &SEAMEStub::getInterfaceVersion, false, true),
        getHumAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockHumAttribute,
            &::v1::commonapi::SEAMEStub::getHumAttribute,
            false,
            _stub->hasElement(0)),
        setHumAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockHumAttribute,
            &::v1::commonapi::SEAMEStub::getHumAttribute,
            &SEAMEStubRemoteEvent::onRemoteSetHumAttribute,
            &SEAMEStubRemoteEvent::onRemoteHumAttributeChanged,
            &SEAMEStubAdapter::fireHumAttributeChanged,
            false,
            _stub->hasElement(0))
        ,
        getTmpAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockTmpAttribute,
            &::v1::commonapi::SEAMEStub::getTmpAttribute,
            false,
            _stub->hasElement(1)),
        setTmpAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockTmpAttribute,
            &::v1::commonapi::SEAMEStub::getTmpAttribute,
            &SEAMEStubRemoteEvent::onRemoteSetTmpAttribute,
            &SEAMEStubRemoteEvent::onRemoteTmpAttributeChanged,
            &SEAMEStubAdapter::fireTmpAttributeChanged,
            false,
            _stub->hasElement(1))
        ,
        getRpmAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockRpmAttribute,
            &::v1::commonapi::SEAMEStub::getRpmAttribute,
            false,
            _stub->hasElement(2)),
        setRpmAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockRpmAttribute,
            &::v1::commonapi::SEAMEStub::getRpmAttribute,
            &SEAMEStubRemoteEvent::onRemoteSetRpmAttribute,
            &SEAMEStubRemoteEvent::onRemoteRpmAttributeChanged,
            &SEAMEStubAdapter::fireRpmAttributeChanged,
            false,
            _stub->hasElement(2))
        ,
        getSpdAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockSpdAttribute,
            &::v1::commonapi::SEAMEStub::getSpdAttribute,
            false,
            _stub->hasElement(3)),
        setSpdAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockSpdAttribute,
            &::v1::commonapi::SEAMEStub::getSpdAttribute,
            &SEAMEStubRemoteEvent::onRemoteSetSpdAttribute,
            &SEAMEStubRemoteEvent::onRemoteSpdAttributeChanged,
            &SEAMEStubAdapter::fireSpdAttributeChanged,
            false,
            _stub->hasElement(3))
        ,
        getBatAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockBatAttribute,
            &::v1::commonapi::SEAMEStub::getBatAttribute,
            false,
            _stub->hasElement(4)),
        setBatAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockBatAttribute,
            &::v1::commonapi::SEAMEStub::getBatAttribute,
            &SEAMEStubRemoteEvent::onRemoteSetBatAttribute,
            &SEAMEStubRemoteEvent::onRemoteBatAttributeChanged,
            &SEAMEStubAdapter::fireBatAttributeChanged,
            false,
            _stub->hasElement(4))
        ,
        getUltrasonicAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockUltrasonicAttribute,
            &::v1::commonapi::SEAMEStub::getUltrasonicAttribute,
            false,
            _stub->hasElement(5)),
        setUltrasonicAttributeStubDispatcher(
            &::v1::commonapi::SEAMEStub::lockUltrasonicAttribute,
            &::v1::commonapi::SEAMEStub::getUltrasonicAttribute,
            &SEAMEStubRemoteEvent::onRemoteSetUltrasonicAttribute,
            &SEAMEStubRemoteEvent::onRemoteUltrasonicAttributeChanged,
            &SEAMEStubAdapter::fireUltrasonicAttributeChanged,
            false,
            _stub->hasElement(5))
    {
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbb8) }, &getHumAttributeStubDispatcher );
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbb9) }, &setHumAttributeStubDispatcher );
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbba) }, &getTmpAttributeStubDispatcher );
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbbb) }, &setTmpAttributeStubDispatcher );
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbbc) }, &getRpmAttributeStubDispatcher );
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbbd) }, &setRpmAttributeStubDispatcher );
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbbe) }, &getSpdAttributeStubDispatcher );
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbbf) }, &setSpdAttributeStubDispatcher );
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbc0) }, &getBatAttributeStubDispatcher );
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbc1) }, &setBatAttributeStubDispatcher );
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbc2) }, &getUltrasonicAttributeStubDispatcher );
        SEAMESomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xbc3) }, &setUltrasonicAttributeStubDispatcher );
        std::shared_ptr<CommonAPI::SomeIP::ClientId> itsClient = std::make_shared<CommonAPI::SomeIP::ClientId>(0xFFFF, 0xFFFFFFFF, 0xFFFFFFFF);

        // Provided events/fields
        if (_stub->hasElement(0)) {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(UNDEFINED_EVENTGROUP_ID));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x80f2), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_FIELD, CommonAPI::SomeIP::reliability_type_e::RT_UNRELIABLE);
            fireHumAttributeChanged(std::dynamic_pointer_cast< ::v1::commonapi::SEAMEStub>(_stub)->getHumAttribute(itsClient));
        }

        if (_stub->hasElement(1)) {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(UNDEFINED_EVENTGROUP_ID));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x80f3), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_FIELD, CommonAPI::SomeIP::reliability_type_e::RT_UNRELIABLE);
            fireTmpAttributeChanged(std::dynamic_pointer_cast< ::v1::commonapi::SEAMEStub>(_stub)->getTmpAttribute(itsClient));
        }

        if (_stub->hasElement(2)) {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(UNDEFINED_EVENTGROUP_ID));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x80f4), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_FIELD, CommonAPI::SomeIP::reliability_type_e::RT_UNRELIABLE);
            fireRpmAttributeChanged(std::dynamic_pointer_cast< ::v1::commonapi::SEAMEStub>(_stub)->getRpmAttribute(itsClient));
        }

        if (_stub->hasElement(3)) {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(UNDEFINED_EVENTGROUP_ID));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x80f5), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_FIELD, CommonAPI::SomeIP::reliability_type_e::RT_UNRELIABLE);
            fireSpdAttributeChanged(std::dynamic_pointer_cast< ::v1::commonapi::SEAMEStub>(_stub)->getSpdAttribute(itsClient));
        }

        if (_stub->hasElement(4)) {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(UNDEFINED_EVENTGROUP_ID));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x80f6), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_FIELD, CommonAPI::SomeIP::reliability_type_e::RT_UNRELIABLE);
            fireBatAttributeChanged(std::dynamic_pointer_cast< ::v1::commonapi::SEAMEStub>(_stub)->getBatAttribute(itsClient));
        }

        if (_stub->hasElement(5)) {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(UNDEFINED_EVENTGROUP_ID));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x80f7), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_FIELD, CommonAPI::SomeIP::reliability_type_e::RT_UNRELIABLE);
            fireUltrasonicAttributeChanged(std::dynamic_pointer_cast< ::v1::commonapi::SEAMEStub>(_stub)->getUltrasonicAttribute(itsClient));
        }

    }

    // Register/Unregister event handlers for selective broadcasts
    void registerSelectiveEventHandlers();
    void unregisterSelectiveEventHandlers();

};

template <typename _Stub, typename... _Stubs>
void SEAMESomeIPStubAdapterInternal<_Stub, _Stubs...>::fireHumAttributeChanged(const uint8_t &_value) {
    CommonAPI::Deployable< uint8_t, CommonAPI::SomeIP::IntegerDeployment<uint8_t>> deployedValue(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint8_t,
                CommonAPI::SomeIP::IntegerDeployment<uint8_t>
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x80f2),
        false,
        deployedValue
    );
}

template <typename _Stub, typename... _Stubs>
void SEAMESomeIPStubAdapterInternal<_Stub, _Stubs...>::fireTmpAttributeChanged(const int8_t &_value) {
    CommonAPI::Deployable< int8_t, CommonAPI::SomeIP::IntegerDeployment<int8_t>> deployedValue(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<int8_t>* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                int8_t,
                CommonAPI::SomeIP::IntegerDeployment<int8_t>
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x80f3),
        false,
        deployedValue
    );
}

template <typename _Stub, typename... _Stubs>
void SEAMESomeIPStubAdapterInternal<_Stub, _Stubs...>::fireRpmAttributeChanged(const uint16_t &_value) {
    CommonAPI::Deployable< uint16_t, CommonAPI::SomeIP::IntegerDeployment<uint16_t>> deployedValue(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint16_t,
                CommonAPI::SomeIP::IntegerDeployment<uint16_t>
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x80f4),
        false,
        deployedValue
    );
}

template <typename _Stub, typename... _Stubs>
void SEAMESomeIPStubAdapterInternal<_Stub, _Stubs...>::fireSpdAttributeChanged(const uint8_t &_value) {
    CommonAPI::Deployable< uint8_t, CommonAPI::SomeIP::IntegerDeployment<uint8_t>> deployedValue(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint8_t,
                CommonAPI::SomeIP::IntegerDeployment<uint8_t>
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x80f5),
        false,
        deployedValue
    );
}

template <typename _Stub, typename... _Stubs>
void SEAMESomeIPStubAdapterInternal<_Stub, _Stubs...>::fireBatAttributeChanged(const uint8_t &_value) {
    CommonAPI::Deployable< uint8_t, CommonAPI::SomeIP::IntegerDeployment<uint8_t>> deployedValue(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint8_t,
                CommonAPI::SomeIP::IntegerDeployment<uint8_t>
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x80f6),
        false,
        deployedValue
    );
}

template <typename _Stub, typename... _Stubs>
void SEAMESomeIPStubAdapterInternal<_Stub, _Stubs...>::fireUltrasonicAttributeChanged(const uint8_t &_value) {
    CommonAPI::Deployable< uint8_t, CommonAPI::SomeIP::IntegerDeployment<uint8_t>> deployedValue(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint8_t,
                CommonAPI::SomeIP::IntegerDeployment<uint8_t>
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x80f7),
        false,
        deployedValue
    );
}


template <typename _Stub, typename... _Stubs>
void SEAMESomeIPStubAdapterInternal<_Stub, _Stubs...>::registerSelectiveEventHandlers() {
}

template <typename _Stub, typename... _Stubs>
void SEAMESomeIPStubAdapterInternal<_Stub, _Stubs...>::unregisterSelectiveEventHandlers() {
}

template <typename _Stub = ::v1::commonapi::SEAMEStub, typename... _Stubs>
class SEAMESomeIPStubAdapter
    : public SEAMESomeIPStubAdapterInternal<_Stub, _Stubs...> {
public:
    SEAMESomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          SEAMESomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_SEAME_SOMEIP_STUB_ADAPTER_HPP_
