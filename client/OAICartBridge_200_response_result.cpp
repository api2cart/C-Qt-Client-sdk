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

#include "OAICartBridge_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICartBridge_200_response_result::OAICartBridge_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICartBridge_200_response_result::OAICartBridge_200_response_result() {
    this->initializeModel();
}

OAICartBridge_200_response_result::~OAICartBridge_200_response_result() {}

void OAICartBridge_200_response_result::initializeModel() {

    m_store_key_isSet = false;
    m_store_key_isValid = false;

    m_bridge_isSet = false;
    m_bridge_isValid = false;
}

void OAICartBridge_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICartBridge_200_response_result::fromJsonObject(QJsonObject json) {

    m_store_key_isValid = ::OpenAPI::fromJsonValue(m_store_key, json[QString("store_key")]);
    m_store_key_isSet = !json[QString("store_key")].isNull() && m_store_key_isValid;

    m_bridge_isValid = ::OpenAPI::fromJsonValue(m_bridge, json[QString("bridge")]);
    m_bridge_isSet = !json[QString("bridge")].isNull() && m_bridge_isValid;
}

QString OAICartBridge_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICartBridge_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_store_key_isSet) {
        obj.insert(QString("store_key"), ::OpenAPI::toJsonValue(m_store_key));
    }
    if (m_bridge_isSet) {
        obj.insert(QString("bridge"), ::OpenAPI::toJsonValue(m_bridge));
    }
    return obj;
}

QString OAICartBridge_200_response_result::getStoreKey() const {
    return m_store_key;
}
void OAICartBridge_200_response_result::setStoreKey(const QString &store_key) {
    m_store_key = store_key;
    m_store_key_isSet = true;
}

bool OAICartBridge_200_response_result::is_store_key_Set() const{
    return m_store_key_isSet;
}

bool OAICartBridge_200_response_result::is_store_key_Valid() const{
    return m_store_key_isValid;
}

QString OAICartBridge_200_response_result::getBridge() const {
    return m_bridge;
}
void OAICartBridge_200_response_result::setBridge(const QString &bridge) {
    m_bridge = bridge;
    m_bridge_isSet = true;
}

bool OAICartBridge_200_response_result::is_bridge_Set() const{
    return m_bridge_isSet;
}

bool OAICartBridge_200_response_result::is_bridge_Valid() const{
    return m_bridge_isValid;
}

bool OAICartBridge_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_store_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bridge_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICartBridge_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
