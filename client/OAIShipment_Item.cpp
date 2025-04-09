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

#include "OAIShipment_Item.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIShipment_Item::OAIShipment_Item(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIShipment_Item::OAIShipment_Item() {
    this->initializeModel();
}

OAIShipment_Item::~OAIShipment_Item() {}

void OAIShipment_Item::initializeModel() {

    m_order_product_id_isSet = false;
    m_order_product_id_isValid = false;

    m_product_id_isSet = false;
    m_product_id_isValid = false;

    m_variant_id_isSet = false;
    m_variant_id_isValid = false;

    m_model_isSet = false;
    m_model_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_price_isSet = false;
    m_price_isValid = false;

    m_quantity_isSet = false;
    m_quantity_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIShipment_Item::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIShipment_Item::fromJsonObject(QJsonObject json) {

    m_order_product_id_isValid = ::OpenAPI::fromJsonValue(m_order_product_id, json[QString("order_product_id")]);
    m_order_product_id_isSet = !json[QString("order_product_id")].isNull() && m_order_product_id_isValid;

    m_product_id_isValid = ::OpenAPI::fromJsonValue(m_product_id, json[QString("product_id")]);
    m_product_id_isSet = !json[QString("product_id")].isNull() && m_product_id_isValid;

    m_variant_id_isValid = ::OpenAPI::fromJsonValue(m_variant_id, json[QString("variant_id")]);
    m_variant_id_isSet = !json[QString("variant_id")].isNull() && m_variant_id_isValid;

    m_model_isValid = ::OpenAPI::fromJsonValue(m_model, json[QString("model")]);
    m_model_isSet = !json[QString("model")].isNull() && m_model_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_price_isValid = ::OpenAPI::fromJsonValue(m_price, json[QString("price")]);
    m_price_isSet = !json[QString("price")].isNull() && m_price_isValid;

    m_quantity_isValid = ::OpenAPI::fromJsonValue(m_quantity, json[QString("quantity")]);
    m_quantity_isSet = !json[QString("quantity")].isNull() && m_quantity_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIShipment_Item::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIShipment_Item::asJsonObject() const {
    QJsonObject obj;
    if (m_order_product_id_isSet) {
        obj.insert(QString("order_product_id"), ::OpenAPI::toJsonValue(m_order_product_id));
    }
    if (m_product_id_isSet) {
        obj.insert(QString("product_id"), ::OpenAPI::toJsonValue(m_product_id));
    }
    if (m_variant_id_isSet) {
        obj.insert(QString("variant_id"), ::OpenAPI::toJsonValue(m_variant_id));
    }
    if (m_model_isSet) {
        obj.insert(QString("model"), ::OpenAPI::toJsonValue(m_model));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_price_isSet) {
        obj.insert(QString("price"), ::OpenAPI::toJsonValue(m_price));
    }
    if (m_quantity_isSet) {
        obj.insert(QString("quantity"), ::OpenAPI::toJsonValue(m_quantity));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIShipment_Item::getOrderProductId() const {
    return m_order_product_id;
}
void OAIShipment_Item::setOrderProductId(const QString &order_product_id) {
    m_order_product_id = order_product_id;
    m_order_product_id_isSet = true;
}

bool OAIShipment_Item::is_order_product_id_Set() const{
    return m_order_product_id_isSet;
}

bool OAIShipment_Item::is_order_product_id_Valid() const{
    return m_order_product_id_isValid;
}

QString OAIShipment_Item::getProductId() const {
    return m_product_id;
}
void OAIShipment_Item::setProductId(const QString &product_id) {
    m_product_id = product_id;
    m_product_id_isSet = true;
}

bool OAIShipment_Item::is_product_id_Set() const{
    return m_product_id_isSet;
}

bool OAIShipment_Item::is_product_id_Valid() const{
    return m_product_id_isValid;
}

QString OAIShipment_Item::getVariantId() const {
    return m_variant_id;
}
void OAIShipment_Item::setVariantId(const QString &variant_id) {
    m_variant_id = variant_id;
    m_variant_id_isSet = true;
}

bool OAIShipment_Item::is_variant_id_Set() const{
    return m_variant_id_isSet;
}

bool OAIShipment_Item::is_variant_id_Valid() const{
    return m_variant_id_isValid;
}

QString OAIShipment_Item::getModel() const {
    return m_model;
}
void OAIShipment_Item::setModel(const QString &model) {
    m_model = model;
    m_model_isSet = true;
}

bool OAIShipment_Item::is_model_Set() const{
    return m_model_isSet;
}

bool OAIShipment_Item::is_model_Valid() const{
    return m_model_isValid;
}

QString OAIShipment_Item::getName() const {
    return m_name;
}
void OAIShipment_Item::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIShipment_Item::is_name_Set() const{
    return m_name_isSet;
}

bool OAIShipment_Item::is_name_Valid() const{
    return m_name_isValid;
}

double OAIShipment_Item::getPrice() const {
    return m_price;
}
void OAIShipment_Item::setPrice(const double &price) {
    m_price = price;
    m_price_isSet = true;
}

bool OAIShipment_Item::is_price_Set() const{
    return m_price_isSet;
}

bool OAIShipment_Item::is_price_Valid() const{
    return m_price_isValid;
}

double OAIShipment_Item::getQuantity() const {
    return m_quantity;
}
void OAIShipment_Item::setQuantity(const double &quantity) {
    m_quantity = quantity;
    m_quantity_isSet = true;
}

bool OAIShipment_Item::is_quantity_Set() const{
    return m_quantity_isSet;
}

bool OAIShipment_Item::is_quantity_Valid() const{
    return m_quantity_isValid;
}

OAIObject OAIShipment_Item::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIShipment_Item::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIShipment_Item::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIShipment_Item::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIShipment_Item::getCustomFields() const {
    return m_custom_fields;
}
void OAIShipment_Item::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIShipment_Item::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIShipment_Item::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIShipment_Item::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_order_product_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_product_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_variant_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_model_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_price_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quantity_isSet) {
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

bool OAIShipment_Item::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
