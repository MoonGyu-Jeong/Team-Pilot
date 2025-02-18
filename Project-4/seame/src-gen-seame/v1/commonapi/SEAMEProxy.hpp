/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_SEAME_PROXY_HPP_
#define V1_COMMONAPI_SEAME_PROXY_HPP_

#include <v1/commonapi/SEAMEProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/AttributeExtension.hpp>
#include <CommonAPI/Factory.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

template <typename ... _AttributeExtensions>
class SEAMEProxy
    : virtual public SEAME,
      virtual public SEAMEProxyBase,
      virtual public _AttributeExtensions... {
public:
    SEAMEProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~SEAMEProxy();

    typedef SEAME InterfaceType;


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

    virtual std::future<void> getCompletionFuture();

    /**
     * Returns the wrapper class that provides access to the attribute hum.
     */
    virtual HumAttribute& getHumAttribute() {
        return delegate_->getHumAttribute();
    }
    /**
     * Returns the wrapper class that provides access to the attribute tmp.
     */
    virtual TmpAttribute& getTmpAttribute() {
        return delegate_->getTmpAttribute();
    }
    /**
     * Returns the wrapper class that provides access to the attribute rpm.
     */
    virtual RpmAttribute& getRpmAttribute() {
        return delegate_->getRpmAttribute();
    }
    /**
     * Returns the wrapper class that provides access to the attribute spd.
     */
    virtual SpdAttribute& getSpdAttribute() {
        return delegate_->getSpdAttribute();
    }
    /**
     * Returns the wrapper class that provides access to the attribute bat.
     */
    virtual BatAttribute& getBatAttribute() {
        return delegate_->getBatAttribute();
    }
    /**
     * Returns the wrapper class that provides access to the attribute dis.
     */
    virtual DisAttribute& getDisAttribute() {
        return delegate_->getDisAttribute();
    }



 private:
    std::shared_ptr< SEAMEProxyBase> delegate_;
};

typedef SEAMEProxy<> SEAMEProxyDefault;

namespace SEAMEExtensions {
    template <template <typename > class _ExtensionType>
    class HumAttributeExtension {
     public:
        typedef _ExtensionType< SEAMEProxyBase::HumAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension< SEAMEProxyBase::HumAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    
        HumAttributeExtension(SEAMEProxyBase& proxy): attributeExtension_(proxy.getHumAttribute()) {
        }
    
        inline extension_type& getHumAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

    template <template <typename > class _ExtensionType>
    class TmpAttributeExtension {
     public:
        typedef _ExtensionType< SEAMEProxyBase::TmpAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension< SEAMEProxyBase::TmpAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    
        TmpAttributeExtension(SEAMEProxyBase& proxy): attributeExtension_(proxy.getTmpAttribute()) {
        }
    
        inline extension_type& getTmpAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

    template <template <typename > class _ExtensionType>
    class RpmAttributeExtension {
     public:
        typedef _ExtensionType< SEAMEProxyBase::RpmAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension< SEAMEProxyBase::RpmAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    
        RpmAttributeExtension(SEAMEProxyBase& proxy): attributeExtension_(proxy.getRpmAttribute()) {
        }
    
        inline extension_type& getRpmAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

    template <template <typename > class _ExtensionType>
    class SpdAttributeExtension {
     public:
        typedef _ExtensionType< SEAMEProxyBase::SpdAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension< SEAMEProxyBase::SpdAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    
        SpdAttributeExtension(SEAMEProxyBase& proxy): attributeExtension_(proxy.getSpdAttribute()) {
        }
    
        inline extension_type& getSpdAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

    template <template <typename > class _ExtensionType>
    class BatAttributeExtension {
     public:
        typedef _ExtensionType< SEAMEProxyBase::BatAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension< SEAMEProxyBase::BatAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    
        BatAttributeExtension(SEAMEProxyBase& proxy): attributeExtension_(proxy.getBatAttribute()) {
        }
    
        inline extension_type& getBatAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

    template <template <typename > class _ExtensionType>
    class DisAttributeExtension {
     public:
        typedef _ExtensionType< SEAMEProxyBase::DisAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension< SEAMEProxyBase::DisAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    
        DisAttributeExtension(SEAMEProxyBase& proxy): attributeExtension_(proxy.getDisAttribute()) {
        }
    
        inline extension_type& getDisAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

} // namespace SEAMEExtensions

//
// SEAMEProxy Implementation
//
template <typename ... _AttributeExtensions>
SEAMEProxy<_AttributeExtensions...>::SEAMEProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast< SEAMEProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast< SEAMEProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
SEAMEProxy<_AttributeExtensions...>::~SEAMEProxy() {
}


template <typename ... _AttributeExtensions>
const CommonAPI::Address &SEAMEProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool SEAMEProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool SEAMEProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& SEAMEProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& SEAMEProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


template <typename ... _AttributeExtensions>
std::future<void> SEAMEProxy<_AttributeExtensions...>::getCompletionFuture() {
    return delegate_->getCompletionFuture();
}

} // namespace commonapi
} // namespace v1

namespace CommonAPI {
template<template<typename > class _AttributeExtension>
struct DefaultAttributeProxyHelper< ::v1::commonapi::SEAMEProxy,
    _AttributeExtension> {
    typedef typename ::v1::commonapi::SEAMEProxy<
            ::v1::commonapi::SEAMEExtensions::HumAttributeExtension<_AttributeExtension>, 
            ::v1::commonapi::SEAMEExtensions::TmpAttributeExtension<_AttributeExtension>, 
            ::v1::commonapi::SEAMEExtensions::RpmAttributeExtension<_AttributeExtension>, 
            ::v1::commonapi::SEAMEExtensions::SpdAttributeExtension<_AttributeExtension>, 
            ::v1::commonapi::SEAMEExtensions::BatAttributeExtension<_AttributeExtension>, 
            ::v1::commonapi::SEAMEExtensions::DisAttributeExtension<_AttributeExtension>
    > class_t;
};
}


// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_SEAME_PROXY_HPP_
