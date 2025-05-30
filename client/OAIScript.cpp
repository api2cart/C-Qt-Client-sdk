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

#include "OAIScript.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIScript::OAIScript(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIScript::OAIScript() {
    this->initializeModel();
}

OAIScript::~OAIScript() {}

void OAIScript::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_src_isSet = false;
    m_src_isValid = false;

    m_scope_isSet = false;
    m_scope_isValid = false;

    m_event_isSet = false;
    m_event_isValid = false;

    m_load_method_isSet = false;
    m_load_method_isValid = false;

    m_html_isSet = false;
    m_html_isValid = false;

    m_created_time_isSet = false;
    m_created_time_isValid = false;

    m_modified_time_isSet = false;
    m_modified_time_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIScript::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIScript::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_src_isValid = ::OpenAPI::fromJsonValue(m_src, json[QString("src")]);
    m_src_isSet = !json[QString("src")].isNull() && m_src_isValid;

    m_scope_isValid = ::OpenAPI::fromJsonValue(m_scope, json[QString("scope")]);
    m_scope_isSet = !json[QString("scope")].isNull() && m_scope_isValid;

    m_event_isValid = ::OpenAPI::fromJsonValue(m_event, json[QString("event")]);
    m_event_isSet = !json[QString("event")].isNull() && m_event_isValid;

    m_load_method_isValid = ::OpenAPI::fromJsonValue(m_load_method, json[QString("load_method")]);
    m_load_method_isSet = !json[QString("load_method")].isNull() && m_load_method_isValid;

    m_html_isValid = ::OpenAPI::fromJsonValue(m_html, json[QString("html")]);
    m_html_isSet = !json[QString("html")].isNull() && m_html_isValid;

    m_created_time_isValid = ::OpenAPI::fromJsonValue(m_created_time, json[QString("created_time")]);
    m_created_time_isSet = !json[QString("created_time")].isNull() && m_created_time_isValid;

    m_modified_time_isValid = ::OpenAPI::fromJsonValue(m_modified_time, json[QString("modified_time")]);
    m_modified_time_isSet = !json[QString("modified_time")].isNull() && m_modified_time_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIScript::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIScript::asJsonObject() const {
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
    if (m_src_isSet) {
        obj.insert(QString("src"), ::OpenAPI::toJsonValue(m_src));
    }
    if (m_scope_isSet) {
        obj.insert(QString("scope"), ::OpenAPI::toJsonValue(m_scope));
    }
    if (m_event_isSet) {
        obj.insert(QString("event"), ::OpenAPI::toJsonValue(m_event));
    }
    if (m_load_method_isSet) {
        obj.insert(QString("load_method"), ::OpenAPI::toJsonValue(m_load_method));
    }
    if (m_html_isSet) {
        obj.insert(QString("html"), ::OpenAPI::toJsonValue(m_html));
    }
    if (m_created_time.isSet()) {
        obj.insert(QString("created_time"), ::OpenAPI::toJsonValue(m_created_time));
    }
    if (m_modified_time.isSet()) {
        obj.insert(QString("modified_time"), ::OpenAPI::toJsonValue(m_modified_time));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIScript::getId() const {
    return m_id;
}
void OAIScript::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIScript::is_id_Set() const{
    return m_id_isSet;
}

bool OAIScript::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIScript::getName() const {
    return m_name;
}
void OAIScript::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIScript::is_name_Set() const{
    return m_name_isSet;
}

bool OAIScript::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIScript::getDescription() const {
    return m_description;
}
void OAIScript::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIScript::is_description_Set() const{
    return m_description_isSet;
}

bool OAIScript::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIScript::getSrc() const {
    return m_src;
}
void OAIScript::setSrc(const QString &src) {
    m_src = src;
    m_src_isSet = true;
}

bool OAIScript::is_src_Set() const{
    return m_src_isSet;
}

bool OAIScript::is_src_Valid() const{
    return m_src_isValid;
}

QString OAIScript::getScope() const {
    return m_scope;
}
void OAIScript::setScope(const QString &scope) {
    m_scope = scope;
    m_scope_isSet = true;
}

bool OAIScript::is_scope_Set() const{
    return m_scope_isSet;
}

bool OAIScript::is_scope_Valid() const{
    return m_scope_isValid;
}

QString OAIScript::getEvent() const {
    return m_event;
}
void OAIScript::setEvent(const QString &event) {
    m_event = event;
    m_event_isSet = true;
}

bool OAIScript::is_event_Set() const{
    return m_event_isSet;
}

bool OAIScript::is_event_Valid() const{
    return m_event_isValid;
}

QString OAIScript::getLoadMethod() const {
    return m_load_method;
}
void OAIScript::setLoadMethod(const QString &load_method) {
    m_load_method = load_method;
    m_load_method_isSet = true;
}

bool OAIScript::is_load_method_Set() const{
    return m_load_method_isSet;
}

bool OAIScript::is_load_method_Valid() const{
    return m_load_method_isValid;
}

QString OAIScript::getHtml() const {
    return m_html;
}
void OAIScript::setHtml(const QString &html) {
    m_html = html;
    m_html_isSet = true;
}

bool OAIScript::is_html_Set() const{
    return m_html_isSet;
}

bool OAIScript::is_html_Valid() const{
    return m_html_isValid;
}

OAIA2CDateTime OAIScript::getCreatedTime() const {
    return m_created_time;
}
void OAIScript::setCreatedTime(const OAIA2CDateTime &created_time) {
    m_created_time = created_time;
    m_created_time_isSet = true;
}

bool OAIScript::is_created_time_Set() const{
    return m_created_time_isSet;
}

bool OAIScript::is_created_time_Valid() const{
    return m_created_time_isValid;
}

OAIA2CDateTime OAIScript::getModifiedTime() const {
    return m_modified_time;
}
void OAIScript::setModifiedTime(const OAIA2CDateTime &modified_time) {
    m_modified_time = modified_time;
    m_modified_time_isSet = true;
}

bool OAIScript::is_modified_time_Set() const{
    return m_modified_time_isSet;
}

bool OAIScript::is_modified_time_Valid() const{
    return m_modified_time_isValid;
}

OAIObject OAIScript::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIScript::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIScript::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIScript::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIScript::getCustomFields() const {
    return m_custom_fields;
}
void OAIScript::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIScript::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIScript::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIScript::isSet() const {
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

        if (m_src_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_scope_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_event_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_load_method_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_html_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_time.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_modified_time.isSet()) {
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

bool OAIScript::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
