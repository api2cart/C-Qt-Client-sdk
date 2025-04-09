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

#include "OAIBasket_Item.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBasket_Item::OAIBasket_Item(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBasket_Item::OAIBasket_Item() {
    this->initializeModel();
}

OAIBasket_Item::~OAIBasket_Item() {}

void OAIBasket_Item::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_parent_id_isSet = false;
    m_parent_id_isValid = false;

    m_product_id_isSet = false;
    m_product_id_isValid = false;

    m_variant_id_isSet = false;
    m_variant_id_isValid = false;

    m_sku_isSet = false;
    m_sku_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_price_isSet = false;
    m_price_isValid = false;

    m_tax_isSet = false;
    m_tax_isValid = false;

    m_quantity_isSet = false;
    m_quantity_isValid = false;

    m_weight_unit_isSet = false;
    m_weight_unit_isValid = false;

    m_weight_isSet = false;
    m_weight_isValid = false;

    m_options_isSet = false;
    m_options_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIBasket_Item::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBasket_Item::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_parent_id_isValid = ::OpenAPI::fromJsonValue(m_parent_id, json[QString("parent_id")]);
    m_parent_id_isSet = !json[QString("parent_id")].isNull() && m_parent_id_isValid;

    m_product_id_isValid = ::OpenAPI::fromJsonValue(m_product_id, json[QString("product_id")]);
    m_product_id_isSet = !json[QString("product_id")].isNull() && m_product_id_isValid;

    m_variant_id_isValid = ::OpenAPI::fromJsonValue(m_variant_id, json[QString("variant_id")]);
    m_variant_id_isSet = !json[QString("variant_id")].isNull() && m_variant_id_isValid;

    m_sku_isValid = ::OpenAPI::fromJsonValue(m_sku, json[QString("sku")]);
    m_sku_isSet = !json[QString("sku")].isNull() && m_sku_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_price_isValid = ::OpenAPI::fromJsonValue(m_price, json[QString("price")]);
    m_price_isSet = !json[QString("price")].isNull() && m_price_isValid;

    m_tax_isValid = ::OpenAPI::fromJsonValue(m_tax, json[QString("tax")]);
    m_tax_isSet = !json[QString("tax")].isNull() && m_tax_isValid;

    m_quantity_isValid = ::OpenAPI::fromJsonValue(m_quantity, json[QString("quantity")]);
    m_quantity_isSet = !json[QString("quantity")].isNull() && m_quantity_isValid;

    m_weight_unit_isValid = ::OpenAPI::fromJsonValue(m_weight_unit, json[QString("weight_unit")]);
    m_weight_unit_isSet = !json[QString("weight_unit")].isNull() && m_weight_unit_isValid;

    m_weight_isValid = ::OpenAPI::fromJsonValue(m_weight, json[QString("weight")]);
    m_weight_isSet = !json[QString("weight")].isNull() && m_weight_isValid;

    m_options_isValid = ::OpenAPI::fromJsonValue(m_options, json[QString("options")]);
    m_options_isSet = !json[QString("options")].isNull() && m_options_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIBasket_Item::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBasket_Item::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_parent_id_isSet) {
        obj.insert(QString("parent_id"), ::OpenAPI::toJsonValue(m_parent_id));
    }
    if (m_product_id_isSet) {
        obj.insert(QString("product_id"), ::OpenAPI::toJsonValue(m_product_id));
    }
    if (m_variant_id_isSet) {
        obj.insert(QString("variant_id"), ::OpenAPI::toJsonValue(m_variant_id));
    }
    if (m_sku_isSet) {
        obj.insert(QString("sku"), ::OpenAPI::toJsonValue(m_sku));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_price_isSet) {
        obj.insert(QString("price"), ::OpenAPI::toJsonValue(m_price));
    }
    if (m_tax_isSet) {
        obj.insert(QString("tax"), ::OpenAPI::toJsonValue(m_tax));
    }
    if (m_quantity_isSet) {
        obj.insert(QString("quantity"), ::OpenAPI::toJsonValue(m_quantity));
    }
    if (m_weight_unit_isSet) {
        obj.insert(QString("weight_unit"), ::OpenAPI::toJsonValue(m_weight_unit));
    }
    if (m_weight_isSet) {
        obj.insert(QString("weight"), ::OpenAPI::toJsonValue(m_weight));
    }
    if (m_options.size() > 0) {
        obj.insert(QString("options"), ::OpenAPI::toJsonValue(m_options));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIBasket_Item::getId() const {
    return m_id;
}
void OAIBasket_Item::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIBasket_Item::is_id_Set() const{
    return m_id_isSet;
}

bool OAIBasket_Item::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIBasket_Item::getParentId() const {
    return m_parent_id;
}
void OAIBasket_Item::setParentId(const QString &parent_id) {
    m_parent_id = parent_id;
    m_parent_id_isSet = true;
}

bool OAIBasket_Item::is_parent_id_Set() const{
    return m_parent_id_isSet;
}

bool OAIBasket_Item::is_parent_id_Valid() const{
    return m_parent_id_isValid;
}

QString OAIBasket_Item::getProductId() const {
    return m_product_id;
}
void OAIBasket_Item::setProductId(const QString &product_id) {
    m_product_id = product_id;
    m_product_id_isSet = true;
}

bool OAIBasket_Item::is_product_id_Set() const{
    return m_product_id_isSet;
}

bool OAIBasket_Item::is_product_id_Valid() const{
    return m_product_id_isValid;
}

QString OAIBasket_Item::getVariantId() const {
    return m_variant_id;
}
void OAIBasket_Item::setVariantId(const QString &variant_id) {
    m_variant_id = variant_id;
    m_variant_id_isSet = true;
}

bool OAIBasket_Item::is_variant_id_Set() const{
    return m_variant_id_isSet;
}

bool OAIBasket_Item::is_variant_id_Valid() const{
    return m_variant_id_isValid;
}

QString OAIBasket_Item::getSku() const {
    return m_sku;
}
void OAIBasket_Item::setSku(const QString &sku) {
    m_sku = sku;
    m_sku_isSet = true;
}

bool OAIBasket_Item::is_sku_Set() const{
    return m_sku_isSet;
}

bool OAIBasket_Item::is_sku_Valid() const{
    return m_sku_isValid;
}

QString OAIBasket_Item::getName() const {
    return m_name;
}
void OAIBasket_Item::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIBasket_Item::is_name_Set() const{
    return m_name_isSet;
}

bool OAIBasket_Item::is_name_Valid() const{
    return m_name_isValid;
}

double OAIBasket_Item::getPrice() const {
    return m_price;
}
void OAIBasket_Item::setPrice(const double &price) {
    m_price = price;
    m_price_isSet = true;
}

bool OAIBasket_Item::is_price_Set() const{
    return m_price_isSet;
}

bool OAIBasket_Item::is_price_Valid() const{
    return m_price_isValid;
}

double OAIBasket_Item::getTax() const {
    return m_tax;
}
void OAIBasket_Item::setTax(const double &tax) {
    m_tax = tax;
    m_tax_isSet = true;
}

bool OAIBasket_Item::is_tax_Set() const{
    return m_tax_isSet;
}

bool OAIBasket_Item::is_tax_Valid() const{
    return m_tax_isValid;
}

double OAIBasket_Item::getQuantity() const {
    return m_quantity;
}
void OAIBasket_Item::setQuantity(const double &quantity) {
    m_quantity = quantity;
    m_quantity_isSet = true;
}

bool OAIBasket_Item::is_quantity_Set() const{
    return m_quantity_isSet;
}

bool OAIBasket_Item::is_quantity_Valid() const{
    return m_quantity_isValid;
}

QString OAIBasket_Item::getWeightUnit() const {
    return m_weight_unit;
}
void OAIBasket_Item::setWeightUnit(const QString &weight_unit) {
    m_weight_unit = weight_unit;
    m_weight_unit_isSet = true;
}

bool OAIBasket_Item::is_weight_unit_Set() const{
    return m_weight_unit_isSet;
}

bool OAIBasket_Item::is_weight_unit_Valid() const{
    return m_weight_unit_isValid;
}

double OAIBasket_Item::getWeight() const {
    return m_weight;
}
void OAIBasket_Item::setWeight(const double &weight) {
    m_weight = weight;
    m_weight_isSet = true;
}

bool OAIBasket_Item::is_weight_Set() const{
    return m_weight_isSet;
}

bool OAIBasket_Item::is_weight_Valid() const{
    return m_weight_isValid;
}

QList<OAIBasket_Item_Option> OAIBasket_Item::getOptions() const {
    return m_options;
}
void OAIBasket_Item::setOptions(const QList<OAIBasket_Item_Option> &options) {
    m_options = options;
    m_options_isSet = true;
}

bool OAIBasket_Item::is_options_Set() const{
    return m_options_isSet;
}

bool OAIBasket_Item::is_options_Valid() const{
    return m_options_isValid;
}

OAIObject OAIBasket_Item::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIBasket_Item::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIBasket_Item::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIBasket_Item::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIBasket_Item::getCustomFields() const {
    return m_custom_fields;
}
void OAIBasket_Item::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIBasket_Item::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIBasket_Item::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIBasket_Item::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_parent_id_isSet) {
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

        if (m_sku_isSet) {
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

        if (m_tax_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quantity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_weight_unit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_weight_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_options.size() > 0) {
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

bool OAIBasket_Item::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
