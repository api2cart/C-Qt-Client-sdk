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

#include "OAICartConfig_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICartConfig_200_response_result::OAICartConfig_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICartConfig_200_response_result::OAICartConfig_200_response_result() {
    this->initializeModel();
}

OAICartConfig_200_response_result::~OAICartConfig_200_response_result() {}

void OAICartConfig_200_response_result::initializeModel() {

    m_store_name_isSet = false;
    m_store_name_isValid = false;

    m_store_url_isSet = false;
    m_store_url_isValid = false;

    m_db_prefix_isSet = false;
    m_db_prefix_isValid = false;
}

void OAICartConfig_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICartConfig_200_response_result::fromJsonObject(QJsonObject json) {

    m_store_name_isValid = ::OpenAPI::fromJsonValue(m_store_name, json[QString("store_name")]);
    m_store_name_isSet = !json[QString("store_name")].isNull() && m_store_name_isValid;

    m_store_url_isValid = ::OpenAPI::fromJsonValue(m_store_url, json[QString("store_url")]);
    m_store_url_isSet = !json[QString("store_url")].isNull() && m_store_url_isValid;

    m_db_prefix_isValid = ::OpenAPI::fromJsonValue(m_db_prefix, json[QString("db_prefix")]);
    m_db_prefix_isSet = !json[QString("db_prefix")].isNull() && m_db_prefix_isValid;
}

QString OAICartConfig_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICartConfig_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_store_name_isSet) {
        obj.insert(QString("store_name"), ::OpenAPI::toJsonValue(m_store_name));
    }
    if (m_store_url_isSet) {
        obj.insert(QString("store_url"), ::OpenAPI::toJsonValue(m_store_url));
    }
    if (m_db_prefix_isSet) {
        obj.insert(QString("db_prefix"), ::OpenAPI::toJsonValue(m_db_prefix));
    }
    return obj;
}

QString OAICartConfig_200_response_result::getStoreName() const {
    return m_store_name;
}
void OAICartConfig_200_response_result::setStoreName(const QString &store_name) {
    m_store_name = store_name;
    m_store_name_isSet = true;
}

bool OAICartConfig_200_response_result::is_store_name_Set() const{
    return m_store_name_isSet;
}

bool OAICartConfig_200_response_result::is_store_name_Valid() const{
    return m_store_name_isValid;
}

QString OAICartConfig_200_response_result::getStoreUrl() const {
    return m_store_url;
}
void OAICartConfig_200_response_result::setStoreUrl(const QString &store_url) {
    m_store_url = store_url;
    m_store_url_isSet = true;
}

bool OAICartConfig_200_response_result::is_store_url_Set() const{
    return m_store_url_isSet;
}

bool OAICartConfig_200_response_result::is_store_url_Valid() const{
    return m_store_url_isValid;
}

QString OAICartConfig_200_response_result::getDbPrefix() const {
    return m_db_prefix;
}
void OAICartConfig_200_response_result::setDbPrefix(const QString &db_prefix) {
    m_db_prefix = db_prefix;
    m_db_prefix_isSet = true;
}

bool OAICartConfig_200_response_result::is_db_prefix_Set() const{
    return m_db_prefix_isSet;
}

bool OAICartConfig_200_response_result::is_db_prefix_Valid() const{
    return m_db_prefix_isValid;
}

bool OAICartConfig_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_store_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_store_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_db_prefix_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICartConfig_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
