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

#include "OAICategoryFind_200_response_result_category_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICategoryFind_200_response_result_category_inner::OAICategoryFind_200_response_result_category_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICategoryFind_200_response_result_category_inner::OAICategoryFind_200_response_result_category_inner() {
    this->initializeModel();
}

OAICategoryFind_200_response_result_category_inner::~OAICategoryFind_200_response_result_category_inner() {}

void OAICategoryFind_200_response_result_category_inner::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;
}

void OAICategoryFind_200_response_result_category_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICategoryFind_200_response_result_category_inner::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;
}

QString OAICategoryFind_200_response_result_category_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICategoryFind_200_response_result_category_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(m_description));
    }
    return obj;
}

QString OAICategoryFind_200_response_result_category_inner::getId() const {
    return m_id;
}
void OAICategoryFind_200_response_result_category_inner::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAICategoryFind_200_response_result_category_inner::is_id_Set() const{
    return m_id_isSet;
}

bool OAICategoryFind_200_response_result_category_inner::is_id_Valid() const{
    return m_id_isValid;
}

QString OAICategoryFind_200_response_result_category_inner::getName() const {
    return m_name;
}
void OAICategoryFind_200_response_result_category_inner::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICategoryFind_200_response_result_category_inner::is_name_Set() const{
    return m_name_isSet;
}

bool OAICategoryFind_200_response_result_category_inner::is_name_Valid() const{
    return m_name_isValid;
}

QString OAICategoryFind_200_response_result_category_inner::getDescription() const {
    return m_description;
}
void OAICategoryFind_200_response_result_category_inner::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAICategoryFind_200_response_result_category_inner::is_description_Set() const{
    return m_description_isSet;
}

bool OAICategoryFind_200_response_result_category_inner::is_description_Valid() const{
    return m_description_isValid;
}

bool OAICategoryFind_200_response_result_category_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICategoryFind_200_response_result_category_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
