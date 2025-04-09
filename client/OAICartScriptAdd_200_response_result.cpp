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

#include "OAICartScriptAdd_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICartScriptAdd_200_response_result::OAICartScriptAdd_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICartScriptAdd_200_response_result::OAICartScriptAdd_200_response_result() {
    this->initializeModel();
}

OAICartScriptAdd_200_response_result::~OAICartScriptAdd_200_response_result() {}

void OAICartScriptAdd_200_response_result::initializeModel() {

    m_script_id_isSet = false;
    m_script_id_isValid = false;
}

void OAICartScriptAdd_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICartScriptAdd_200_response_result::fromJsonObject(QJsonObject json) {

    m_script_id_isValid = ::OpenAPI::fromJsonValue(m_script_id, json[QString("script_id")]);
    m_script_id_isSet = !json[QString("script_id")].isNull() && m_script_id_isValid;
}

QString OAICartScriptAdd_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICartScriptAdd_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_script_id_isSet) {
        obj.insert(QString("script_id"), ::OpenAPI::toJsonValue(m_script_id));
    }
    return obj;
}

QString OAICartScriptAdd_200_response_result::getScriptId() const {
    return m_script_id;
}
void OAICartScriptAdd_200_response_result::setScriptId(const QString &script_id) {
    m_script_id = script_id;
    m_script_id_isSet = true;
}

bool OAICartScriptAdd_200_response_result::is_script_id_Set() const{
    return m_script_id_isSet;
}

bool OAICartScriptAdd_200_response_result::is_script_id_Valid() const{
    return m_script_id_isValid;
}

bool OAICartScriptAdd_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_script_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICartScriptAdd_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
