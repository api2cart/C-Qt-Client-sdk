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

#include "OAIBatch_Job.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBatch_Job::OAIBatch_Job(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBatch_Job::OAIBatch_Job() {
    this->initializeModel();
}

OAIBatch_Job::~OAIBatch_Job() {}

void OAIBatch_Job::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_method_isSet = false;
    m_method_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_created_time_isSet = false;
    m_created_time_isValid = false;

    m_processed_time_isSet = false;
    m_processed_time_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIBatch_Job::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBatch_Job::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_method_isValid = ::OpenAPI::fromJsonValue(m_method, json[QString("method")]);
    m_method_isSet = !json[QString("method")].isNull() && m_method_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_created_time_isValid = ::OpenAPI::fromJsonValue(m_created_time, json[QString("created_time")]);
    m_created_time_isSet = !json[QString("created_time")].isNull() && m_created_time_isValid;

    m_processed_time_isValid = ::OpenAPI::fromJsonValue(m_processed_time, json[QString("processed_time")]);
    m_processed_time_isSet = !json[QString("processed_time")].isNull() && m_processed_time_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIBatch_Job::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBatch_Job::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_method_isSet) {
        obj.insert(QString("method"), ::OpenAPI::toJsonValue(m_method));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(m_status));
    }
    if (m_created_time.isSet()) {
        obj.insert(QString("created_time"), ::OpenAPI::toJsonValue(m_created_time));
    }
    if (m_processed_time.isSet()) {
        obj.insert(QString("processed_time"), ::OpenAPI::toJsonValue(m_processed_time));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIBatch_Job::getId() const {
    return m_id;
}
void OAIBatch_Job::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIBatch_Job::is_id_Set() const{
    return m_id_isSet;
}

bool OAIBatch_Job::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIBatch_Job::getMethod() const {
    return m_method;
}
void OAIBatch_Job::setMethod(const QString &method) {
    m_method = method;
    m_method_isSet = true;
}

bool OAIBatch_Job::is_method_Set() const{
    return m_method_isSet;
}

bool OAIBatch_Job::is_method_Valid() const{
    return m_method_isValid;
}

QString OAIBatch_Job::getStatus() const {
    return m_status;
}
void OAIBatch_Job::setStatus(const QString &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAIBatch_Job::is_status_Set() const{
    return m_status_isSet;
}

bool OAIBatch_Job::is_status_Valid() const{
    return m_status_isValid;
}

OAIA2CDateTime OAIBatch_Job::getCreatedTime() const {
    return m_created_time;
}
void OAIBatch_Job::setCreatedTime(const OAIA2CDateTime &created_time) {
    m_created_time = created_time;
    m_created_time_isSet = true;
}

bool OAIBatch_Job::is_created_time_Set() const{
    return m_created_time_isSet;
}

bool OAIBatch_Job::is_created_time_Valid() const{
    return m_created_time_isValid;
}

OAIA2CDateTime OAIBatch_Job::getProcessedTime() const {
    return m_processed_time;
}
void OAIBatch_Job::setProcessedTime(const OAIA2CDateTime &processed_time) {
    m_processed_time = processed_time;
    m_processed_time_isSet = true;
}

bool OAIBatch_Job::is_processed_time_Set() const{
    return m_processed_time_isSet;
}

bool OAIBatch_Job::is_processed_time_Valid() const{
    return m_processed_time_isValid;
}

OAIObject OAIBatch_Job::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIBatch_Job::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIBatch_Job::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIBatch_Job::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIBatch_Job::getCustomFields() const {
    return m_custom_fields;
}
void OAIBatch_Job::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIBatch_Job::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIBatch_Job::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIBatch_Job::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_method_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_time.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_processed_time.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_additional_fields_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_fields_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBatch_Job::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
