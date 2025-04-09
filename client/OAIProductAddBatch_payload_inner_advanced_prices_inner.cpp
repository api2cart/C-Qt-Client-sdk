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

#include "OAIProductAddBatch_payload_inner_advanced_prices_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductAddBatch_payload_inner_advanced_prices_inner::OAIProductAddBatch_payload_inner_advanced_prices_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductAddBatch_payload_inner_advanced_prices_inner::OAIProductAddBatch_payload_inner_advanced_prices_inner() {
    this->initializeModel();
}

OAIProductAddBatch_payload_inner_advanced_prices_inner::~OAIProductAddBatch_payload_inner_advanced_prices_inner() {}

void OAIProductAddBatch_payload_inner_advanced_prices_inner::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;

    m_group_id_isSet = false;
    m_group_id_isValid = false;

    m_quantity_isSet = false;
    m_quantity_isValid = false;

    m_start_time_isSet = false;
    m_start_time_isValid = false;

    m_expire_time_isSet = false;
    m_expire_time_isValid = false;
}

void OAIProductAddBatch_payload_inner_advanced_prices_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductAddBatch_payload_inner_advanced_prices_inner::fromJsonObject(QJsonObject json) {

    m_value_isValid = ::OpenAPI::fromJsonValue(m_value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;

    m_group_id_isValid = ::OpenAPI::fromJsonValue(m_group_id, json[QString("group_id")]);
    m_group_id_isSet = !json[QString("group_id")].isNull() && m_group_id_isValid;

    m_quantity_isValid = ::OpenAPI::fromJsonValue(m_quantity, json[QString("quantity")]);
    m_quantity_isSet = !json[QString("quantity")].isNull() && m_quantity_isValid;

    m_start_time_isValid = ::OpenAPI::fromJsonValue(m_start_time, json[QString("start_time")]);
    m_start_time_isSet = !json[QString("start_time")].isNull() && m_start_time_isValid;

    m_expire_time_isValid = ::OpenAPI::fromJsonValue(m_expire_time, json[QString("expire_time")]);
    m_expire_time_isSet = !json[QString("expire_time")].isNull() && m_expire_time_isValid;
}

QString OAIProductAddBatch_payload_inner_advanced_prices_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductAddBatch_payload_inner_advanced_prices_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_value_isSet) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(m_value));
    }
    if (m_group_id_isSet) {
        obj.insert(QString("group_id"), ::OpenAPI::toJsonValue(m_group_id));
    }
    if (m_quantity_isSet) {
        obj.insert(QString("quantity"), ::OpenAPI::toJsonValue(m_quantity));
    }
    if (m_start_time_isSet) {
        obj.insert(QString("start_time"), ::OpenAPI::toJsonValue(m_start_time));
    }
    if (m_expire_time_isSet) {
        obj.insert(QString("expire_time"), ::OpenAPI::toJsonValue(m_expire_time));
    }
    return obj;
}

double OAIProductAddBatch_payload_inner_advanced_prices_inner::getValue() const {
    return m_value;
}
void OAIProductAddBatch_payload_inner_advanced_prices_inner::setValue(const double &value) {
    m_value = value;
    m_value_isSet = true;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::is_value_Set() const{
    return m_value_isSet;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::is_value_Valid() const{
    return m_value_isValid;
}

qint32 OAIProductAddBatch_payload_inner_advanced_prices_inner::getGroupId() const {
    return m_group_id;
}
void OAIProductAddBatch_payload_inner_advanced_prices_inner::setGroupId(const qint32 &group_id) {
    m_group_id = group_id;
    m_group_id_isSet = true;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::is_group_id_Set() const{
    return m_group_id_isSet;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::is_group_id_Valid() const{
    return m_group_id_isValid;
}

double OAIProductAddBatch_payload_inner_advanced_prices_inner::getQuantity() const {
    return m_quantity;
}
void OAIProductAddBatch_payload_inner_advanced_prices_inner::setQuantity(const double &quantity) {
    m_quantity = quantity;
    m_quantity_isSet = true;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::is_quantity_Set() const{
    return m_quantity_isSet;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::is_quantity_Valid() const{
    return m_quantity_isValid;
}

QString OAIProductAddBatch_payload_inner_advanced_prices_inner::getStartTime() const {
    return m_start_time;
}
void OAIProductAddBatch_payload_inner_advanced_prices_inner::setStartTime(const QString &start_time) {
    m_start_time = start_time;
    m_start_time_isSet = true;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::is_start_time_Set() const{
    return m_start_time_isSet;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::is_start_time_Valid() const{
    return m_start_time_isValid;
}

QString OAIProductAddBatch_payload_inner_advanced_prices_inner::getExpireTime() const {
    return m_expire_time;
}
void OAIProductAddBatch_payload_inner_advanced_prices_inner::setExpireTime(const QString &expire_time) {
    m_expire_time = expire_time;
    m_expire_time_isSet = true;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::is_expire_time_Set() const{
    return m_expire_time_isSet;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::is_expire_time_Valid() const{
    return m_expire_time_isValid;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_group_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quantity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_start_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expire_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductAddBatch_payload_inner_advanced_prices_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid && m_quantity_isValid && true;
}

} // namespace OpenAPI
