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

#include "OAIOrderShipmentAdd_tracking_numbers_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderShipmentAdd_tracking_numbers_inner::OAIOrderShipmentAdd_tracking_numbers_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderShipmentAdd_tracking_numbers_inner::OAIOrderShipmentAdd_tracking_numbers_inner() {
    this->initializeModel();
}

OAIOrderShipmentAdd_tracking_numbers_inner::~OAIOrderShipmentAdd_tracking_numbers_inner() {}

void OAIOrderShipmentAdd_tracking_numbers_inner::initializeModel() {

    m_carrier_id_isSet = false;
    m_carrier_id_isValid = false;

    m_tracking_number_isSet = false;
    m_tracking_number_isValid = false;
}

void OAIOrderShipmentAdd_tracking_numbers_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderShipmentAdd_tracking_numbers_inner::fromJsonObject(QJsonObject json) {

    m_carrier_id_isValid = ::OpenAPI::fromJsonValue(m_carrier_id, json[QString("carrier_id")]);
    m_carrier_id_isSet = !json[QString("carrier_id")].isNull() && m_carrier_id_isValid;

    m_tracking_number_isValid = ::OpenAPI::fromJsonValue(m_tracking_number, json[QString("tracking_number")]);
    m_tracking_number_isSet = !json[QString("tracking_number")].isNull() && m_tracking_number_isValid;
}

QString OAIOrderShipmentAdd_tracking_numbers_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderShipmentAdd_tracking_numbers_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_carrier_id_isSet) {
        obj.insert(QString("carrier_id"), ::OpenAPI::toJsonValue(m_carrier_id));
    }
    if (m_tracking_number_isSet) {
        obj.insert(QString("tracking_number"), ::OpenAPI::toJsonValue(m_tracking_number));
    }
    return obj;
}

QString OAIOrderShipmentAdd_tracking_numbers_inner::getCarrierId() const {
    return m_carrier_id;
}
void OAIOrderShipmentAdd_tracking_numbers_inner::setCarrierId(const QString &carrier_id) {
    m_carrier_id = carrier_id;
    m_carrier_id_isSet = true;
}

bool OAIOrderShipmentAdd_tracking_numbers_inner::is_carrier_id_Set() const{
    return m_carrier_id_isSet;
}

bool OAIOrderShipmentAdd_tracking_numbers_inner::is_carrier_id_Valid() const{
    return m_carrier_id_isValid;
}

QString OAIOrderShipmentAdd_tracking_numbers_inner::getTrackingNumber() const {
    return m_tracking_number;
}
void OAIOrderShipmentAdd_tracking_numbers_inner::setTrackingNumber(const QString &tracking_number) {
    m_tracking_number = tracking_number;
    m_tracking_number_isSet = true;
}

bool OAIOrderShipmentAdd_tracking_numbers_inner::is_tracking_number_Set() const{
    return m_tracking_number_isSet;
}

bool OAIOrderShipmentAdd_tracking_numbers_inner::is_tracking_number_Valid() const{
    return m_tracking_number_isValid;
}

bool OAIOrderShipmentAdd_tracking_numbers_inner::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIOrderShipmentAdd_tracking_numbers_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
