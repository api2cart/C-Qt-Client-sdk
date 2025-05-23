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

#include "OAIAttributeCount_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAttributeCount_200_response_result::OAIAttributeCount_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAttributeCount_200_response_result::OAIAttributeCount_200_response_result() {
    this->initializeModel();
}

OAIAttributeCount_200_response_result::~OAIAttributeCount_200_response_result() {}

void OAIAttributeCount_200_response_result::initializeModel() {

    m_attributes_count_isSet = false;
    m_attributes_count_isValid = false;
}

void OAIAttributeCount_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAttributeCount_200_response_result::fromJsonObject(QJsonObject json) {

    m_attributes_count_isValid = ::OpenAPI::fromJsonValue(m_attributes_count, json[QString("attributes_count")]);
    m_attributes_count_isSet = !json[QString("attributes_count")].isNull() && m_attributes_count_isValid;
}

QString OAIAttributeCount_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAttributeCount_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_attributes_count_isSet) {
        obj.insert(QString("attributes_count"), ::OpenAPI::toJsonValue(m_attributes_count));
    }
    return obj;
}

qint32 OAIAttributeCount_200_response_result::getAttributesCount() const {
    return m_attributes_count;
}
void OAIAttributeCount_200_response_result::setAttributesCount(const qint32 &attributes_count) {
    m_attributes_count = attributes_count;
    m_attributes_count_isSet = true;
}

bool OAIAttributeCount_200_response_result::is_attributes_count_Set() const{
    return m_attributes_count_isSet;
}

bool OAIAttributeCount_200_response_result::is_attributes_count_Valid() const{
    return m_attributes_count_isValid;
}

bool OAIAttributeCount_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_attributes_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAttributeCount_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
