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

#include "OAIStoreAttribute_Group.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIStoreAttribute_Group::OAIStoreAttribute_Group(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStoreAttribute_Group::OAIStoreAttribute_Group() {
    this->initializeModel();
}

OAIStoreAttribute_Group::~OAIStoreAttribute_Group() {}

void OAIStoreAttribute_Group::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_position_isSet = false;
    m_position_isValid = false;

    m_attribute_set_id_isSet = false;
    m_attribute_set_id_isValid = false;

    m_assigned_attribute_ids_isSet = false;
    m_assigned_attribute_ids_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIStoreAttribute_Group::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStoreAttribute_Group::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_position_isValid = ::OpenAPI::fromJsonValue(m_position, json[QString("position")]);
    m_position_isSet = !json[QString("position")].isNull() && m_position_isValid;

    m_attribute_set_id_isValid = ::OpenAPI::fromJsonValue(m_attribute_set_id, json[QString("attribute_set_id")]);
    m_attribute_set_id_isSet = !json[QString("attribute_set_id")].isNull() && m_attribute_set_id_isValid;

    m_assigned_attribute_ids_isValid = ::OpenAPI::fromJsonValue(m_assigned_attribute_ids, json[QString("assigned_attribute_ids")]);
    m_assigned_attribute_ids_isSet = !json[QString("assigned_attribute_ids")].isNull() && m_assigned_attribute_ids_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIStoreAttribute_Group::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStoreAttribute_Group::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_position_isSet) {
        obj.insert(QString("position"), ::OpenAPI::toJsonValue(m_position));
    }
    if (m_attribute_set_id_isSet) {
        obj.insert(QString("attribute_set_id"), ::OpenAPI::toJsonValue(m_attribute_set_id));
    }
    if (m_assigned_attribute_ids.size() > 0) {
        obj.insert(QString("assigned_attribute_ids"), ::OpenAPI::toJsonValue(m_assigned_attribute_ids));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIStoreAttribute_Group::getId() const {
    return m_id;
}
void OAIStoreAttribute_Group::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIStoreAttribute_Group::is_id_Set() const{
    return m_id_isSet;
}

bool OAIStoreAttribute_Group::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIStoreAttribute_Group::getName() const {
    return m_name;
}
void OAIStoreAttribute_Group::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIStoreAttribute_Group::is_name_Set() const{
    return m_name_isSet;
}

bool OAIStoreAttribute_Group::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIStoreAttribute_Group::getPosition() const {
    return m_position;
}
void OAIStoreAttribute_Group::setPosition(const qint32 &position) {
    m_position = position;
    m_position_isSet = true;
}

bool OAIStoreAttribute_Group::is_position_Set() const{
    return m_position_isSet;
}

bool OAIStoreAttribute_Group::is_position_Valid() const{
    return m_position_isValid;
}

QString OAIStoreAttribute_Group::getAttributeSetId() const {
    return m_attribute_set_id;
}
void OAIStoreAttribute_Group::setAttributeSetId(const QString &attribute_set_id) {
    m_attribute_set_id = attribute_set_id;
    m_attribute_set_id_isSet = true;
}

bool OAIStoreAttribute_Group::is_attribute_set_id_Set() const{
    return m_attribute_set_id_isSet;
}

bool OAIStoreAttribute_Group::is_attribute_set_id_Valid() const{
    return m_attribute_set_id_isValid;
}

QList<QString> OAIStoreAttribute_Group::getAssignedAttributeIds() const {
    return m_assigned_attribute_ids;
}
void OAIStoreAttribute_Group::setAssignedAttributeIds(const QList<QString> &assigned_attribute_ids) {
    m_assigned_attribute_ids = assigned_attribute_ids;
    m_assigned_attribute_ids_isSet = true;
}

bool OAIStoreAttribute_Group::is_assigned_attribute_ids_Set() const{
    return m_assigned_attribute_ids_isSet;
}

bool OAIStoreAttribute_Group::is_assigned_attribute_ids_Valid() const{
    return m_assigned_attribute_ids_isValid;
}

OAIObject OAIStoreAttribute_Group::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIStoreAttribute_Group::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIStoreAttribute_Group::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIStoreAttribute_Group::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIStoreAttribute_Group::getCustomFields() const {
    return m_custom_fields;
}
void OAIStoreAttribute_Group::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIStoreAttribute_Group::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIStoreAttribute_Group::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIStoreAttribute_Group::isSet() const {
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

        if (m_position_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_attribute_set_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_assigned_attribute_ids.size() > 0) {
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

bool OAIStoreAttribute_Group::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
