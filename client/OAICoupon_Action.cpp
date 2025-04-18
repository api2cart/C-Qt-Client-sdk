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

#include "OAICoupon_Action.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICoupon_Action::OAICoupon_Action(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICoupon_Action::OAICoupon_Action() {
    this->initializeModel();
}

OAICoupon_Action::~OAICoupon_Action() {}

void OAICoupon_Action::initializeModel() {

    m_scope_isSet = false;
    m_scope_isValid = false;

    m_apply_to_isSet = false;
    m_apply_to_isValid = false;

    m_amount_isSet = false;
    m_amount_isValid = false;

    m_currency_code_isSet = false;
    m_currency_code_isValid = false;

    m_include_tax_isSet = false;
    m_include_tax_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_discounted_quantity_isSet = false;
    m_discounted_quantity_isValid = false;

    m_discount_quantity_step_isSet = false;
    m_discount_quantity_step_isValid = false;

    m_logic_operator_isSet = false;
    m_logic_operator_isValid = false;

    m_conditions_isSet = false;
    m_conditions_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAICoupon_Action::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICoupon_Action::fromJsonObject(QJsonObject json) {

    m_scope_isValid = ::OpenAPI::fromJsonValue(m_scope, json[QString("scope")]);
    m_scope_isSet = !json[QString("scope")].isNull() && m_scope_isValid;

    m_apply_to_isValid = ::OpenAPI::fromJsonValue(m_apply_to, json[QString("apply_to")]);
    m_apply_to_isSet = !json[QString("apply_to")].isNull() && m_apply_to_isValid;

    m_amount_isValid = ::OpenAPI::fromJsonValue(m_amount, json[QString("amount")]);
    m_amount_isSet = !json[QString("amount")].isNull() && m_amount_isValid;

    m_currency_code_isValid = ::OpenAPI::fromJsonValue(m_currency_code, json[QString("currency_code")]);
    m_currency_code_isSet = !json[QString("currency_code")].isNull() && m_currency_code_isValid;

    m_include_tax_isValid = ::OpenAPI::fromJsonValue(m_include_tax, json[QString("include_tax")]);
    m_include_tax_isSet = !json[QString("include_tax")].isNull() && m_include_tax_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_discounted_quantity_isValid = ::OpenAPI::fromJsonValue(m_discounted_quantity, json[QString("discounted_quantity")]);
    m_discounted_quantity_isSet = !json[QString("discounted_quantity")].isNull() && m_discounted_quantity_isValid;

    m_discount_quantity_step_isValid = ::OpenAPI::fromJsonValue(m_discount_quantity_step, json[QString("discount_quantity_step")]);
    m_discount_quantity_step_isSet = !json[QString("discount_quantity_step")].isNull() && m_discount_quantity_step_isValid;

    m_logic_operator_isValid = ::OpenAPI::fromJsonValue(m_logic_operator, json[QString("logic_operator")]);
    m_logic_operator_isSet = !json[QString("logic_operator")].isNull() && m_logic_operator_isValid;

    m_conditions_isValid = ::OpenAPI::fromJsonValue(m_conditions, json[QString("conditions")]);
    m_conditions_isSet = !json[QString("conditions")].isNull() && m_conditions_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAICoupon_Action::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICoupon_Action::asJsonObject() const {
    QJsonObject obj;
    if (m_scope_isSet) {
        obj.insert(QString("scope"), ::OpenAPI::toJsonValue(m_scope));
    }
    if (m_apply_to_isSet) {
        obj.insert(QString("apply_to"), ::OpenAPI::toJsonValue(m_apply_to));
    }
    if (m_amount_isSet) {
        obj.insert(QString("amount"), ::OpenAPI::toJsonValue(m_amount));
    }
    if (m_currency_code_isSet) {
        obj.insert(QString("currency_code"), ::OpenAPI::toJsonValue(m_currency_code));
    }
    if (m_include_tax_isSet) {
        obj.insert(QString("include_tax"), ::OpenAPI::toJsonValue(m_include_tax));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    if (m_discounted_quantity_isSet) {
        obj.insert(QString("discounted_quantity"), ::OpenAPI::toJsonValue(m_discounted_quantity));
    }
    if (m_discount_quantity_step_isSet) {
        obj.insert(QString("discount_quantity_step"), ::OpenAPI::toJsonValue(m_discount_quantity_step));
    }
    if (m_logic_operator_isSet) {
        obj.insert(QString("logic_operator"), ::OpenAPI::toJsonValue(m_logic_operator));
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

QString OAICoupon_Action::getScope() const {
    return m_scope;
}
void OAICoupon_Action::setScope(const QString &scope) {
    m_scope = scope;
    m_scope_isSet = true;
}

bool OAICoupon_Action::is_scope_Set() const{
    return m_scope_isSet;
}

bool OAICoupon_Action::is_scope_Valid() const{
    return m_scope_isValid;
}

QString OAICoupon_Action::getApplyTo() const {
    return m_apply_to;
}
void OAICoupon_Action::setApplyTo(const QString &apply_to) {
    m_apply_to = apply_to;
    m_apply_to_isSet = true;
}

bool OAICoupon_Action::is_apply_to_Set() const{
    return m_apply_to_isSet;
}

bool OAICoupon_Action::is_apply_to_Valid() const{
    return m_apply_to_isValid;
}

double OAICoupon_Action::getAmount() const {
    return m_amount;
}
void OAICoupon_Action::setAmount(const double &amount) {
    m_amount = amount;
    m_amount_isSet = true;
}

bool OAICoupon_Action::is_amount_Set() const{
    return m_amount_isSet;
}

bool OAICoupon_Action::is_amount_Valid() const{
    return m_amount_isValid;
}

QString OAICoupon_Action::getCurrencyCode() const {
    return m_currency_code;
}
void OAICoupon_Action::setCurrencyCode(const QString &currency_code) {
    m_currency_code = currency_code;
    m_currency_code_isSet = true;
}

bool OAICoupon_Action::is_currency_code_Set() const{
    return m_currency_code_isSet;
}

bool OAICoupon_Action::is_currency_code_Valid() const{
    return m_currency_code_isValid;
}

bool OAICoupon_Action::isIncludeTax() const {
    return m_include_tax;
}
void OAICoupon_Action::setIncludeTax(const bool &include_tax) {
    m_include_tax = include_tax;
    m_include_tax_isSet = true;
}

bool OAICoupon_Action::is_include_tax_Set() const{
    return m_include_tax_isSet;
}

bool OAICoupon_Action::is_include_tax_Valid() const{
    return m_include_tax_isValid;
}

QString OAICoupon_Action::getType() const {
    return m_type;
}
void OAICoupon_Action::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAICoupon_Action::is_type_Set() const{
    return m_type_isSet;
}

bool OAICoupon_Action::is_type_Valid() const{
    return m_type_isValid;
}

double OAICoupon_Action::getDiscountedQuantity() const {
    return m_discounted_quantity;
}
void OAICoupon_Action::setDiscountedQuantity(const double &discounted_quantity) {
    m_discounted_quantity = discounted_quantity;
    m_discounted_quantity_isSet = true;
}

bool OAICoupon_Action::is_discounted_quantity_Set() const{
    return m_discounted_quantity_isSet;
}

bool OAICoupon_Action::is_discounted_quantity_Valid() const{
    return m_discounted_quantity_isValid;
}

qint32 OAICoupon_Action::getDiscountQuantityStep() const {
    return m_discount_quantity_step;
}
void OAICoupon_Action::setDiscountQuantityStep(const qint32 &discount_quantity_step) {
    m_discount_quantity_step = discount_quantity_step;
    m_discount_quantity_step_isSet = true;
}

bool OAICoupon_Action::is_discount_quantity_step_Set() const{
    return m_discount_quantity_step_isSet;
}

bool OAICoupon_Action::is_discount_quantity_step_Valid() const{
    return m_discount_quantity_step_isValid;
}

QString OAICoupon_Action::getLogicOperator() const {
    return m_logic_operator;
}
void OAICoupon_Action::setLogicOperator(const QString &logic_operator) {
    m_logic_operator = logic_operator;
    m_logic_operator_isSet = true;
}

bool OAICoupon_Action::is_logic_operator_Set() const{
    return m_logic_operator_isSet;
}

bool OAICoupon_Action::is_logic_operator_Valid() const{
    return m_logic_operator_isValid;
}

QList<OAICoupon_Condition> OAICoupon_Action::getConditions() const {
    return m_conditions;
}
void OAICoupon_Action::setConditions(const QList<OAICoupon_Condition> &conditions) {
    m_conditions = conditions;
    m_conditions_isSet = true;
}

bool OAICoupon_Action::is_conditions_Set() const{
    return m_conditions_isSet;
}

bool OAICoupon_Action::is_conditions_Valid() const{
    return m_conditions_isValid;
}

OAIObject OAICoupon_Action::getAdditionalFields() const {
    return m_additional_fields;
}
void OAICoupon_Action::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAICoupon_Action::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAICoupon_Action::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAICoupon_Action::getCustomFields() const {
    return m_custom_fields;
}
void OAICoupon_Action::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAICoupon_Action::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAICoupon_Action::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAICoupon_Action::isSet() const {
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

        if (m_amount_isSet) {
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

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_discounted_quantity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_discount_quantity_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_logic_operator_isSet) {
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

bool OAICoupon_Action::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
