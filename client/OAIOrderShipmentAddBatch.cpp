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

#include "OAIOrderShipmentAddBatch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderShipmentAddBatch::OAIOrderShipmentAddBatch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderShipmentAddBatch::OAIOrderShipmentAddBatch() {
    this->initializeModel();
}

OAIOrderShipmentAddBatch::~OAIOrderShipmentAddBatch() {}

void OAIOrderShipmentAddBatch::initializeModel() {

    m_payload_isSet = false;
    m_payload_isValid = false;
}

void OAIOrderShipmentAddBatch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderShipmentAddBatch::fromJsonObject(QJsonObject json) {

    m_payload_isValid = ::OpenAPI::fromJsonValue(m_payload, json[QString("payload")]);
    m_payload_isSet = !json[QString("payload")].isNull() && m_payload_isValid;
}

QString OAIOrderShipmentAddBatch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderShipmentAddBatch::asJsonObject() const {
    QJsonObject obj;
    if (m_payload.size() > 0) {
        obj.insert(QString("payload"), ::OpenAPI::toJsonValue(m_payload));
    }
    return obj;
}

QList<OAIOrderShipmentAddBatch_payload_inner> OAIOrderShipmentAddBatch::getPayload() const {
    return m_payload;
}
void OAIOrderShipmentAddBatch::setPayload(const QList<OAIOrderShipmentAddBatch_payload_inner> &payload) {
    m_payload = payload;
    m_payload_isSet = true;
}

bool OAIOrderShipmentAddBatch::is_payload_Set() const{
    return m_payload_isSet;
}

bool OAIOrderShipmentAddBatch::is_payload_Valid() const{
    return m_payload_isValid;
}

bool OAIOrderShipmentAddBatch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_payload.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrderShipmentAddBatch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_payload_isValid && true;
}

} // namespace OpenAPI
