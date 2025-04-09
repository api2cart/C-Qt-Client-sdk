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

#include "OAIOrderShipmentAddBatch_payload_inner_items_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderShipmentAddBatch_payload_inner_items_inner::OAIOrderShipmentAddBatch_payload_inner_items_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderShipmentAddBatch_payload_inner_items_inner::OAIOrderShipmentAddBatch_payload_inner_items_inner() {
    this->initializeModel();
}

OAIOrderShipmentAddBatch_payload_inner_items_inner::~OAIOrderShipmentAddBatch_payload_inner_items_inner() {}

void OAIOrderShipmentAddBatch_payload_inner_items_inner::initializeModel() {

    m_order_product_id_isSet = false;
    m_order_product_id_isValid = false;

    m_quantity_isSet = false;
    m_quantity_isValid = false;
}

void OAIOrderShipmentAddBatch_payload_inner_items_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderShipmentAddBatch_payload_inner_items_inner::fromJsonObject(QJsonObject json) {

    m_order_product_id_isValid = ::OpenAPI::fromJsonValue(m_order_product_id, json[QString("order_product_id")]);
    m_order_product_id_isSet = !json[QString("order_product_id")].isNull() && m_order_product_id_isValid;

    m_quantity_isValid = ::OpenAPI::fromJsonValue(m_quantity, json[QString("quantity")]);
    m_quantity_isSet = !json[QString("quantity")].isNull() && m_quantity_isValid;
}

QString OAIOrderShipmentAddBatch_payload_inner_items_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderShipmentAddBatch_payload_inner_items_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_order_product_id_isSet) {
        obj.insert(QString("order_product_id"), ::OpenAPI::toJsonValue(m_order_product_id));
    }
    if (m_quantity_isSet) {
        obj.insert(QString("quantity"), ::OpenAPI::toJsonValue(m_quantity));
    }
    return obj;
}

QString OAIOrderShipmentAddBatch_payload_inner_items_inner::getOrderProductId() const {
    return m_order_product_id;
}
void OAIOrderShipmentAddBatch_payload_inner_items_inner::setOrderProductId(const QString &order_product_id) {
    m_order_product_id = order_product_id;
    m_order_product_id_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner_items_inner::is_order_product_id_Set() const{
    return m_order_product_id_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner_items_inner::is_order_product_id_Valid() const{
    return m_order_product_id_isValid;
}

double OAIOrderShipmentAddBatch_payload_inner_items_inner::getQuantity() const {
    return m_quantity;
}
void OAIOrderShipmentAddBatch_payload_inner_items_inner::setQuantity(const double &quantity) {
    m_quantity = quantity;
    m_quantity_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner_items_inner::is_quantity_Set() const{
    return m_quantity_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner_items_inner::is_quantity_Valid() const{
    return m_quantity_isValid;
}

bool OAIOrderShipmentAddBatch_payload_inner_items_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_order_product_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quantity_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrderShipmentAddBatch_payload_inner_items_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_order_product_id_isValid && m_quantity_isValid && true;
}

} // namespace OpenAPI
