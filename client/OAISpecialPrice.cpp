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

#include "OAISpecialPrice.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISpecialPrice::OAISpecialPrice(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISpecialPrice::OAISpecialPrice() {
    this->initializeModel();
}

OAISpecialPrice::~OAISpecialPrice() {}

void OAISpecialPrice::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;

    m_avail_isSet = false;
    m_avail_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_modified_at_isSet = false;
    m_modified_at_isValid = false;

    m_expired_at_isSet = false;
    m_expired_at_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAISpecialPrice::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISpecialPrice::fromJsonObject(QJsonObject json) {

    m_value_isValid = ::OpenAPI::fromJsonValue(m_value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;

    m_avail_isValid = ::OpenAPI::fromJsonValue(m_avail, json[QString("avail")]);
    m_avail_isSet = !json[QString("avail")].isNull() && m_avail_isValid;

    m_created_at_isValid = ::OpenAPI::fromJsonValue(m_created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_modified_at_isValid = ::OpenAPI::fromJsonValue(m_modified_at, json[QString("modified_at")]);
    m_modified_at_isSet = !json[QString("modified_at")].isNull() && m_modified_at_isValid;

    m_expired_at_isValid = ::OpenAPI::fromJsonValue(m_expired_at, json[QString("expired_at")]);
    m_expired_at_isSet = !json[QString("expired_at")].isNull() && m_expired_at_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAISpecialPrice::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISpecialPrice::asJsonObject() const {
    QJsonObject obj;
    if (m_value_isSet) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(m_value));
    }
    if (m_avail_isSet) {
        obj.insert(QString("avail"), ::OpenAPI::toJsonValue(m_avail));
    }
    if (m_created_at.isSet()) {
        obj.insert(QString("created_at"), ::OpenAPI::toJsonValue(m_created_at));
    }
    if (m_modified_at.isSet()) {
        obj.insert(QString("modified_at"), ::OpenAPI::toJsonValue(m_modified_at));
    }
    if (m_expired_at.isSet()) {
        obj.insert(QString("expired_at"), ::OpenAPI::toJsonValue(m_expired_at));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

double OAISpecialPrice::getValue() const {
    return m_value;
}
void OAISpecialPrice::setValue(const double &value) {
    m_value = value;
    m_value_isSet = true;
}

bool OAISpecialPrice::is_value_Set() const{
    return m_value_isSet;
}

bool OAISpecialPrice::is_value_Valid() const{
    return m_value_isValid;
}

bool OAISpecialPrice::isAvail() const {
    return m_avail;
}
void OAISpecialPrice::setAvail(const bool &avail) {
    m_avail = avail;
    m_avail_isSet = true;
}

bool OAISpecialPrice::is_avail_Set() const{
    return m_avail_isSet;
}

bool OAISpecialPrice::is_avail_Valid() const{
    return m_avail_isValid;
}

OAIA2CDateTime OAISpecialPrice::getCreatedAt() const {
    return m_created_at;
}
void OAISpecialPrice::setCreatedAt(const OAIA2CDateTime &created_at) {
    m_created_at = created_at;
    m_created_at_isSet = true;
}

bool OAISpecialPrice::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAISpecialPrice::is_created_at_Valid() const{
    return m_created_at_isValid;
}

OAIA2CDateTime OAISpecialPrice::getModifiedAt() const {
    return m_modified_at;
}
void OAISpecialPrice::setModifiedAt(const OAIA2CDateTime &modified_at) {
    m_modified_at = modified_at;
    m_modified_at_isSet = true;
}

bool OAISpecialPrice::is_modified_at_Set() const{
    return m_modified_at_isSet;
}

bool OAISpecialPrice::is_modified_at_Valid() const{
    return m_modified_at_isValid;
}

OAIA2CDateTime OAISpecialPrice::getExpiredAt() const {
    return m_expired_at;
}
void OAISpecialPrice::setExpiredAt(const OAIA2CDateTime &expired_at) {
    m_expired_at = expired_at;
    m_expired_at_isSet = true;
}

bool OAISpecialPrice::is_expired_at_Set() const{
    return m_expired_at_isSet;
}

bool OAISpecialPrice::is_expired_at_Valid() const{
    return m_expired_at_isValid;
}

OAIObject OAISpecialPrice::getAdditionalFields() const {
    return m_additional_fields;
}
void OAISpecialPrice::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAISpecialPrice::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAISpecialPrice::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAISpecialPrice::getCustomFields() const {
    return m_custom_fields;
}
void OAISpecialPrice::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAISpecialPrice::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAISpecialPrice::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAISpecialPrice::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_modified_at.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_expired_at.isSet()) {
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

bool OAISpecialPrice::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
