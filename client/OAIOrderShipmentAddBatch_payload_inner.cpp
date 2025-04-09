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

#include "OAIOrderShipmentAddBatch_payload_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderShipmentAddBatch_payload_inner::OAIOrderShipmentAddBatch_payload_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderShipmentAddBatch_payload_inner::OAIOrderShipmentAddBatch_payload_inner() {
    this->initializeModel();
}

OAIOrderShipmentAddBatch_payload_inner::~OAIOrderShipmentAddBatch_payload_inner() {}

void OAIOrderShipmentAddBatch_payload_inner::initializeModel() {

    m_order_id_isSet = false;
    m_order_id_isValid = false;

    m_store_id_isSet = false;
    m_store_id_isValid = false;

    m_warehouse_id_isSet = false;
    m_warehouse_id_isValid = false;

    m_carrier_id_isSet = false;
    m_carrier_id_isValid = false;

    m_carrier_name_isSet = false;
    m_carrier_name_isValid = false;

    m_tracking_number_isSet = false;
    m_tracking_number_isValid = false;

    m_tracking_link_isSet = false;
    m_tracking_link_isValid = false;

    m_shipment_provider_isSet = false;
    m_shipment_provider_isValid = false;

    m_items_isSet = false;
    m_items_isValid = false;

    m_send_notifications_isSet = false;
    m_send_notifications_isValid = false;
}

void OAIOrderShipmentAddBatch_payload_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderShipmentAddBatch_payload_inner::fromJsonObject(QJsonObject json) {

    m_order_id_isValid = ::OpenAPI::fromJsonValue(m_order_id, json[QString("order_id")]);
    m_order_id_isSet = !json[QString("order_id")].isNull() && m_order_id_isValid;

    m_store_id_isValid = ::OpenAPI::fromJsonValue(m_store_id, json[QString("store_id")]);
    m_store_id_isSet = !json[QString("store_id")].isNull() && m_store_id_isValid;

    m_warehouse_id_isValid = ::OpenAPI::fromJsonValue(m_warehouse_id, json[QString("warehouse_id")]);
    m_warehouse_id_isSet = !json[QString("warehouse_id")].isNull() && m_warehouse_id_isValid;

    m_carrier_id_isValid = ::OpenAPI::fromJsonValue(m_carrier_id, json[QString("carrier_id")]);
    m_carrier_id_isSet = !json[QString("carrier_id")].isNull() && m_carrier_id_isValid;

    m_carrier_name_isValid = ::OpenAPI::fromJsonValue(m_carrier_name, json[QString("carrier_name")]);
    m_carrier_name_isSet = !json[QString("carrier_name")].isNull() && m_carrier_name_isValid;

    m_tracking_number_isValid = ::OpenAPI::fromJsonValue(m_tracking_number, json[QString("tracking_number")]);
    m_tracking_number_isSet = !json[QString("tracking_number")].isNull() && m_tracking_number_isValid;

    m_tracking_link_isValid = ::OpenAPI::fromJsonValue(m_tracking_link, json[QString("tracking_link")]);
    m_tracking_link_isSet = !json[QString("tracking_link")].isNull() && m_tracking_link_isValid;

    m_shipment_provider_isValid = ::OpenAPI::fromJsonValue(m_shipment_provider, json[QString("shipment_provider")]);
    m_shipment_provider_isSet = !json[QString("shipment_provider")].isNull() && m_shipment_provider_isValid;

    m_items_isValid = ::OpenAPI::fromJsonValue(m_items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;

    m_send_notifications_isValid = ::OpenAPI::fromJsonValue(m_send_notifications, json[QString("send_notifications")]);
    m_send_notifications_isSet = !json[QString("send_notifications")].isNull() && m_send_notifications_isValid;
}

QString OAIOrderShipmentAddBatch_payload_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderShipmentAddBatch_payload_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_order_id_isSet) {
        obj.insert(QString("order_id"), ::OpenAPI::toJsonValue(m_order_id));
    }
    if (m_store_id_isSet) {
        obj.insert(QString("store_id"), ::OpenAPI::toJsonValue(m_store_id));
    }
    if (m_warehouse_id_isSet) {
        obj.insert(QString("warehouse_id"), ::OpenAPI::toJsonValue(m_warehouse_id));
    }
    if (m_carrier_id_isSet) {
        obj.insert(QString("carrier_id"), ::OpenAPI::toJsonValue(m_carrier_id));
    }
    if (m_carrier_name_isSet) {
        obj.insert(QString("carrier_name"), ::OpenAPI::toJsonValue(m_carrier_name));
    }
    if (m_tracking_number_isSet) {
        obj.insert(QString("tracking_number"), ::OpenAPI::toJsonValue(m_tracking_number));
    }
    if (m_tracking_link_isSet) {
        obj.insert(QString("tracking_link"), ::OpenAPI::toJsonValue(m_tracking_link));
    }
    if (m_shipment_provider_isSet) {
        obj.insert(QString("shipment_provider"), ::OpenAPI::toJsonValue(m_shipment_provider));
    }
    if (m_items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(m_items));
    }
    if (m_send_notifications_isSet) {
        obj.insert(QString("send_notifications"), ::OpenAPI::toJsonValue(m_send_notifications));
    }
    return obj;
}

QString OAIOrderShipmentAddBatch_payload_inner::getOrderId() const {
    return m_order_id;
}
void OAIOrderShipmentAddBatch_payload_inner::setOrderId(const QString &order_id) {
    m_order_id = order_id;
    m_order_id_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_order_id_Set() const{
    return m_order_id_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_order_id_Valid() const{
    return m_order_id_isValid;
}

QString OAIOrderShipmentAddBatch_payload_inner::getStoreId() const {
    return m_store_id;
}
void OAIOrderShipmentAddBatch_payload_inner::setStoreId(const QString &store_id) {
    m_store_id = store_id;
    m_store_id_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_store_id_Set() const{
    return m_store_id_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_store_id_Valid() const{
    return m_store_id_isValid;
}

QString OAIOrderShipmentAddBatch_payload_inner::getWarehouseId() const {
    return m_warehouse_id;
}
void OAIOrderShipmentAddBatch_payload_inner::setWarehouseId(const QString &warehouse_id) {
    m_warehouse_id = warehouse_id;
    m_warehouse_id_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_warehouse_id_Set() const{
    return m_warehouse_id_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_warehouse_id_Valid() const{
    return m_warehouse_id_isValid;
}

QString OAIOrderShipmentAddBatch_payload_inner::getCarrierId() const {
    return m_carrier_id;
}
void OAIOrderShipmentAddBatch_payload_inner::setCarrierId(const QString &carrier_id) {
    m_carrier_id = carrier_id;
    m_carrier_id_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_carrier_id_Set() const{
    return m_carrier_id_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_carrier_id_Valid() const{
    return m_carrier_id_isValid;
}

QString OAIOrderShipmentAddBatch_payload_inner::getCarrierName() const {
    return m_carrier_name;
}
void OAIOrderShipmentAddBatch_payload_inner::setCarrierName(const QString &carrier_name) {
    m_carrier_name = carrier_name;
    m_carrier_name_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_carrier_name_Set() const{
    return m_carrier_name_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_carrier_name_Valid() const{
    return m_carrier_name_isValid;
}

QString OAIOrderShipmentAddBatch_payload_inner::getTrackingNumber() const {
    return m_tracking_number;
}
void OAIOrderShipmentAddBatch_payload_inner::setTrackingNumber(const QString &tracking_number) {
    m_tracking_number = tracking_number;
    m_tracking_number_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_tracking_number_Set() const{
    return m_tracking_number_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_tracking_number_Valid() const{
    return m_tracking_number_isValid;
}

QString OAIOrderShipmentAddBatch_payload_inner::getTrackingLink() const {
    return m_tracking_link;
}
void OAIOrderShipmentAddBatch_payload_inner::setTrackingLink(const QString &tracking_link) {
    m_tracking_link = tracking_link;
    m_tracking_link_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_tracking_link_Set() const{
    return m_tracking_link_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_tracking_link_Valid() const{
    return m_tracking_link_isValid;
}

QString OAIOrderShipmentAddBatch_payload_inner::getShipmentProvider() const {
    return m_shipment_provider;
}
void OAIOrderShipmentAddBatch_payload_inner::setShipmentProvider(const QString &shipment_provider) {
    m_shipment_provider = shipment_provider;
    m_shipment_provider_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_shipment_provider_Set() const{
    return m_shipment_provider_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_shipment_provider_Valid() const{
    return m_shipment_provider_isValid;
}

QList<OAIOrderShipmentAddBatch_payload_inner_items_inner> OAIOrderShipmentAddBatch_payload_inner::getItems() const {
    return m_items;
}
void OAIOrderShipmentAddBatch_payload_inner::setItems(const QList<OAIOrderShipmentAddBatch_payload_inner_items_inner> &items) {
    m_items = items;
    m_items_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_items_Set() const{
    return m_items_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_items_Valid() const{
    return m_items_isValid;
}

bool OAIOrderShipmentAddBatch_payload_inner::isSendNotifications() const {
    return m_send_notifications;
}
void OAIOrderShipmentAddBatch_payload_inner::setSendNotifications(const bool &send_notifications) {
    m_send_notifications = send_notifications;
    m_send_notifications_isSet = true;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_send_notifications_Set() const{
    return m_send_notifications_isSet;
}

bool OAIOrderShipmentAddBatch_payload_inner::is_send_notifications_Valid() const{
    return m_send_notifications_isValid;
}

bool OAIOrderShipmentAddBatch_payload_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_order_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_store_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_warehouse_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_carrier_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_carrier_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tracking_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tracking_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_shipment_provider_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_items.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_send_notifications_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrderShipmentAddBatch_payload_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_order_id_isValid && m_tracking_number_isValid && true;
}

} // namespace OpenAPI
