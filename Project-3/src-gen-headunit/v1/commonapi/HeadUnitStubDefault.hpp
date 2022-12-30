/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_Head_Unit_STUB_DEFAULT_HPP_
#define V1_COMMONAPI_Head_Unit_STUB_DEFAULT_HPP_


#include <CommonAPI/Export.hpp>

#include <v1/commonapi/HeadUnitStub.hpp>
#include <cassert>
#include <sstream>

# if defined(_MSC_VER)
#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif
# endif

namespace v1 {
namespace commonapi {

/**
 * Provides a default implementation for HeadUnitStubRemoteEvent and
 * HeadUnitStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class COMMONAPI_EXPORT_CLASS_EXPLICIT HeadUnitStubDefault
    : public virtual HeadUnitStub {
public:
    COMMONAPI_EXPORT HeadUnitStubDefault()
        : remoteEventHandler_(this),
          interfaceVersion_(HeadUnit::getInterfaceVersion()) {
    }

    COMMONAPI_EXPORT const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return interfaceVersion_;
    }

    COMMONAPI_EXPORT HeadUnitStubRemoteEvent* initStubAdapter(const std::shared_ptr< HeadUnitStubAdapter> &_adapter) {
        CommonAPI::Stub<HeadUnitStubAdapter, HeadUnitStubRemoteEvent>::stubAdapter_ = _adapter;
        return &remoteEventHandler_;
    }

    COMMONAPI_EXPORT virtual void GetHUM(const std::shared_ptr<CommonAPI::ClientId> _client, HeadUnit::HUM _hum, GetHUMReply_t _reply) {
        (void)_client;
        (void)_hum;
        uint8_t outArg = 0u;
        _reply(outArg);
    }
    COMMONAPI_EXPORT virtual void GetTMP(const std::shared_ptr<CommonAPI::ClientId> _client, HeadUnit::TMP _tmp, GetTMPReply_t _reply) {
        (void)_client;
        (void)_tmp;
        int8_t outArg = 0;
        _reply(outArg);
    }
    COMMONAPI_EXPORT virtual void GetRPM(const std::shared_ptr<CommonAPI::ClientId> _client, HeadUnit::RPM _rpm, GetRPMReply_t _reply) {
        (void)_client;
        (void)_rpm;
        uint16_t outArg = 0u;
        _reply(outArg);
    }
    COMMONAPI_EXPORT virtual void GetSPD(const std::shared_ptr<CommonAPI::ClientId> _client, HeadUnit::SPD _spd, GetSPDReply_t _reply) {
        (void)_client;
        (void)_spd;
        uint8_t outArg = 0u;
        _reply(outArg);
    }
    COMMONAPI_EXPORT virtual void GetBAT(const std::shared_ptr<CommonAPI::ClientId> _client, HeadUnit::BAT _bat, GetBATReply_t _reply) {
        (void)_client;
        (void)_bat;
        uint8_t outArg = 0u;
        _reply(outArg);
    }
    COMMONAPI_EXPORT virtual void GetPRND(const std::shared_ptr<CommonAPI::ClientId> _client, HeadUnit::PRND _prnd, GetPRNDReply_t _reply) {
        (void)_client;
        (void)_prnd;
        uint8_t outArg = 0u;
        _reply(outArg);
    }


protected:
    class COMMONAPI_EXPORT_CLASS_EXPLICIT RemoteEventHandler: public virtual HeadUnitStubRemoteEvent {
    public:
        COMMONAPI_EXPORT RemoteEventHandler(HeadUnitStubDefault *_defaultStub)
            : 
              defaultStub_(_defaultStub) {
        }


    private:
        HeadUnitStubDefault *defaultStub_;
    };
protected:
    HeadUnitStubDefault::RemoteEventHandler remoteEventHandler_;

private:


    CommonAPI::Version interfaceVersion_;
};

} // namespace commonapi
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_Head_Unit_STUB_DEFAULT
