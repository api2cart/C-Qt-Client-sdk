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

#include "OAIAttributeUpdate_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAttributeUpdate_200_response_result::OAIAttributeUpdate_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAttributeUpdate_200_response_result::OAIAttributeUpdate_200_response_result() {
    this->initializeModel();
}

OAIAttributeUpdate_200_response_result::~OAIAttributeUpdate_200_response_result() {}

void OAIAttributeUpdate_200_response_result::initializeModel() {

    m_updated_isSet = false;
    m_updated_isValid = false;
}

void OAIAttributeUpdate_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAttributeUpdate_200_response_result::fromJsonObject(QJsonObject json) {

    m_updated_isValid = ::OpenAPI::fromJsonValue(m_updated, json[QString("updated")]);
    m_updated_isSet = !json[QString("updated")].isNull() && m_updated_isValid;
}

QString OAIAttributeUpdate_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAttributeUpdate_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_updated_isSet) {
        obj.insert(QString("updated"), ::OpenAPI::toJsonValue(m_updated));
    }
    return obj;
}

bool OAIAttributeUpdate_200_response_result::isUpdated() const {
    return m_updated;
}
void OAIAttributeUpdate_200_response_result::setUpdated(const bool &updated) {
    m_updated = updated;
    m_updated_isSet = true;
}

bool OAIAttributeUpdate_200_response_result::is_updated_Set() const{
    return m_updated_isSet;
}

bool OAIAttributeUpdate_200_response_result::is_updated_Valid() const{
    return m_updated_isValid;
}

bool OAIAttributeUpdate_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_updated_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAttributeUpdate_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
