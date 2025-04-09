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

#include "OAIShipment_TrackingNumber.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIShipment_TrackingNumber::OAIShipment_TrackingNumber(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIShipment_TrackingNumber::OAIShipment_TrackingNumber() {
    this->initializeModel();
}

OAIShipment_TrackingNumber::~OAIShipment_TrackingNumber() {}

void OAIShipment_TrackingNumber::initializeModel() {

    m_carrier_id_isSet = false;
    m_carrier_id_isValid = false;

    m_tracking_number_isSet = false;
    m_tracking_number_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIShipment_TrackingNumber::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIShipment_TrackingNumber::fromJsonObject(QJsonObject json) {

    m_carrier_id_isValid = ::OpenAPI::fromJsonValue(m_carrier_id, json[QString("carrier_id")]);
    m_carrier_id_isSet = !json[QString("carrier_id")].isNull() && m_carrier_id_isValid;

    m_tracking_number_isValid = ::OpenAPI::fromJsonValue(m_tracking_number, json[QString("tracking_number")]);
    m_tracking_number_isSet = !json[QString("tracking_number")].isNull() && m_tracking_number_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIShipment_TrackingNumber::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIShipment_TrackingNumber::asJsonObject() const {
    QJsonObject obj;
    if (m_carrier_id_isSet) {
        obj.insert(QString("carrier_id"), ::OpenAPI::toJsonValue(m_carrier_id));
    }
    if (m_tracking_number_isSet) {
        obj.insert(QString("tracking_number"), ::OpenAPI::toJsonValue(m_tracking_number));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIShipment_TrackingNumber::getCarrierId() const {
    return m_carrier_id;
}
void OAIShipment_TrackingNumber::setCarrierId(const QString &carrier_id) {
    m_carrier_id = carrier_id;
    m_carrier_id_isSet = true;
}

bool OAIShipment_TrackingNumber::is_carrier_id_Set() const{
    return m_carrier_id_isSet;
}

bool OAIShipment_TrackingNumber::is_carrier_id_Valid() const{
    return m_carrier_id_isValid;
}

QString OAIShipment_TrackingNumber::getTrackingNumber() const {
    return m_tracking_number;
}
void OAIShipment_TrackingNumber::setTrackingNumber(const QString &tracking_number) {
    m_tracking_number = tracking_number;
    m_tracking_number_isSet = true;
}

bool OAIShipment_TrackingNumber::is_tracking_number_Set() const{
    return m_tracking_number_isSet;
}

bool OAIShipment_TrackingNumber::is_tracking_number_Valid() const{
    return m_tracking_number_isValid;
}

OAIObject OAIShipment_TrackingNumber::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIShipment_TrackingNumber::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIShipment_TrackingNumber::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIShipment_TrackingNumber::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIShipment_TrackingNumber::getCustomFields() const {
    return m_custom_fields;
}
void OAIShipment_TrackingNumber::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIShipment_TrackingNumber::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIShipment_TrackingNumber::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIShipment_TrackingNumber::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_carrier_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tracking_number_isSet) {
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

bool OAIShipment_TrackingNumber::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
