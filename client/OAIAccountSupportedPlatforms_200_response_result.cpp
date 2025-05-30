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

#include "OAIAccountSupportedPlatforms_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAccountSupportedPlatforms_200_response_result::OAIAccountSupportedPlatforms_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAccountSupportedPlatforms_200_response_result::OAIAccountSupportedPlatforms_200_response_result() {
    this->initializeModel();
}

OAIAccountSupportedPlatforms_200_response_result::~OAIAccountSupportedPlatforms_200_response_result() {}

void OAIAccountSupportedPlatforms_200_response_result::initializeModel() {

    m_supported_platforms_isSet = false;
    m_supported_platforms_isValid = false;
}

void OAIAccountSupportedPlatforms_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAccountSupportedPlatforms_200_response_result::fromJsonObject(QJsonObject json) {

    m_supported_platforms_isValid = ::OpenAPI::fromJsonValue(m_supported_platforms, json[QString("supported_platforms")]);
    m_supported_platforms_isSet = !json[QString("supported_platforms")].isNull() && m_supported_platforms_isValid;
}

QString OAIAccountSupportedPlatforms_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAccountSupportedPlatforms_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_supported_platforms.size() > 0) {
        obj.insert(QString("supported_platforms"), ::OpenAPI::toJsonValue(m_supported_platforms));
    }
    return obj;
}

QList<OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner> OAIAccountSupportedPlatforms_200_response_result::getSupportedPlatforms() const {
    return m_supported_platforms;
}
void OAIAccountSupportedPlatforms_200_response_result::setSupportedPlatforms(const QList<OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner> &supported_platforms) {
    m_supported_platforms = supported_platforms;
    m_supported_platforms_isSet = true;
}

bool OAIAccountSupportedPlatforms_200_response_result::is_supported_platforms_Set() const{
    return m_supported_platforms_isSet;
}

bool OAIAccountSupportedPlatforms_200_response_result::is_supported_platforms_Valid() const{
    return m_supported_platforms_isValid;
}

bool OAIAccountSupportedPlatforms_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_supported_platforms.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAccountSupportedPlatforms_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
