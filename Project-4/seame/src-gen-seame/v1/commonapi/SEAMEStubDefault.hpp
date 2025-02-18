/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_SEAME_STUB_DEFAULT_HPP_
#define V1_COMMONAPI_SEAME_STUB_DEFAULT_HPP_


#include <CommonAPI/Export.hpp>

#include <v1/commonapi/SEAMEStub.hpp>
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
 * Provides a default implementation for SEAMEStubRemoteEvent and
 * SEAMEStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class COMMONAPI_EXPORT_CLASS_EXPLICIT SEAMEStubDefault
    : public virtual SEAMEStub {
public:
    COMMONAPI_EXPORT SEAMEStubDefault()
        : remoteEventHandler_(this),
          interfaceVersion_(SEAME::getInterfaceVersion()) {
    }

    COMMONAPI_EXPORT const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return interfaceVersion_;
    }

    COMMONAPI_EXPORT SEAMEStubRemoteEvent* initStubAdapter(const std::shared_ptr< SEAMEStubAdapter> &_adapter) {
        CommonAPI::Stub<SEAMEStubAdapter, SEAMEStubRemoteEvent>::stubAdapter_ = _adapter;
        return &remoteEventHandler_;
    }

    COMMONAPI_EXPORT virtual const uint8_t &getHumAttribute() {
        return humAttributeValue_;
    }
    COMMONAPI_EXPORT virtual const uint8_t &getHumAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return getHumAttribute();
    }
    COMMONAPI_EXPORT virtual void setHumAttribute(uint8_t _value) {
        const bool valueChanged = trySetHumAttribute(std::move(_value));
        if (valueChanged) {
            fireHumAttributeChanged(humAttributeValue_);
        }
    }
    COMMONAPI_EXPORT virtual const int8_t &getTmpAttribute() {
        return tmpAttributeValue_;
    }
    COMMONAPI_EXPORT virtual const int8_t &getTmpAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return getTmpAttribute();
    }
    COMMONAPI_EXPORT virtual void setTmpAttribute(int8_t _value) {
        const bool valueChanged = trySetTmpAttribute(std::move(_value));
        if (valueChanged) {
            fireTmpAttributeChanged(tmpAttributeValue_);
        }
    }
    COMMONAPI_EXPORT virtual const uint16_t &getRpmAttribute() {
        return rpmAttributeValue_;
    }
    COMMONAPI_EXPORT virtual const uint16_t &getRpmAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return getRpmAttribute();
    }
    COMMONAPI_EXPORT virtual void setRpmAttribute(uint16_t _value) {
        const bool valueChanged = trySetRpmAttribute(std::move(_value));
        if (valueChanged) {
            fireRpmAttributeChanged(rpmAttributeValue_);
        }
    }
    COMMONAPI_EXPORT virtual const uint8_t &getSpdAttribute() {
        return spdAttributeValue_;
    }
    COMMONAPI_EXPORT virtual const uint8_t &getSpdAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return getSpdAttribute();
    }
    COMMONAPI_EXPORT virtual void setSpdAttribute(uint8_t _value) {
        const bool valueChanged = trySetSpdAttribute(std::move(_value));
        if (valueChanged) {
            fireSpdAttributeChanged(spdAttributeValue_);
        }
    }
    COMMONAPI_EXPORT virtual const uint8_t &getBatAttribute() {
        return batAttributeValue_;
    }
    COMMONAPI_EXPORT virtual const uint8_t &getBatAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return getBatAttribute();
    }
    COMMONAPI_EXPORT virtual void setBatAttribute(uint8_t _value) {
        const bool valueChanged = trySetBatAttribute(std::move(_value));
        if (valueChanged) {
            fireBatAttributeChanged(batAttributeValue_);
        }
    }
    COMMONAPI_EXPORT virtual const uint8_t &getDisAttribute() {
        return disAttributeValue_;
    }
    COMMONAPI_EXPORT virtual const uint8_t &getDisAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return getDisAttribute();
    }
    COMMONAPI_EXPORT virtual void setDisAttribute(uint8_t _value) {
        const bool valueChanged = trySetDisAttribute(std::move(_value));
        if (valueChanged) {
            fireDisAttributeChanged(disAttributeValue_);
        }
    }


protected:
    COMMONAPI_EXPORT virtual bool trySetHumAttribute(uint8_t _value) {
        if (!validateHumAttributeRequestedValue(_value))
            return false;

        bool valueChanged;
        std::shared_ptr<SEAMEStubAdapter> stubAdapter = CommonAPI::Stub<SEAMEStubAdapter, SEAMEStubRemoteEvent>::stubAdapter_.lock();
        if(stubAdapter) {
            stubAdapter->lockHumAttribute(true);
            valueChanged = (humAttributeValue_ != _value);
            humAttributeValue_ = std::move(_value);
            stubAdapter->lockHumAttribute(false);
        } else {
            valueChanged = (humAttributeValue_ != _value);
            humAttributeValue_ = std::move(_value);
        }

       return valueChanged;
    }
    COMMONAPI_EXPORT virtual bool validateHumAttributeRequestedValue(const uint8_t &_value) {
        (void)_value;
        return true;
    }
    COMMONAPI_EXPORT virtual bool trySetTmpAttribute(int8_t _value) {
        if (!validateTmpAttributeRequestedValue(_value))
            return false;

        bool valueChanged;
        std::shared_ptr<SEAMEStubAdapter> stubAdapter = CommonAPI::Stub<SEAMEStubAdapter, SEAMEStubRemoteEvent>::stubAdapter_.lock();
        if(stubAdapter) {
            stubAdapter->lockTmpAttribute(true);
            valueChanged = (tmpAttributeValue_ != _value);
            tmpAttributeValue_ = std::move(_value);
            stubAdapter->lockTmpAttribute(false);
        } else {
            valueChanged = (tmpAttributeValue_ != _value);
            tmpAttributeValue_ = std::move(_value);
        }

       return valueChanged;
    }
    COMMONAPI_EXPORT virtual bool validateTmpAttributeRequestedValue(const int8_t &_value) {
        (void)_value;
        return true;
    }
    COMMONAPI_EXPORT virtual bool trySetRpmAttribute(uint16_t _value) {
        if (!validateRpmAttributeRequestedValue(_value))
            return false;

        bool valueChanged;
        std::shared_ptr<SEAMEStubAdapter> stubAdapter = CommonAPI::Stub<SEAMEStubAdapter, SEAMEStubRemoteEvent>::stubAdapter_.lock();
        if(stubAdapter) {
            stubAdapter->lockRpmAttribute(true);
            valueChanged = (rpmAttributeValue_ != _value);
            rpmAttributeValue_ = std::move(_value);
            stubAdapter->lockRpmAttribute(false);
        } else {
            valueChanged = (rpmAttributeValue_ != _value);
            rpmAttributeValue_ = std::move(_value);
        }

       return valueChanged;
    }
    COMMONAPI_EXPORT virtual bool validateRpmAttributeRequestedValue(const uint16_t &_value) {
        (void)_value;
        return true;
    }
    COMMONAPI_EXPORT virtual bool trySetSpdAttribute(uint8_t _value) {
        if (!validateSpdAttributeRequestedValue(_value))
            return false;

        bool valueChanged;
        std::shared_ptr<SEAMEStubAdapter> stubAdapter = CommonAPI::Stub<SEAMEStubAdapter, SEAMEStubRemoteEvent>::stubAdapter_.lock();
        if(stubAdapter) {
            stubAdapter->lockSpdAttribute(true);
            valueChanged = (spdAttributeValue_ != _value);
            spdAttributeValue_ = std::move(_value);
            stubAdapter->lockSpdAttribute(false);
        } else {
            valueChanged = (spdAttributeValue_ != _value);
            spdAttributeValue_ = std::move(_value);
        }

       return valueChanged;
    }
    COMMONAPI_EXPORT virtual bool validateSpdAttributeRequestedValue(const uint8_t &_value) {
        (void)_value;
        return true;
    }
    COMMONAPI_EXPORT virtual bool trySetBatAttribute(uint8_t _value) {
        if (!validateBatAttributeRequestedValue(_value))
            return false;

        bool valueChanged;
        std::shared_ptr<SEAMEStubAdapter> stubAdapter = CommonAPI::Stub<SEAMEStubAdapter, SEAMEStubRemoteEvent>::stubAdapter_.lock();
        if(stubAdapter) {
            stubAdapter->lockBatAttribute(true);
            valueChanged = (batAttributeValue_ != _value);
            batAttributeValue_ = std::move(_value);
            stubAdapter->lockBatAttribute(false);
        } else {
            valueChanged = (batAttributeValue_ != _value);
            batAttributeValue_ = std::move(_value);
        }

       return valueChanged;
    }
    COMMONAPI_EXPORT virtual bool validateBatAttributeRequestedValue(const uint8_t &_value) {
        (void)_value;
        return true;
    }
    COMMONAPI_EXPORT virtual bool trySetDisAttribute(uint8_t _value) {
        if (!validateDisAttributeRequestedValue(_value))
            return false;

        bool valueChanged;
        std::shared_ptr<SEAMEStubAdapter> stubAdapter = CommonAPI::Stub<SEAMEStubAdapter, SEAMEStubRemoteEvent>::stubAdapter_.lock();
        if(stubAdapter) {
            stubAdapter->lockDisAttribute(true);
            valueChanged = (disAttributeValue_ != _value);
            disAttributeValue_ = std::move(_value);
            stubAdapter->lockDisAttribute(false);
        } else {
            valueChanged = (disAttributeValue_ != _value);
            disAttributeValue_ = std::move(_value);
        }

       return valueChanged;
    }
    COMMONAPI_EXPORT virtual bool validateDisAttributeRequestedValue(const uint8_t &_value) {
        (void)_value;
        return true;
    }
    class COMMONAPI_EXPORT_CLASS_EXPLICIT RemoteEventHandler: public virtual SEAMEStubRemoteEvent {
    public:
        COMMONAPI_EXPORT RemoteEventHandler(SEAMEStubDefault *_defaultStub)
            : 
              defaultStub_(_defaultStub) {
        }


    private:
        SEAMEStubDefault *defaultStub_;
    };
protected:
    SEAMEStubDefault::RemoteEventHandler remoteEventHandler_;

private:

    uint8_t humAttributeValue_ {};
    int8_t tmpAttributeValue_ {};
    uint16_t rpmAttributeValue_ {};
    uint8_t spdAttributeValue_ {};
    uint8_t batAttributeValue_ {};
    uint8_t disAttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace commonapi
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_SEAME_STUB_DEFAULT
