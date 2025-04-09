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

#include "OAIOrderShipmentAdd_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderShipmentAdd_200_response_result::OAIOrderShipmentAdd_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderShipmentAdd_200_response_result::OAIOrderShipmentAdd_200_response_result() {
    this->initializeModel();
}

OAIOrderShipmentAdd_200_response_result::~OAIOrderShipmentAdd_200_response_result() {}

void OAIOrderShipmentAdd_200_response_result::initializeModel() {

    m_shipment_id_isSet = false;
    m_shipment_id_isValid = false;
}

void OAIOrderShipmentAdd_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderShipmentAdd_200_response_result::fromJsonObject(QJsonObject json) {

    m_shipment_id_isValid = ::OpenAPI::fromJsonValue(m_shipment_id, json[QString("shipment_id")]);
    m_shipment_id_isSet = !json[QString("shipment_id")].isNull() && m_shipment_id_isValid;
}

QString OAIOrderShipmentAdd_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderShipmentAdd_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_shipment_id_isSet) {
        obj.insert(QString("shipment_id"), ::OpenAPI::toJsonValue(m_shipment_id));
    }
    return obj;
}

QString OAIOrderShipmentAdd_200_response_result::getShipmentId() const {
    return m_shipment_id;
}
void OAIOrderShipmentAdd_200_response_result::setShipmentId(const QString &shipment_id) {
    m_shipment_id = shipment_id;
    m_shipment_id_isSet = true;
}

bool OAIOrderShipmentAdd_200_response_result::is_shipment_id_Set() const{
    return m_shipment_id_isSet;
}

bool OAIOrderShipmentAdd_200_response_result::is_shipment_id_Valid() const{
    return m_shipment_id_isValid;
}

bool OAIOrderShipmentAdd_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_shipment_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrderShipmentAdd_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
