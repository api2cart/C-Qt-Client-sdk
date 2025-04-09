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

#include "OAICartGiftcardAdd_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICartGiftcardAdd_200_response_result::OAICartGiftcardAdd_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICartGiftcardAdd_200_response_result::OAICartGiftcardAdd_200_response_result() {
    this->initializeModel();
}

OAICartGiftcardAdd_200_response_result::~OAICartGiftcardAdd_200_response_result() {}

void OAICartGiftcardAdd_200_response_result::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_code_isSet = false;
    m_code_isValid = false;
}

void OAICartGiftcardAdd_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICartGiftcardAdd_200_response_result::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_code_isValid = ::OpenAPI::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;
}

QString OAICartGiftcardAdd_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICartGiftcardAdd_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_code_isSet) {
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(m_code));
    }
    return obj;
}

QString OAICartGiftcardAdd_200_response_result::getId() const {
    return m_id;
}
void OAICartGiftcardAdd_200_response_result::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAICartGiftcardAdd_200_response_result::is_id_Set() const{
    return m_id_isSet;
}

bool OAICartGiftcardAdd_200_response_result::is_id_Valid() const{
    return m_id_isValid;
}

QString OAICartGiftcardAdd_200_response_result::getCode() const {
    return m_code;
}
void OAICartGiftcardAdd_200_response_result::setCode(const QString &code) {
    m_code = code;
    m_code_isSet = true;
}

bool OAICartGiftcardAdd_200_response_result::is_code_Set() const{
    return m_code_isSet;
}

bool OAICartGiftcardAdd_200_response_result::is_code_Valid() const{
    return m_code_isValid;
}

bool OAICartGiftcardAdd_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICartGiftcardAdd_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
