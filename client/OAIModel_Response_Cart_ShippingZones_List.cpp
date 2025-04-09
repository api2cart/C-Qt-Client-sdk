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

#include "OAIModel_Response_Cart_ShippingZones_List.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIModel_Response_Cart_ShippingZones_List::OAIModel_Response_Cart_ShippingZones_List(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIModel_Response_Cart_ShippingZones_List::OAIModel_Response_Cart_ShippingZones_List() {
    this->initializeModel();
}

OAIModel_Response_Cart_ShippingZones_List::~OAIModel_Response_Cart_ShippingZones_List() {}

void OAIModel_Response_Cart_ShippingZones_List::initializeModel() {

    m_return_code_isSet = false;
    m_return_code_isValid = false;

    m_return_message_isSet = false;
    m_return_message_isValid = false;

    m_pagination_isSet = false;
    m_pagination_isValid = false;

    m_result_isSet = false;
    m_result_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIModel_Response_Cart_ShippingZones_List::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIModel_Response_Cart_ShippingZones_List::fromJsonObject(QJsonObject json) {

    m_return_code_isValid = ::OpenAPI::fromJsonValue(m_return_code, json[QString("return_code")]);
    m_return_code_isSet = !json[QString("return_code")].isNull() && m_return_code_isValid;

    m_return_message_isValid = ::OpenAPI::fromJsonValue(m_return_message, json[QString("return_message")]);
    m_return_message_isSet = !json[QString("return_message")].isNull() && m_return_message_isValid;

    m_pagination_isValid = ::OpenAPI::fromJsonValue(m_pagination, json[QString("pagination")]);
    m_pagination_isSet = !json[QString("pagination")].isNull() && m_pagination_isValid;

    m_result_isValid = ::OpenAPI::fromJsonValue(m_result, json[QString("result")]);
    m_result_isSet = !json[QString("result")].isNull() && m_result_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIModel_Response_Cart_ShippingZones_List::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIModel_Response_Cart_ShippingZones_List::asJsonObject() const {
    QJsonObject obj;
    if (m_return_code_isSet) {
        obj.insert(QString("return_code"), ::OpenAPI::toJsonValue(m_return_code));
    }
    if (m_return_message_isSet) {
        obj.insert(QString("return_message"), ::OpenAPI::toJsonValue(m_return_message));
    }
    if (m_pagination.isSet()) {
        obj.insert(QString("pagination"), ::OpenAPI::toJsonValue(m_pagination));
    }
    if (m_result.isSet()) {
        obj.insert(QString("result"), ::OpenAPI::toJsonValue(m_result));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

qint32 OAIModel_Response_Cart_ShippingZones_List::getReturnCode() const {
    return m_return_code;
}
void OAIModel_Response_Cart_ShippingZones_List::setReturnCode(const qint32 &return_code) {
    m_return_code = return_code;
    m_return_code_isSet = true;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_return_code_Set() const{
    return m_return_code_isSet;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_return_code_Valid() const{
    return m_return_code_isValid;
}

QString OAIModel_Response_Cart_ShippingZones_List::getReturnMessage() const {
    return m_return_message;
}
void OAIModel_Response_Cart_ShippingZones_List::setReturnMessage(const QString &return_message) {
    m_return_message = return_message;
    m_return_message_isSet = true;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_return_message_Set() const{
    return m_return_message_isSet;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_return_message_Valid() const{
    return m_return_message_isValid;
}

OAIPagination OAIModel_Response_Cart_ShippingZones_List::getPagination() const {
    return m_pagination;
}
void OAIModel_Response_Cart_ShippingZones_List::setPagination(const OAIPagination &pagination) {
    m_pagination = pagination;
    m_pagination_isSet = true;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_pagination_Set() const{
    return m_pagination_isSet;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_pagination_Valid() const{
    return m_pagination_isValid;
}

OAIResponse_Cart_ShippingZones_List_Result OAIModel_Response_Cart_ShippingZones_List::getResult() const {
    return m_result;
}
void OAIModel_Response_Cart_ShippingZones_List::setResult(const OAIResponse_Cart_ShippingZones_List_Result &result) {
    m_result = result;
    m_result_isSet = true;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_result_Set() const{
    return m_result_isSet;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_result_Valid() const{
    return m_result_isValid;
}

OAIObject OAIModel_Response_Cart_ShippingZones_List::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIModel_Response_Cart_ShippingZones_List::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIModel_Response_Cart_ShippingZones_List::getCustomFields() const {
    return m_custom_fields;
}
void OAIModel_Response_Cart_ShippingZones_List::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIModel_Response_Cart_ShippingZones_List::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIModel_Response_Cart_ShippingZones_List::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_return_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_return_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pagination.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_result.isSet()) {
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

bool OAIModel_Response_Cart_ShippingZones_List::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
