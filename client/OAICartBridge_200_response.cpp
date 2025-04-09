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

#include "OAICartBridge_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICartBridge_200_response::OAICartBridge_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICartBridge_200_response::OAICartBridge_200_response() {
    this->initializeModel();
}

OAICartBridge_200_response::~OAICartBridge_200_response() {}

void OAICartBridge_200_response::initializeModel() {

    m_return_code_isSet = false;
    m_return_code_isValid = false;

    m_return_message_isSet = false;
    m_return_message_isValid = false;

    m_result_isSet = false;
    m_result_isValid = false;
}

void OAICartBridge_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICartBridge_200_response::fromJsonObject(QJsonObject json) {

    m_return_code_isValid = ::OpenAPI::fromJsonValue(m_return_code, json[QString("return_code")]);
    m_return_code_isSet = !json[QString("return_code")].isNull() && m_return_code_isValid;

    m_return_message_isValid = ::OpenAPI::fromJsonValue(m_return_message, json[QString("return_message")]);
    m_return_message_isSet = !json[QString("return_message")].isNull() && m_return_message_isValid;

    m_result_isValid = ::OpenAPI::fromJsonValue(m_result, json[QString("result")]);
    m_result_isSet = !json[QString("result")].isNull() && m_result_isValid;
}

QString OAICartBridge_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICartBridge_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_return_code_isSet) {
        obj.insert(QString("return_code"), ::OpenAPI::toJsonValue(m_return_code));
    }
    if (m_return_message_isSet) {
        obj.insert(QString("return_message"), ::OpenAPI::toJsonValue(m_return_message));
    }
    if (m_result.isSet()) {
        obj.insert(QString("result"), ::OpenAPI::toJsonValue(m_result));
    }
    return obj;
}

qint32 OAICartBridge_200_response::getReturnCode() const {
    return m_return_code;
}
void OAICartBridge_200_response::setReturnCode(const qint32 &return_code) {
    m_return_code = return_code;
    m_return_code_isSet = true;
}

bool OAICartBridge_200_response::is_return_code_Set() const{
    return m_return_code_isSet;
}

bool OAICartBridge_200_response::is_return_code_Valid() const{
    return m_return_code_isValid;
}

QString OAICartBridge_200_response::getReturnMessage() const {
    return m_return_message;
}
void OAICartBridge_200_response::setReturnMessage(const QString &return_message) {
    m_return_message = return_message;
    m_return_message_isSet = true;
}

bool OAICartBridge_200_response::is_return_message_Set() const{
    return m_return_message_isSet;
}

bool OAICartBridge_200_response::is_return_message_Valid() const{
    return m_return_message_isValid;
}

OAICartBridge_200_response_result OAICartBridge_200_response::getResult() const {
    return m_result;
}
void OAICartBridge_200_response::setResult(const OAICartBridge_200_response_result &result) {
    m_result = result;
    m_result_isSet = true;
}

bool OAICartBridge_200_response::is_result_Set() const{
    return m_result_isSet;
}

bool OAICartBridge_200_response::is_result_Valid() const{
    return m_result_isValid;
}

bool OAICartBridge_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_return_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_return_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_result.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICartBridge_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
