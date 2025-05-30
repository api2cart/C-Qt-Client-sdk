/**
 * API2Cart OpenAPI
 * API2Cart
 *
 * The version of the OpenAPI document: 1.1
 * Contact: contact@api2cart.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICart_ShippingZone2.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICart_ShippingZone2::OAICart_ShippingZone2(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICart_ShippingZone2::OAICart_ShippingZone2() {
    this->initializeModel();
}

OAICart_ShippingZone2::~OAICart_ShippingZone2() {}

void OAICart_ShippingZone2::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_enabled_isSet = false;
    m_enabled_isValid = false;

    m_countries_isSet = false;
    m_countries_isValid = false;

    m_shipping_methods_isSet = false;
    m_shipping_methods_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAICart_ShippingZone2::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICart_ShippingZone2::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_enabled_isValid = ::OpenAPI::fromJsonValue(m_enabled, json[QString("enabled")]);
    m_enabled_isSet = !json[QString("enabled")].isNull() && m_enabled_isValid;

    m_countries_isValid = ::OpenAPI::fromJsonValue(m_countries, json[QString("countries")]);
    m_countries_isSet = !json[QString("countries")].isNull() && m_countries_isValid;

    m_shipping_methods_isValid = ::OpenAPI::fromJsonValue(m_shipping_methods, json[QString("shipping_methods")]);
    m_shipping_methods_isSet = !json[QString("shipping_methods")].isNull() && m_shipping_methods_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAICart_ShippingZone2::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICart_ShippingZone2::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_enabled_isSet) {
        obj.insert(QString("enabled"), ::OpenAPI::toJsonValue(m_enabled));
    }
    if (m_countries.size() > 0) {
        obj.insert(QString("countries"), ::OpenAPI::toJsonValue(m_countries));
    }
    if (m_shipping_methods.size() > 0) {
        obj.insert(QString("shipping_methods"), ::OpenAPI::toJsonValue(m_shipping_methods));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAICart_ShippingZone2::getId() const {
    return m_id;
}
void OAICart_ShippingZone2::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAICart_ShippingZone2::is_id_Set() const{
    return m_id_isSet;
}

bool OAICart_ShippingZone2::is_id_Valid() const{
    return m_id_isValid;
}

QString OAICart_ShippingZone2::getName() const {
    return m_name;
}
void OAICart_ShippingZone2::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICart_ShippingZone2::is_name_Set() const{
    return m_name_isSet;
}

bool OAICart_ShippingZone2::is_name_Valid() const{
    return m_name_isValid;
}

bool OAICart_ShippingZone2::isEnabled() const {
    return m_enabled;
}
void OAICart_ShippingZone2::setEnabled(const bool &enabled) {
    m_enabled = enabled;
    m_enabled_isSet = true;
}

bool OAICart_ShippingZone2::is_enabled_Set() const{
    return m_enabled_isSet;
}

bool OAICart_ShippingZone2::is_enabled_Valid() const{
    return m_enabled_isValid;
}

QList<OAICountry> OAICart_ShippingZone2::getCountries() const {
    return m_countries;
}
void OAICart_ShippingZone2::setCountries(const QList<OAICountry> &countries) {
    m_countries = countries;
    m_countries_isSet = true;
}

bool OAICart_ShippingZone2::is_countries_Set() const{
    return m_countries_isSet;
}

bool OAICart_ShippingZone2::is_countries_Valid() const{
    return m_countries_isValid;
}

QList<OAICart_ShippingMethod> OAICart_ShippingZone2::getShippingMethods() const {
    return m_shipping_methods;
}
void OAICart_ShippingZone2::setShippingMethods(const QList<OAICart_ShippingMethod> &shipping_methods) {
    m_shipping_methods = shipping_methods;
    m_shipping_methods_isSet = true;
}

bool OAICart_ShippingZone2::is_shipping_methods_Set() const{
    return m_shipping_methods_isSet;
}

bool OAICart_ShippingZone2::is_shipping_methods_Valid() const{
    return m_shipping_methods_isValid;
}

OAIObject OAICart_ShippingZone2::getAdditionalFields() const {
    return m_additional_fields;
}
void OAICart_ShippingZone2::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAICart_ShippingZone2::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAICart_ShippingZone2::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAICart_ShippingZone2::getCustomFields() const {
    return m_custom_fields;
}
void OAICart_ShippingZone2::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAICart_ShippingZone2::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAICart_ShippingZone2::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAICart_ShippingZone2::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_countries.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_shipping_methods.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_additional_fields_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_fields_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICart_ShippingZone2::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
