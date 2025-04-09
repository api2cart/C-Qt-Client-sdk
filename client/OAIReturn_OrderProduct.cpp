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

#include "OAIReturn_OrderProduct.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIReturn_OrderProduct::OAIReturn_OrderProduct(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIReturn_OrderProduct::OAIReturn_OrderProduct() {
    this->initializeModel();
}

OAIReturn_OrderProduct::~OAIReturn_OrderProduct() {}

void OAIReturn_OrderProduct::initializeModel() {

    m_product_id_isSet = false;
    m_product_id_isValid = false;

    m_order_product_id_isSet = false;
    m_order_product_id_isValid = false;

    m_sku_isSet = false;
    m_sku_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_quantity_isSet = false;
    m_quantity_isValid = false;

    m_reason_isSet = false;
    m_reason_isValid = false;

    m_action_isSet = false;
    m_action_isValid = false;

    m_condition_isSet = false;
    m_condition_isValid = false;

    m_customer_comment_isSet = false;
    m_customer_comment_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIReturn_OrderProduct::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIReturn_OrderProduct::fromJsonObject(QJsonObject json) {

    m_product_id_isValid = ::OpenAPI::fromJsonValue(m_product_id, json[QString("product_id")]);
    m_product_id_isSet = !json[QString("product_id")].isNull() && m_product_id_isValid;

    m_order_product_id_isValid = ::OpenAPI::fromJsonValue(m_order_product_id, json[QString("order_product_id")]);
    m_order_product_id_isSet = !json[QString("order_product_id")].isNull() && m_order_product_id_isValid;

    m_sku_isValid = ::OpenAPI::fromJsonValue(m_sku, json[QString("sku")]);
    m_sku_isSet = !json[QString("sku")].isNull() && m_sku_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_quantity_isValid = ::OpenAPI::fromJsonValue(m_quantity, json[QString("quantity")]);
    m_quantity_isSet = !json[QString("quantity")].isNull() && m_quantity_isValid;

    m_reason_isValid = ::OpenAPI::fromJsonValue(m_reason, json[QString("reason")]);
    m_reason_isSet = !json[QString("reason")].isNull() && m_reason_isValid;

    m_action_isValid = ::OpenAPI::fromJsonValue(m_action, json[QString("action")]);
    m_action_isSet = !json[QString("action")].isNull() && m_action_isValid;

    m_condition_isValid = ::OpenAPI::fromJsonValue(m_condition, json[QString("condition")]);
    m_condition_isSet = !json[QString("condition")].isNull() && m_condition_isValid;

    m_customer_comment_isValid = ::OpenAPI::fromJsonValue(m_customer_comment, json[QString("customer_comment")]);
    m_customer_comment_isSet = !json[QString("customer_comment")].isNull() && m_customer_comment_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIReturn_OrderProduct::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIReturn_OrderProduct::asJsonObject() const {
    QJsonObject obj;
    if (m_product_id_isSet) {
        obj.insert(QString("product_id"), ::OpenAPI::toJsonValue(m_product_id));
    }
    if (m_order_product_id_isSet) {
        obj.insert(QString("order_product_id"), ::OpenAPI::toJsonValue(m_order_product_id));
    }
    if (m_sku_isSet) {
        obj.insert(QString("sku"), ::OpenAPI::toJsonValue(m_sku));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_quantity_isSet) {
        obj.insert(QString("quantity"), ::OpenAPI::toJsonValue(m_quantity));
    }
    if (m_reason.isSet()) {
        obj.insert(QString("reason"), ::OpenAPI::toJsonValue(m_reason));
    }
    if (m_action.isSet()) {
        obj.insert(QString("action"), ::OpenAPI::toJsonValue(m_action));
    }
    if (m_condition_isSet) {
        obj.insert(QString("condition"), ::OpenAPI::toJsonValue(m_condition));
    }
    if (m_customer_comment_isSet) {
        obj.insert(QString("customer_comment"), ::OpenAPI::toJsonValue(m_customer_comment));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIReturn_OrderProduct::getProductId() const {
    return m_product_id;
}
void OAIReturn_OrderProduct::setProductId(const QString &product_id) {
    m_product_id = product_id;
    m_product_id_isSet = true;
}

bool OAIReturn_OrderProduct::is_product_id_Set() const{
    return m_product_id_isSet;
}

bool OAIReturn_OrderProduct::is_product_id_Valid() const{
    return m_product_id_isValid;
}

QString OAIReturn_OrderProduct::getOrderProductId() const {
    return m_order_product_id;
}
void OAIReturn_OrderProduct::setOrderProductId(const QString &order_product_id) {
    m_order_product_id = order_product_id;
    m_order_product_id_isSet = true;
}

bool OAIReturn_OrderProduct::is_order_product_id_Set() const{
    return m_order_product_id_isSet;
}

bool OAIReturn_OrderProduct::is_order_product_id_Valid() const{
    return m_order_product_id_isValid;
}

QString OAIReturn_OrderProduct::getSku() const {
    return m_sku;
}
void OAIReturn_OrderProduct::setSku(const QString &sku) {
    m_sku = sku;
    m_sku_isSet = true;
}

bool OAIReturn_OrderProduct::is_sku_Set() const{
    return m_sku_isSet;
}

bool OAIReturn_OrderProduct::is_sku_Valid() const{
    return m_sku_isValid;
}

QString OAIReturn_OrderProduct::getName() const {
    return m_name;
}
void OAIReturn_OrderProduct::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIReturn_OrderProduct::is_name_Set() const{
    return m_name_isSet;
}

bool OAIReturn_OrderProduct::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIReturn_OrderProduct::getQuantity() const {
    return m_quantity;
}
void OAIReturn_OrderProduct::setQuantity(const qint32 &quantity) {
    m_quantity = quantity;
    m_quantity_isSet = true;
}

bool OAIReturn_OrderProduct::is_quantity_Set() const{
    return m_quantity_isSet;
}

bool OAIReturn_OrderProduct::is_quantity_Valid() const{
    return m_quantity_isValid;
}

OAIReturn_Reason OAIReturn_OrderProduct::getReason() const {
    return m_reason;
}
void OAIReturn_OrderProduct::setReason(const OAIReturn_Reason &reason) {
    m_reason = reason;
    m_reason_isSet = true;
}

bool OAIReturn_OrderProduct::is_reason_Set() const{
    return m_reason_isSet;
}

bool OAIReturn_OrderProduct::is_reason_Valid() const{
    return m_reason_isValid;
}

OAIReturn_Action OAIReturn_OrderProduct::getAction() const {
    return m_action;
}
void OAIReturn_OrderProduct::setAction(const OAIReturn_Action &action) {
    m_action = action;
    m_action_isSet = true;
}

bool OAIReturn_OrderProduct::is_action_Set() const{
    return m_action_isSet;
}

bool OAIReturn_OrderProduct::is_action_Valid() const{
    return m_action_isValid;
}

QString OAIReturn_OrderProduct::getCondition() const {
    return m_condition;
}
void OAIReturn_OrderProduct::setCondition(const QString &condition) {
    m_condition = condition;
    m_condition_isSet = true;
}

bool OAIReturn_OrderProduct::is_condition_Set() const{
    return m_condition_isSet;
}

bool OAIReturn_OrderProduct::is_condition_Valid() const{
    return m_condition_isValid;
}

QString OAIReturn_OrderProduct::getCustomerComment() const {
    return m_customer_comment;
}
void OAIReturn_OrderProduct::setCustomerComment(const QString &customer_comment) {
    m_customer_comment = customer_comment;
    m_customer_comment_isSet = true;
}

bool OAIReturn_OrderProduct::is_customer_comment_Set() const{
    return m_customer_comment_isSet;
}

bool OAIReturn_OrderProduct::is_customer_comment_Valid() const{
    return m_customer_comment_isValid;
}

OAIObject OAIReturn_OrderProduct::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIReturn_OrderProduct::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIReturn_OrderProduct::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIReturn_OrderProduct::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIReturn_OrderProduct::getCustomFields() const {
    return m_custom_fields;
}
void OAIReturn_OrderProduct::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIReturn_OrderProduct::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIReturn_OrderProduct::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIReturn_OrderProduct::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_product_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_product_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sku_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quantity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reason.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_action.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_condition_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_customer_comment_isSet) {
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

bool OAIReturn_OrderProduct::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
