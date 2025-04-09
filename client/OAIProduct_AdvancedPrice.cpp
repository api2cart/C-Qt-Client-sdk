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

#include "OAIProduct_AdvancedPrice.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProduct_AdvancedPrice::OAIProduct_AdvancedPrice(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProduct_AdvancedPrice::OAIProduct_AdvancedPrice() {
    this->initializeModel();
}

OAIProduct_AdvancedPrice::~OAIProduct_AdvancedPrice() {}

void OAIProduct_AdvancedPrice::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_value_isSet = false;
    m_value_isValid = false;

    m_avail_isSet = false;
    m_avail_isValid = false;

    m_group_id_isSet = false;
    m_group_id_isValid = false;

    m_quantity_from_isSet = false;
    m_quantity_from_isValid = false;

    m_start_time_isSet = false;
    m_start_time_isValid = false;

    m_expire_time_isSet = false;
    m_expire_time_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIProduct_AdvancedPrice::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProduct_AdvancedPrice::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_value_isValid = ::OpenAPI::fromJsonValue(m_value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;

    m_avail_isValid = ::OpenAPI::fromJsonValue(m_avail, json[QString("avail")]);
    m_avail_isSet = !json[QString("avail")].isNull() && m_avail_isValid;

    m_group_id_isValid = ::OpenAPI::fromJsonValue(m_group_id, json[QString("group_id")]);
    m_group_id_isSet = !json[QString("group_id")].isNull() && m_group_id_isValid;

    m_quantity_from_isValid = ::OpenAPI::fromJsonValue(m_quantity_from, json[QString("quantity_from")]);
    m_quantity_from_isSet = !json[QString("quantity_from")].isNull() && m_quantity_from_isValid;

    m_start_time_isValid = ::OpenAPI::fromJsonValue(m_start_time, json[QString("start_time")]);
    m_start_time_isSet = !json[QString("start_time")].isNull() && m_start_time_isValid;

    m_expire_time_isValid = ::OpenAPI::fromJsonValue(m_expire_time, json[QString("expire_time")]);
    m_expire_time_isSet = !json[QString("expire_time")].isNull() && m_expire_time_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIProduct_AdvancedPrice::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProduct_AdvancedPrice::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_value_isSet) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(m_value));
    }
    if (m_avail_isSet) {
        obj.insert(QString("avail"), ::OpenAPI::toJsonValue(m_avail));
    }
    if (m_group_id_isSet) {
        obj.insert(QString("group_id"), ::OpenAPI::toJsonValue(m_group_id));
    }
    if (m_quantity_from_isSet) {
        obj.insert(QString("quantity_from"), ::OpenAPI::toJsonValue(m_quantity_from));
    }
    if (m_start_time.isSet()) {
        obj.insert(QString("start_time"), ::OpenAPI::toJsonValue(m_start_time));
    }
    if (m_expire_time.isSet()) {
        obj.insert(QString("expire_time"), ::OpenAPI::toJsonValue(m_expire_time));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIProduct_AdvancedPrice::getId() const {
    return m_id;
}
void OAIProduct_AdvancedPrice::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIProduct_AdvancedPrice::is_id_Set() const{
    return m_id_isSet;
}

bool OAIProduct_AdvancedPrice::is_id_Valid() const{
    return m_id_isValid;
}

double OAIProduct_AdvancedPrice::getValue() const {
    return m_value;
}
void OAIProduct_AdvancedPrice::setValue(const double &value) {
    m_value = value;
    m_value_isSet = true;
}

bool OAIProduct_AdvancedPrice::is_value_Set() const{
    return m_value_isSet;
}

bool OAIProduct_AdvancedPrice::is_value_Valid() const{
    return m_value_isValid;
}

bool OAIProduct_AdvancedPrice::isAvail() const {
    return m_avail;
}
void OAIProduct_AdvancedPrice::setAvail(const bool &avail) {
    m_avail = avail;
    m_avail_isSet = true;
}

bool OAIProduct_AdvancedPrice::is_avail_Set() const{
    return m_avail_isSet;
}

bool OAIProduct_AdvancedPrice::is_avail_Valid() const{
    return m_avail_isValid;
}

QString OAIProduct_AdvancedPrice::getGroupId() const {
    return m_group_id;
}
void OAIProduct_AdvancedPrice::setGroupId(const QString &group_id) {
    m_group_id = group_id;
    m_group_id_isSet = true;
}

bool OAIProduct_AdvancedPrice::is_group_id_Set() const{
    return m_group_id_isSet;
}

bool OAIProduct_AdvancedPrice::is_group_id_Valid() const{
    return m_group_id_isValid;
}

double OAIProduct_AdvancedPrice::getQuantityFrom() const {
    return m_quantity_from;
}
void OAIProduct_AdvancedPrice::setQuantityFrom(const double &quantity_from) {
    m_quantity_from = quantity_from;
    m_quantity_from_isSet = true;
}

bool OAIProduct_AdvancedPrice::is_quantity_from_Set() const{
    return m_quantity_from_isSet;
}

bool OAIProduct_AdvancedPrice::is_quantity_from_Valid() const{
    return m_quantity_from_isValid;
}

OAIA2CDateTime OAIProduct_AdvancedPrice::getStartTime() const {
    return m_start_time;
}
void OAIProduct_AdvancedPrice::setStartTime(const OAIA2CDateTime &start_time) {
    m_start_time = start_time;
    m_start_time_isSet = true;
}

bool OAIProduct_AdvancedPrice::is_start_time_Set() const{
    return m_start_time_isSet;
}

bool OAIProduct_AdvancedPrice::is_start_time_Valid() const{
    return m_start_time_isValid;
}

OAIA2CDateTime OAIProduct_AdvancedPrice::getExpireTime() const {
    return m_expire_time;
}
void OAIProduct_AdvancedPrice::setExpireTime(const OAIA2CDateTime &expire_time) {
    m_expire_time = expire_time;
    m_expire_time_isSet = true;
}

bool OAIProduct_AdvancedPrice::is_expire_time_Set() const{
    return m_expire_time_isSet;
}

bool OAIProduct_AdvancedPrice::is_expire_time_Valid() const{
    return m_expire_time_isValid;
}

OAIObject OAIProduct_AdvancedPrice::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIProduct_AdvancedPrice::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIProduct_AdvancedPrice::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIProduct_AdvancedPrice::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIProduct_AdvancedPrice::getCustomFields() const {
    return m_custom_fields;
}
void OAIProduct_AdvancedPrice::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIProduct_AdvancedPrice::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIProduct_AdvancedPrice::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIProduct_AdvancedPrice::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_group_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quantity_from_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_start_time.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_expire_time.isSet()) {
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

bool OAIProduct_AdvancedPrice::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
