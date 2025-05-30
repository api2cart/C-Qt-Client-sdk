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

#include "OAIProduct_Option.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProduct_Option::OAIProduct_Option(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProduct_Option::OAIProduct_Option() {
    this->initializeModel();
}

OAIProduct_Option::~OAIProduct_Option() {}

void OAIProduct_Option::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_product_option_id_isSet = false;
    m_product_option_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_sort_order_isSet = false;
    m_sort_order_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_required_isSet = false;
    m_required_isValid = false;

    m_available_isSet = false;
    m_available_isValid = false;

    m_used_in_combination_isSet = false;
    m_used_in_combination_isValid = false;

    m_option_items_isSet = false;
    m_option_items_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIProduct_Option::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProduct_Option::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_product_option_id_isValid = ::OpenAPI::fromJsonValue(m_product_option_id, json[QString("product_option_id")]);
    m_product_option_id_isSet = !json[QString("product_option_id")].isNull() && m_product_option_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_sort_order_isValid = ::OpenAPI::fromJsonValue(m_sort_order, json[QString("sort_order")]);
    m_sort_order_isSet = !json[QString("sort_order")].isNull() && m_sort_order_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_required_isValid = ::OpenAPI::fromJsonValue(m_required, json[QString("required")]);
    m_required_isSet = !json[QString("required")].isNull() && m_required_isValid;

    m_available_isValid = ::OpenAPI::fromJsonValue(m_available, json[QString("available")]);
    m_available_isSet = !json[QString("available")].isNull() && m_available_isValid;

    m_used_in_combination_isValid = ::OpenAPI::fromJsonValue(m_used_in_combination, json[QString("used_in_combination")]);
    m_used_in_combination_isSet = !json[QString("used_in_combination")].isNull() && m_used_in_combination_isValid;

    m_option_items_isValid = ::OpenAPI::fromJsonValue(m_option_items, json[QString("option_items")]);
    m_option_items_isSet = !json[QString("option_items")].isNull() && m_option_items_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIProduct_Option::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProduct_Option::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_product_option_id_isSet) {
        obj.insert(QString("product_option_id"), ::OpenAPI::toJsonValue(m_product_option_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(m_description));
    }
    if (m_sort_order_isSet) {
        obj.insert(QString("sort_order"), ::OpenAPI::toJsonValue(m_sort_order));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    if (m_required_isSet) {
        obj.insert(QString("required"), ::OpenAPI::toJsonValue(m_required));
    }
    if (m_available_isSet) {
        obj.insert(QString("available"), ::OpenAPI::toJsonValue(m_available));
    }
    if (m_used_in_combination_isSet) {
        obj.insert(QString("used_in_combination"), ::OpenAPI::toJsonValue(m_used_in_combination));
    }
    if (m_option_items.size() > 0) {
        obj.insert(QString("option_items"), ::OpenAPI::toJsonValue(m_option_items));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIProduct_Option::getId() const {
    return m_id;
}
void OAIProduct_Option::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIProduct_Option::is_id_Set() const{
    return m_id_isSet;
}

bool OAIProduct_Option::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIProduct_Option::getProductOptionId() const {
    return m_product_option_id;
}
void OAIProduct_Option::setProductOptionId(const QString &product_option_id) {
    m_product_option_id = product_option_id;
    m_product_option_id_isSet = true;
}

bool OAIProduct_Option::is_product_option_id_Set() const{
    return m_product_option_id_isSet;
}

bool OAIProduct_Option::is_product_option_id_Valid() const{
    return m_product_option_id_isValid;
}

QString OAIProduct_Option::getName() const {
    return m_name;
}
void OAIProduct_Option::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIProduct_Option::is_name_Set() const{
    return m_name_isSet;
}

bool OAIProduct_Option::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIProduct_Option::getDescription() const {
    return m_description;
}
void OAIProduct_Option::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIProduct_Option::is_description_Set() const{
    return m_description_isSet;
}

bool OAIProduct_Option::is_description_Valid() const{
    return m_description_isValid;
}

qint32 OAIProduct_Option::getSortOrder() const {
    return m_sort_order;
}
void OAIProduct_Option::setSortOrder(const qint32 &sort_order) {
    m_sort_order = sort_order;
    m_sort_order_isSet = true;
}

bool OAIProduct_Option::is_sort_order_Set() const{
    return m_sort_order_isSet;
}

bool OAIProduct_Option::is_sort_order_Valid() const{
    return m_sort_order_isValid;
}

QString OAIProduct_Option::getType() const {
    return m_type;
}
void OAIProduct_Option::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIProduct_Option::is_type_Set() const{
    return m_type_isSet;
}

bool OAIProduct_Option::is_type_Valid() const{
    return m_type_isValid;
}

bool OAIProduct_Option::isRequired() const {
    return m_required;
}
void OAIProduct_Option::setRequired(const bool &required) {
    m_required = required;
    m_required_isSet = true;
}

bool OAIProduct_Option::is_required_Set() const{
    return m_required_isSet;
}

bool OAIProduct_Option::is_required_Valid() const{
    return m_required_isValid;
}

bool OAIProduct_Option::isAvailable() const {
    return m_available;
}
void OAIProduct_Option::setAvailable(const bool &available) {
    m_available = available;
    m_available_isSet = true;
}

bool OAIProduct_Option::is_available_Set() const{
    return m_available_isSet;
}

bool OAIProduct_Option::is_available_Valid() const{
    return m_available_isValid;
}

bool OAIProduct_Option::isUsedInCombination() const {
    return m_used_in_combination;
}
void OAIProduct_Option::setUsedInCombination(const bool &used_in_combination) {
    m_used_in_combination = used_in_combination;
    m_used_in_combination_isSet = true;
}

bool OAIProduct_Option::is_used_in_combination_Set() const{
    return m_used_in_combination_isSet;
}

bool OAIProduct_Option::is_used_in_combination_Valid() const{
    return m_used_in_combination_isValid;
}

QList<OAIProduct_Option_Item> OAIProduct_Option::getOptionItems() const {
    return m_option_items;
}
void OAIProduct_Option::setOptionItems(const QList<OAIProduct_Option_Item> &option_items) {
    m_option_items = option_items;
    m_option_items_isSet = true;
}

bool OAIProduct_Option::is_option_items_Set() const{
    return m_option_items_isSet;
}

bool OAIProduct_Option::is_option_items_Valid() const{
    return m_option_items_isValid;
}

OAIObject OAIProduct_Option::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIProduct_Option::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIProduct_Option::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIProduct_Option::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIProduct_Option::getCustomFields() const {
    return m_custom_fields;
}
void OAIProduct_Option::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIProduct_Option::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIProduct_Option::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIProduct_Option::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_product_option_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sort_order_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_required_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_available_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_used_in_combination_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_option_items.size() > 0) {
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

bool OAIProduct_Option::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
