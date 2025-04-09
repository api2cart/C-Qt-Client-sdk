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

#include "OAIOrderPreestimateShippingList_order_item_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderPreestimateShippingList_order_item_inner::OAIOrderPreestimateShippingList_order_item_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderPreestimateShippingList_order_item_inner::OAIOrderPreestimateShippingList_order_item_inner() {
    this->initializeModel();
}

OAIOrderPreestimateShippingList_order_item_inner::~OAIOrderPreestimateShippingList_order_item_inner() {}

void OAIOrderPreestimateShippingList_order_item_inner::initializeModel() {

    m_order_item_id_isSet = false;
    m_order_item_id_isValid = false;

    m_order_item_model_isSet = false;
    m_order_item_model_isValid = false;

    m_order_item_quantity_isSet = false;
    m_order_item_quantity_isValid = false;

    m_order_item_weight_isSet = false;
    m_order_item_weight_isValid = false;

    m_order_item_variant_id_isSet = false;
    m_order_item_variant_id_isValid = false;

    m_order_item_option_isSet = false;
    m_order_item_option_isValid = false;
}

void OAIOrderPreestimateShippingList_order_item_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderPreestimateShippingList_order_item_inner::fromJsonObject(QJsonObject json) {

    m_order_item_id_isValid = ::OpenAPI::fromJsonValue(m_order_item_id, json[QString("order_item_id")]);
    m_order_item_id_isSet = !json[QString("order_item_id")].isNull() && m_order_item_id_isValid;

    m_order_item_model_isValid = ::OpenAPI::fromJsonValue(m_order_item_model, json[QString("order_item_model")]);
    m_order_item_model_isSet = !json[QString("order_item_model")].isNull() && m_order_item_model_isValid;

    m_order_item_quantity_isValid = ::OpenAPI::fromJsonValue(m_order_item_quantity, json[QString("order_item_quantity")]);
    m_order_item_quantity_isSet = !json[QString("order_item_quantity")].isNull() && m_order_item_quantity_isValid;

    m_order_item_weight_isValid = ::OpenAPI::fromJsonValue(m_order_item_weight, json[QString("order_item_weight")]);
    m_order_item_weight_isSet = !json[QString("order_item_weight")].isNull() && m_order_item_weight_isValid;

    m_order_item_variant_id_isValid = ::OpenAPI::fromJsonValue(m_order_item_variant_id, json[QString("order_item_variant_id")]);
    m_order_item_variant_id_isSet = !json[QString("order_item_variant_id")].isNull() && m_order_item_variant_id_isValid;

    m_order_item_option_isValid = ::OpenAPI::fromJsonValue(m_order_item_option, json[QString("order_item_option")]);
    m_order_item_option_isSet = !json[QString("order_item_option")].isNull() && m_order_item_option_isValid;
}

QString OAIOrderPreestimateShippingList_order_item_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderPreestimateShippingList_order_item_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_order_item_id_isSet) {
        obj.insert(QString("order_item_id"), ::OpenAPI::toJsonValue(m_order_item_id));
    }
    if (m_order_item_model_isSet) {
        obj.insert(QString("order_item_model"), ::OpenAPI::toJsonValue(m_order_item_model));
    }
    if (m_order_item_quantity_isSet) {
        obj.insert(QString("order_item_quantity"), ::OpenAPI::toJsonValue(m_order_item_quantity));
    }
    if (m_order_item_weight_isSet) {
        obj.insert(QString("order_item_weight"), ::OpenAPI::toJsonValue(m_order_item_weight));
    }
    if (m_order_item_variant_id_isSet) {
        obj.insert(QString("order_item_variant_id"), ::OpenAPI::toJsonValue(m_order_item_variant_id));
    }
    if (m_order_item_option.size() > 0) {
        obj.insert(QString("order_item_option"), ::OpenAPI::toJsonValue(m_order_item_option));
    }
    return obj;
}

QString OAIOrderPreestimateShippingList_order_item_inner::getOrderItemId() const {
    return m_order_item_id;
}
void OAIOrderPreestimateShippingList_order_item_inner::setOrderItemId(const QString &order_item_id) {
    m_order_item_id = order_item_id;
    m_order_item_id_isSet = true;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_id_Set() const{
    return m_order_item_id_isSet;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_id_Valid() const{
    return m_order_item_id_isValid;
}

QString OAIOrderPreestimateShippingList_order_item_inner::getOrderItemModel() const {
    return m_order_item_model;
}
void OAIOrderPreestimateShippingList_order_item_inner::setOrderItemModel(const QString &order_item_model) {
    m_order_item_model = order_item_model;
    m_order_item_model_isSet = true;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_model_Set() const{
    return m_order_item_model_isSet;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_model_Valid() const{
    return m_order_item_model_isValid;
}

qint32 OAIOrderPreestimateShippingList_order_item_inner::getOrderItemQuantity() const {
    return m_order_item_quantity;
}
void OAIOrderPreestimateShippingList_order_item_inner::setOrderItemQuantity(const qint32 &order_item_quantity) {
    m_order_item_quantity = order_item_quantity;
    m_order_item_quantity_isSet = true;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_quantity_Set() const{
    return m_order_item_quantity_isSet;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_quantity_Valid() const{
    return m_order_item_quantity_isValid;
}

double OAIOrderPreestimateShippingList_order_item_inner::getOrderItemWeight() const {
    return m_order_item_weight;
}
void OAIOrderPreestimateShippingList_order_item_inner::setOrderItemWeight(const double &order_item_weight) {
    m_order_item_weight = order_item_weight;
    m_order_item_weight_isSet = true;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_weight_Set() const{
    return m_order_item_weight_isSet;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_weight_Valid() const{
    return m_order_item_weight_isValid;
}

QString OAIOrderPreestimateShippingList_order_item_inner::getOrderItemVariantId() const {
    return m_order_item_variant_id;
}
void OAIOrderPreestimateShippingList_order_item_inner::setOrderItemVariantId(const QString &order_item_variant_id) {
    m_order_item_variant_id = order_item_variant_id;
    m_order_item_variant_id_isSet = true;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_variant_id_Set() const{
    return m_order_item_variant_id_isSet;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_variant_id_Valid() const{
    return m_order_item_variant_id_isValid;
}

QList<OAIOrderPreestimateShippingList_order_item_inner_order_item_option_inner> OAIOrderPreestimateShippingList_order_item_inner::getOrderItemOption() const {
    return m_order_item_option;
}
void OAIOrderPreestimateShippingList_order_item_inner::setOrderItemOption(const QList<OAIOrderPreestimateShippingList_order_item_inner_order_item_option_inner> &order_item_option) {
    m_order_item_option = order_item_option;
    m_order_item_option_isSet = true;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_option_Set() const{
    return m_order_item_option_isSet;
}

bool OAIOrderPreestimateShippingList_order_item_inner::is_order_item_option_Valid() const{
    return m_order_item_option_isValid;
}

bool OAIOrderPreestimateShippingList_order_item_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_order_item_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_item_model_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_item_quantity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_item_weight_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_item_variant_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_item_option.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrderPreestimateShippingList_order_item_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_order_item_id_isValid && m_order_item_quantity_isValid && true;
}

} // namespace OpenAPI
