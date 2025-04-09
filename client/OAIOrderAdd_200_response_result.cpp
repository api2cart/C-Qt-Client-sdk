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

#include "OAIOrderAdd_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderAdd_200_response_result::OAIOrderAdd_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderAdd_200_response_result::OAIOrderAdd_200_response_result() {
    this->initializeModel();
}

OAIOrderAdd_200_response_result::~OAIOrderAdd_200_response_result() {}

void OAIOrderAdd_200_response_result::initializeModel() {

    m_order_id_isSet = false;
    m_order_id_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_customer_id_isSet = false;
    m_customer_id_isValid = false;
}

void OAIOrderAdd_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderAdd_200_response_result::fromJsonObject(QJsonObject json) {

    m_order_id_isValid = ::OpenAPI::fromJsonValue(m_order_id, json[QString("order_id")]);
    m_order_id_isSet = !json[QString("order_id")].isNull() && m_order_id_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_customer_id_isValid = ::OpenAPI::fromJsonValue(m_customer_id, json[QString("customer_id")]);
    m_customer_id_isSet = !json[QString("customer_id")].isNull() && m_customer_id_isValid;
}

QString OAIOrderAdd_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderAdd_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_order_id_isSet) {
        obj.insert(QString("order_id"), ::OpenAPI::toJsonValue(m_order_id));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_customer_id_isSet) {
        obj.insert(QString("customer_id"), ::OpenAPI::toJsonValue(m_customer_id));
    }
    return obj;
}

QString OAIOrderAdd_200_response_result::getOrderId() const {
    return m_order_id;
}
void OAIOrderAdd_200_response_result::setOrderId(const QString &order_id) {
    m_order_id = order_id;
    m_order_id_isSet = true;
}

bool OAIOrderAdd_200_response_result::is_order_id_Set() const{
    return m_order_id_isSet;
}

bool OAIOrderAdd_200_response_result::is_order_id_Valid() const{
    return m_order_id_isValid;
}

QString OAIOrderAdd_200_response_result::getId() const {
    return m_id;
}
void OAIOrderAdd_200_response_result::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIOrderAdd_200_response_result::is_id_Set() const{
    return m_id_isSet;
}

bool OAIOrderAdd_200_response_result::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIOrderAdd_200_response_result::getCustomerId() const {
    return m_customer_id;
}
void OAIOrderAdd_200_response_result::setCustomerId(const QString &customer_id) {
    m_customer_id = customer_id;
    m_customer_id_isSet = true;
}

bool OAIOrderAdd_200_response_result::is_customer_id_Set() const{
    return m_customer_id_isSet;
}

bool OAIOrderAdd_200_response_result::is_customer_id_Valid() const{
    return m_customer_id_isValid;
}

bool OAIOrderAdd_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_order_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_customer_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrderAdd_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
