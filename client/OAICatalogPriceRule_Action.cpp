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

#include "OAICatalogPriceRule_Action.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogPriceRule_Action::OAICatalogPriceRule_Action(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogPriceRule_Action::OAICatalogPriceRule_Action() {
    this->initializeModel();
}

OAICatalogPriceRule_Action::~OAICatalogPriceRule_Action() {}

void OAICatalogPriceRule_Action::initializeModel() {

    m_scope_isSet = false;
    m_scope_isValid = false;

    m_apply_to_isSet = false;
    m_apply_to_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_quantity_isSet = false;
    m_quantity_isValid = false;

    m_value_isSet = false;
    m_value_isValid = false;

    m_currency_code_isSet = false;
    m_currency_code_isValid = false;

    m_include_tax_isSet = false;
    m_include_tax_isValid = false;

    m_conditions_isSet = false;
    m_conditions_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAICatalogPriceRule_Action::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogPriceRule_Action::fromJsonObject(QJsonObject json) {

    m_scope_isValid = ::OpenAPI::fromJsonValue(m_scope, json[QString("scope")]);
    m_scope_isSet = !json[QString("scope")].isNull() && m_scope_isValid;

    m_apply_to_isValid = ::OpenAPI::fromJsonValue(m_apply_to, json[QString("apply_to")]);
    m_apply_to_isSet = !json[QString("apply_to")].isNull() && m_apply_to_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_quantity_isValid = ::OpenAPI::fromJsonValue(m_quantity, json[QString("quantity")]);
    m_quantity_isSet = !json[QString("quantity")].isNull() && m_quantity_isValid;

    m_value_isValid = ::OpenAPI::fromJsonValue(m_value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;

    m_currency_code_isValid = ::OpenAPI::fromJsonValue(m_currency_code, json[QString("currency_code")]);
    m_currency_code_isSet = !json[QString("currency_code")].isNull() && m_currency_code_isValid;

    m_include_tax_isValid = ::OpenAPI::fromJsonValue(m_include_tax, json[QString("include_tax")]);
    m_include_tax_isSet = !json[QString("include_tax")].isNull() && m_include_tax_isValid;

    m_conditions_isValid = ::OpenAPI::fromJsonValue(m_conditions, json[QString("conditions")]);
    m_conditions_isSet = !json[QString("conditions")].isNull() && m_conditions_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAICatalogPriceRule_Action::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogPriceRule_Action::asJsonObject() const {
    QJsonObject obj;
    if (m_scope_isSet) {
        obj.insert(QString("scope"), ::OpenAPI::toJsonValue(m_scope));
    }
    if (m_apply_to_isSet) {
        obj.insert(QString("apply_to"), ::OpenAPI::toJsonValue(m_apply_to));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    if (m_quantity_isSet) {
        obj.insert(QString("quantity"), ::OpenAPI::toJsonValue(m_quantity));
    }
    if (m_value_isSet) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(m_value));
    }
    if (m_currency_code_isSet) {
        obj.insert(QString("currency_code"), ::OpenAPI::toJsonValue(m_currency_code));
    }
    if (m_include_tax_isSet) {
        obj.insert(QString("include_tax"), ::OpenAPI::toJsonValue(m_include_tax));
    }
    if (m_conditions.size() > 0) {
        obj.insert(QString("conditions"), ::OpenAPI::toJsonValue(m_conditions));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAICatalogPriceRule_Action::getScope() const {
    return m_scope;
}
void OAICatalogPriceRule_Action::setScope(const QString &scope) {
    m_scope = scope;
    m_scope_isSet = true;
}

bool OAICatalogPriceRule_Action::is_scope_Set() const{
    return m_scope_isSet;
}

bool OAICatalogPriceRule_Action::is_scope_Valid() const{
    return m_scope_isValid;
}

QString OAICatalogPriceRule_Action::getApplyTo() const {
    return m_apply_to;
}
void OAICatalogPriceRule_Action::setApplyTo(const QString &apply_to) {
    m_apply_to = apply_to;
    m_apply_to_isSet = true;
}

bool OAICatalogPriceRule_Action::is_apply_to_Set() const{
    return m_apply_to_isSet;
}

bool OAICatalogPriceRule_Action::is_apply_to_Valid() const{
    return m_apply_to_isValid;
}

QString OAICatalogPriceRule_Action::getType() const {
    return m_type;
}
void OAICatalogPriceRule_Action::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAICatalogPriceRule_Action::is_type_Set() const{
    return m_type_isSet;
}

bool OAICatalogPriceRule_Action::is_type_Valid() const{
    return m_type_isValid;
}

double OAICatalogPriceRule_Action::getQuantity() const {
    return m_quantity;
}
void OAICatalogPriceRule_Action::setQuantity(const double &quantity) {
    m_quantity = quantity;
    m_quantity_isSet = true;
}

bool OAICatalogPriceRule_Action::is_quantity_Set() const{
    return m_quantity_isSet;
}

bool OAICatalogPriceRule_Action::is_quantity_Valid() const{
    return m_quantity_isValid;
}

double OAICatalogPriceRule_Action::getValue() const {
    return m_value;
}
void OAICatalogPriceRule_Action::setValue(const double &value) {
    m_value = value;
    m_value_isSet = true;
}

bool OAICatalogPriceRule_Action::is_value_Set() const{
    return m_value_isSet;
}

bool OAICatalogPriceRule_Action::is_value_Valid() const{
    return m_value_isValid;
}

QString OAICatalogPriceRule_Action::getCurrencyCode() const {
    return m_currency_code;
}
void OAICatalogPriceRule_Action::setCurrencyCode(const QString &currency_code) {
    m_currency_code = currency_code;
    m_currency_code_isSet = true;
}

bool OAICatalogPriceRule_Action::is_currency_code_Set() const{
    return m_currency_code_isSet;
}

bool OAICatalogPriceRule_Action::is_currency_code_Valid() const{
    return m_currency_code_isValid;
}

bool OAICatalogPriceRule_Action::isIncludeTax() const {
    return m_include_tax;
}
void OAICatalogPriceRule_Action::setIncludeTax(const bool &include_tax) {
    m_include_tax = include_tax;
    m_include_tax_isSet = true;
}

bool OAICatalogPriceRule_Action::is_include_tax_Set() const{
    return m_include_tax_isSet;
}

bool OAICatalogPriceRule_Action::is_include_tax_Valid() const{
    return m_include_tax_isValid;
}

QList<OAICoupon_Condition> OAICatalogPriceRule_Action::getConditions() const {
    return m_conditions;
}
void OAICatalogPriceRule_Action::setConditions(const QList<OAICoupon_Condition> &conditions) {
    m_conditions = conditions;
    m_conditions_isSet = true;
}

bool OAICatalogPriceRule_Action::is_conditions_Set() const{
    return m_conditions_isSet;
}

bool OAICatalogPriceRule_Action::is_conditions_Valid() const{
    return m_conditions_isValid;
}

OAIObject OAICatalogPriceRule_Action::getAdditionalFields() const {
    return m_additional_fields;
}
void OAICatalogPriceRule_Action::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAICatalogPriceRule_Action::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAICatalogPriceRule_Action::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAICatalogPriceRule_Action::getCustomFields() const {
    return m_custom_fields;
}
void OAICatalogPriceRule_Action::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAICatalogPriceRule_Action::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAICatalogPriceRule_Action::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAICatalogPriceRule_Action::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_scope_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_apply_to_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quantity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_currency_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_include_tax_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_conditions.size() > 0) {
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

bool OAICatalogPriceRule_Action::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
