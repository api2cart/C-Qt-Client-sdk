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

#include "OAIResponse_Attribute_Attributeset_List_Result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponse_Attribute_Attributeset_List_Result::OAIResponse_Attribute_Attributeset_List_Result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponse_Attribute_Attributeset_List_Result::OAIResponse_Attribute_Attributeset_List_Result() {
    this->initializeModel();
}

OAIResponse_Attribute_Attributeset_List_Result::~OAIResponse_Attribute_Attributeset_List_Result() {}

void OAIResponse_Attribute_Attributeset_List_Result::initializeModel() {

    m_attribute_set_isSet = false;
    m_attribute_set_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIResponse_Attribute_Attributeset_List_Result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponse_Attribute_Attributeset_List_Result::fromJsonObject(QJsonObject json) {

    m_attribute_set_isValid = ::OpenAPI::fromJsonValue(m_attribute_set, json[QString("attribute_set")]);
    m_attribute_set_isSet = !json[QString("attribute_set")].isNull() && m_attribute_set_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIResponse_Attribute_Attributeset_List_Result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponse_Attribute_Attributeset_List_Result::asJsonObject() const {
    QJsonObject obj;
    if (m_attribute_set.size() > 0) {
        obj.insert(QString("attribute_set"), ::OpenAPI::toJsonValue(m_attribute_set));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QList<OAIStoreAttribute_AttributeSet> OAIResponse_Attribute_Attributeset_List_Result::getAttributeSet() const {
    return m_attribute_set;
}
void OAIResponse_Attribute_Attributeset_List_Result::setAttributeSet(const QList<OAIStoreAttribute_AttributeSet> &attribute_set) {
    m_attribute_set = attribute_set;
    m_attribute_set_isSet = true;
}

bool OAIResponse_Attribute_Attributeset_List_Result::is_attribute_set_Set() const{
    return m_attribute_set_isSet;
}

bool OAIResponse_Attribute_Attributeset_List_Result::is_attribute_set_Valid() const{
    return m_attribute_set_isValid;
}

OAIObject OAIResponse_Attribute_Attributeset_List_Result::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIResponse_Attribute_Attributeset_List_Result::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIResponse_Attribute_Attributeset_List_Result::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIResponse_Attribute_Attributeset_List_Result::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIResponse_Attribute_Attributeset_List_Result::getCustomFields() const {
    return m_custom_fields;
}
void OAIResponse_Attribute_Attributeset_List_Result::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIResponse_Attribute_Attributeset_List_Result::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIResponse_Attribute_Attributeset_List_Result::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIResponse_Attribute_Attributeset_List_Result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_attribute_set.size() > 0) {
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

bool OAIResponse_Attribute_Attributeset_List_Result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
