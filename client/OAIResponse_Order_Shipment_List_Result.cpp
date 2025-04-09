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

#include "OAIResponse_Order_Shipment_List_Result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponse_Order_Shipment_List_Result::OAIResponse_Order_Shipment_List_Result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponse_Order_Shipment_List_Result::OAIResponse_Order_Shipment_List_Result() {
    this->initializeModel();
}

OAIResponse_Order_Shipment_List_Result::~OAIResponse_Order_Shipment_List_Result() {}

void OAIResponse_Order_Shipment_List_Result::initializeModel() {

    m_shipment_count_isSet = false;
    m_shipment_count_isValid = false;

    m_shipment_isSet = false;
    m_shipment_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIResponse_Order_Shipment_List_Result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponse_Order_Shipment_List_Result::fromJsonObject(QJsonObject json) {

    m_shipment_count_isValid = ::OpenAPI::fromJsonValue(m_shipment_count, json[QString("shipment_count")]);
    m_shipment_count_isSet = !json[QString("shipment_count")].isNull() && m_shipment_count_isValid;

    m_shipment_isValid = ::OpenAPI::fromJsonValue(m_shipment, json[QString("shipment")]);
    m_shipment_isSet = !json[QString("shipment")].isNull() && m_shipment_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIResponse_Order_Shipment_List_Result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponse_Order_Shipment_List_Result::asJsonObject() const {
    QJsonObject obj;
    if (m_shipment_count_isSet) {
        obj.insert(QString("shipment_count"), ::OpenAPI::toJsonValue(m_shipment_count));
    }
    if (m_shipment.size() > 0) {
        obj.insert(QString("shipment"), ::OpenAPI::toJsonValue(m_shipment));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

qint32 OAIResponse_Order_Shipment_List_Result::getShipmentCount() const {
    return m_shipment_count;
}
void OAIResponse_Order_Shipment_List_Result::setShipmentCount(const qint32 &shipment_count) {
    m_shipment_count = shipment_count;
    m_shipment_count_isSet = true;
}

bool OAIResponse_Order_Shipment_List_Result::is_shipment_count_Set() const{
    return m_shipment_count_isSet;
}

bool OAIResponse_Order_Shipment_List_Result::is_shipment_count_Valid() const{
    return m_shipment_count_isValid;
}

QList<OAIShipment> OAIResponse_Order_Shipment_List_Result::getShipment() const {
    return m_shipment;
}
void OAIResponse_Order_Shipment_List_Result::setShipment(const QList<OAIShipment> &shipment) {
    m_shipment = shipment;
    m_shipment_isSet = true;
}

bool OAIResponse_Order_Shipment_List_Result::is_shipment_Set() const{
    return m_shipment_isSet;
}

bool OAIResponse_Order_Shipment_List_Result::is_shipment_Valid() const{
    return m_shipment_isValid;
}

OAIObject OAIResponse_Order_Shipment_List_Result::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIResponse_Order_Shipment_List_Result::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIResponse_Order_Shipment_List_Result::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIResponse_Order_Shipment_List_Result::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIResponse_Order_Shipment_List_Result::getCustomFields() const {
    return m_custom_fields;
}
void OAIResponse_Order_Shipment_List_Result::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIResponse_Order_Shipment_List_Result::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIResponse_Order_Shipment_List_Result::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIResponse_Order_Shipment_List_Result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_shipment_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_shipment.size() > 0) {
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

bool OAIResponse_Order_Shipment_List_Result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
