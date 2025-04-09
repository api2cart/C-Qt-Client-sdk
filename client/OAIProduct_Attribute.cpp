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

#include "OAIProduct_Attribute.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProduct_Attribute::OAIProduct_Attribute(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProduct_Attribute::OAIProduct_Attribute() {
    this->initializeModel();
}

OAIProduct_Attribute::~OAIProduct_Attribute() {}

void OAIProduct_Attribute::initializeModel() {

    m_attribute_id_isSet = false;
    m_attribute_id_isValid = false;

    m_code_isSet = false;
    m_code_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_lang_id_isSet = false;
    m_lang_id_isValid = false;

    m_store_id_isSet = false;
    m_store_id_isValid = false;

    m_value_isSet = false;
    m_value_isValid = false;

    m_required_isSet = false;
    m_required_isValid = false;

    m_visible_isSet = false;
    m_visible_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_position_isSet = false;
    m_position_isValid = false;

    m_attribute_group_id_isSet = false;
    m_attribute_group_id_isValid = false;

    m_product_id_isSet = false;
    m_product_id_isValid = false;

    m_variant_id_isSet = false;
    m_variant_id_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIProduct_Attribute::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProduct_Attribute::fromJsonObject(QJsonObject json) {

    m_attribute_id_isValid = ::OpenAPI::fromJsonValue(m_attribute_id, json[QString("attribute_id")]);
    m_attribute_id_isSet = !json[QString("attribute_id")].isNull() && m_attribute_id_isValid;

    m_code_isValid = ::OpenAPI::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_lang_id_isValid = ::OpenAPI::fromJsonValue(m_lang_id, json[QString("lang_id")]);
    m_lang_id_isSet = !json[QString("lang_id")].isNull() && m_lang_id_isValid;

    m_store_id_isValid = ::OpenAPI::fromJsonValue(m_store_id, json[QString("store_id")]);
    m_store_id_isSet = !json[QString("store_id")].isNull() && m_store_id_isValid;

    m_value_isValid = ::OpenAPI::fromJsonValue(m_value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;

    m_required_isValid = ::OpenAPI::fromJsonValue(m_required, json[QString("required")]);
    m_required_isSet = !json[QString("required")].isNull() && m_required_isValid;

    m_visible_isValid = ::OpenAPI::fromJsonValue(m_visible, json[QString("visible")]);
    m_visible_isSet = !json[QString("visible")].isNull() && m_visible_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_position_isValid = ::OpenAPI::fromJsonValue(m_position, json[QString("position")]);
    m_position_isSet = !json[QString("position")].isNull() && m_position_isValid;

    m_attribute_group_id_isValid = ::OpenAPI::fromJsonValue(m_attribute_group_id, json[QString("attribute_group_id")]);
    m_attribute_group_id_isSet = !json[QString("attribute_group_id")].isNull() && m_attribute_group_id_isValid;

    m_product_id_isValid = ::OpenAPI::fromJsonValue(m_product_id, json[QString("product_id")]);
    m_product_id_isSet = !json[QString("product_id")].isNull() && m_product_id_isValid;

    m_variant_id_isValid = ::OpenAPI::fromJsonValue(m_variant_id, json[QString("variant_id")]);
    m_variant_id_isSet = !json[QString("variant_id")].isNull() && m_variant_id_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIProduct_Attribute::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProduct_Attribute::asJsonObject() const {
    QJsonObject obj;
    if (m_attribute_id_isSet) {
        obj.insert(QString("attribute_id"), ::OpenAPI::toJsonValue(m_attribute_id));
    }
    if (m_code_isSet) {
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(m_code));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_lang_id_isSet) {
        obj.insert(QString("lang_id"), ::OpenAPI::toJsonValue(m_lang_id));
    }
    if (m_store_id_isSet) {
        obj.insert(QString("store_id"), ::OpenAPI::toJsonValue(m_store_id));
    }
    if (m_value_isSet) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(m_value));
    }
    if (m_required_isSet) {
        obj.insert(QString("required"), ::OpenAPI::toJsonValue(m_required));
    }
    if (m_visible_isSet) {
        obj.insert(QString("visible"), ::OpenAPI::toJsonValue(m_visible));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    if (m_position_isSet) {
        obj.insert(QString("position"), ::OpenAPI::toJsonValue(m_position));
    }
    if (m_attribute_group_id_isSet) {
        obj.insert(QString("attribute_group_id"), ::OpenAPI::toJsonValue(m_attribute_group_id));
    }
    if (m_product_id_isSet) {
        obj.insert(QString("product_id"), ::OpenAPI::toJsonValue(m_product_id));
    }
    if (m_variant_id_isSet) {
        obj.insert(QString("variant_id"), ::OpenAPI::toJsonValue(m_variant_id));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIProduct_Attribute::getAttributeId() const {
    return m_attribute_id;
}
void OAIProduct_Attribute::setAttributeId(const QString &attribute_id) {
    m_attribute_id = attribute_id;
    m_attribute_id_isSet = true;
}

bool OAIProduct_Attribute::is_attribute_id_Set() const{
    return m_attribute_id_isSet;
}

bool OAIProduct_Attribute::is_attribute_id_Valid() const{
    return m_attribute_id_isValid;
}

QString OAIProduct_Attribute::getCode() const {
    return m_code;
}
void OAIProduct_Attribute::setCode(const QString &code) {
    m_code = code;
    m_code_isSet = true;
}

bool OAIProduct_Attribute::is_code_Set() const{
    return m_code_isSet;
}

bool OAIProduct_Attribute::is_code_Valid() const{
    return m_code_isValid;
}

QString OAIProduct_Attribute::getName() const {
    return m_name;
}
void OAIProduct_Attribute::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIProduct_Attribute::is_name_Set() const{
    return m_name_isSet;
}

bool OAIProduct_Attribute::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIProduct_Attribute::getLangId() const {
    return m_lang_id;
}
void OAIProduct_Attribute::setLangId(const QString &lang_id) {
    m_lang_id = lang_id;
    m_lang_id_isSet = true;
}

bool OAIProduct_Attribute::is_lang_id_Set() const{
    return m_lang_id_isSet;
}

bool OAIProduct_Attribute::is_lang_id_Valid() const{
    return m_lang_id_isValid;
}

QString OAIProduct_Attribute::getStoreId() const {
    return m_store_id;
}
void OAIProduct_Attribute::setStoreId(const QString &store_id) {
    m_store_id = store_id;
    m_store_id_isSet = true;
}

bool OAIProduct_Attribute::is_store_id_Set() const{
    return m_store_id_isSet;
}

bool OAIProduct_Attribute::is_store_id_Valid() const{
    return m_store_id_isValid;
}

QString OAIProduct_Attribute::getValue() const {
    return m_value;
}
void OAIProduct_Attribute::setValue(const QString &value) {
    m_value = value;
    m_value_isSet = true;
}

bool OAIProduct_Attribute::is_value_Set() const{
    return m_value_isSet;
}

bool OAIProduct_Attribute::is_value_Valid() const{
    return m_value_isValid;
}

bool OAIProduct_Attribute::isRequired() const {
    return m_required;
}
void OAIProduct_Attribute::setRequired(const bool &required) {
    m_required = required;
    m_required_isSet = true;
}

bool OAIProduct_Attribute::is_required_Set() const{
    return m_required_isSet;
}

bool OAIProduct_Attribute::is_required_Valid() const{
    return m_required_isValid;
}

bool OAIProduct_Attribute::isVisible() const {
    return m_visible;
}
void OAIProduct_Attribute::setVisible(const bool &visible) {
    m_visible = visible;
    m_visible_isSet = true;
}

bool OAIProduct_Attribute::is_visible_Set() const{
    return m_visible_isSet;
}

bool OAIProduct_Attribute::is_visible_Valid() const{
    return m_visible_isValid;
}

QString OAIProduct_Attribute::getType() const {
    return m_type;
}
void OAIProduct_Attribute::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIProduct_Attribute::is_type_Set() const{
    return m_type_isSet;
}

bool OAIProduct_Attribute::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIProduct_Attribute::getPosition() const {
    return m_position;
}
void OAIProduct_Attribute::setPosition(const qint32 &position) {
    m_position = position;
    m_position_isSet = true;
}

bool OAIProduct_Attribute::is_position_Set() const{
    return m_position_isSet;
}

bool OAIProduct_Attribute::is_position_Valid() const{
    return m_position_isValid;
}

QString OAIProduct_Attribute::getAttributeGroupId() const {
    return m_attribute_group_id;
}
void OAIProduct_Attribute::setAttributeGroupId(const QString &attribute_group_id) {
    m_attribute_group_id = attribute_group_id;
    m_attribute_group_id_isSet = true;
}

bool OAIProduct_Attribute::is_attribute_group_id_Set() const{
    return m_attribute_group_id_isSet;
}

bool OAIProduct_Attribute::is_attribute_group_id_Valid() const{
    return m_attribute_group_id_isValid;
}

QString OAIProduct_Attribute::getProductId() const {
    return m_product_id;
}
void OAIProduct_Attribute::setProductId(const QString &product_id) {
    m_product_id = product_id;
    m_product_id_isSet = true;
}

bool OAIProduct_Attribute::is_product_id_Set() const{
    return m_product_id_isSet;
}

bool OAIProduct_Attribute::is_product_id_Valid() const{
    return m_product_id_isValid;
}

QString OAIProduct_Attribute::getVariantId() const {
    return m_variant_id;
}
void OAIProduct_Attribute::setVariantId(const QString &variant_id) {
    m_variant_id = variant_id;
    m_variant_id_isSet = true;
}

bool OAIProduct_Attribute::is_variant_id_Set() const{
    return m_variant_id_isSet;
}

bool OAIProduct_Attribute::is_variant_id_Valid() const{
    return m_variant_id_isValid;
}

OAIObject OAIProduct_Attribute::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIProduct_Attribute::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIProduct_Attribute::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIProduct_Attribute::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIProduct_Attribute::getCustomFields() const {
    return m_custom_fields;
}
void OAIProduct_Attribute::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIProduct_Attribute::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIProduct_Attribute::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIProduct_Attribute::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_attribute_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lang_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_store_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_required_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_visible_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_position_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_attribute_group_id_isSet) {
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

bool OAIProduct_Attribute::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
