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

#include "OAICartCouponAdd.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICartCouponAdd::OAICartCouponAdd(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICartCouponAdd::OAICartCouponAdd() {
    this->initializeModel();
}

OAICartCouponAdd::~OAICartCouponAdd() {}

void OAICartCouponAdd::initializeModel() {

    m_store_id_isSet = false;
    m_store_id_isValid = false;

    m_code_isSet = false;
    m_code_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_codes_isSet = false;
    m_codes_isValid = false;

    m_action_type_isSet = false;
    m_action_type_isValid = false;

    m_action_apply_to_isSet = false;
    m_action_apply_to_isValid = false;

    m_action_scope_isSet = false;
    m_action_scope_isValid = false;

    m_action_amount_isSet = false;
    m_action_amount_isValid = false;

    m_date_start_isSet = false;
    m_date_start_isValid = false;

    m_date_end_isSet = false;
    m_date_end_isValid = false;

    m_usage_limit_isSet = false;
    m_usage_limit_isValid = false;

    m_usage_limit_per_customer_isSet = false;
    m_usage_limit_per_customer_isValid = false;

    m_action_condition_entity_isSet = false;
    m_action_condition_entity_isValid = false;

    m_action_condition_key_isSet = false;
    m_action_condition_key_isValid = false;

    m_action_condition_operator_isSet = false;
    m_action_condition_operator_isValid = false;

    m_action_condition_value_isSet = false;
    m_action_condition_value_isValid = false;

    m_include_tax_isSet = false;
    m_include_tax_isValid = false;
}

void OAICartCouponAdd::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICartCouponAdd::fromJsonObject(QJsonObject json) {

    m_store_id_isValid = ::OpenAPI::fromJsonValue(m_store_id, json[QString("store_id")]);
    m_store_id_isSet = !json[QString("store_id")].isNull() && m_store_id_isValid;

    m_code_isValid = ::OpenAPI::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_codes_isValid = ::OpenAPI::fromJsonValue(m_codes, json[QString("codes")]);
    m_codes_isSet = !json[QString("codes")].isNull() && m_codes_isValid;

    m_action_type_isValid = ::OpenAPI::fromJsonValue(m_action_type, json[QString("action_type")]);
    m_action_type_isSet = !json[QString("action_type")].isNull() && m_action_type_isValid;

    m_action_apply_to_isValid = ::OpenAPI::fromJsonValue(m_action_apply_to, json[QString("action_apply_to")]);
    m_action_apply_to_isSet = !json[QString("action_apply_to")].isNull() && m_action_apply_to_isValid;

    m_action_scope_isValid = ::OpenAPI::fromJsonValue(m_action_scope, json[QString("action_scope")]);
    m_action_scope_isSet = !json[QString("action_scope")].isNull() && m_action_scope_isValid;

    m_action_amount_isValid = ::OpenAPI::fromJsonValue(m_action_amount, json[QString("action_amount")]);
    m_action_amount_isSet = !json[QString("action_amount")].isNull() && m_action_amount_isValid;

    m_date_start_isValid = ::OpenAPI::fromJsonValue(m_date_start, json[QString("date_start")]);
    m_date_start_isSet = !json[QString("date_start")].isNull() && m_date_start_isValid;

    m_date_end_isValid = ::OpenAPI::fromJsonValue(m_date_end, json[QString("date_end")]);
    m_date_end_isSet = !json[QString("date_end")].isNull() && m_date_end_isValid;

    m_usage_limit_isValid = ::OpenAPI::fromJsonValue(m_usage_limit, json[QString("usage_limit")]);
    m_usage_limit_isSet = !json[QString("usage_limit")].isNull() && m_usage_limit_isValid;

    m_usage_limit_per_customer_isValid = ::OpenAPI::fromJsonValue(m_usage_limit_per_customer, json[QString("usage_limit_per_customer")]);
    m_usage_limit_per_customer_isSet = !json[QString("usage_limit_per_customer")].isNull() && m_usage_limit_per_customer_isValid;

    m_action_condition_entity_isValid = ::OpenAPI::fromJsonValue(m_action_condition_entity, json[QString("action_condition_entity")]);
    m_action_condition_entity_isSet = !json[QString("action_condition_entity")].isNull() && m_action_condition_entity_isValid;

    m_action_condition_key_isValid = ::OpenAPI::fromJsonValue(m_action_condition_key, json[QString("action_condition_key")]);
    m_action_condition_key_isSet = !json[QString("action_condition_key")].isNull() && m_action_condition_key_isValid;

    m_action_condition_operator_isValid = ::OpenAPI::fromJsonValue(m_action_condition_operator, json[QString("action_condition_operator")]);
    m_action_condition_operator_isSet = !json[QString("action_condition_operator")].isNull() && m_action_condition_operator_isValid;

    m_action_condition_value_isValid = ::OpenAPI::fromJsonValue(m_action_condition_value, json[QString("action_condition_value")]);
    m_action_condition_value_isSet = !json[QString("action_condition_value")].isNull() && m_action_condition_value_isValid;

    m_include_tax_isValid = ::OpenAPI::fromJsonValue(m_include_tax, json[QString("include_tax")]);
    m_include_tax_isSet = !json[QString("include_tax")].isNull() && m_include_tax_isValid;
}

QString OAICartCouponAdd::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICartCouponAdd::asJsonObject() const {
    QJsonObject obj;
    if (m_store_id_isSet) {
        obj.insert(QString("store_id"), ::OpenAPI::toJsonValue(m_store_id));
    }
    if (m_code_isSet) {
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(m_code));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_codes.size() > 0) {
        obj.insert(QString("codes"), ::OpenAPI::toJsonValue(m_codes));
    }
    if (m_action_type_isSet) {
        obj.insert(QString("action_type"), ::OpenAPI::toJsonValue(m_action_type));
    }
    if (m_action_apply_to_isSet) {
        obj.insert(QString("action_apply_to"), ::OpenAPI::toJsonValue(m_action_apply_to));
    }
    if (m_action_scope_isSet) {
        obj.insert(QString("action_scope"), ::OpenAPI::toJsonValue(m_action_scope));
    }
    if (m_action_amount_isSet) {
        obj.insert(QString("action_amount"), ::OpenAPI::toJsonValue(m_action_amount));
    }
    if (m_date_start_isSet) {
        obj.insert(QString("date_start"), ::OpenAPI::toJsonValue(m_date_start));
    }
    if (m_date_end_isSet) {
        obj.insert(QString("date_end"), ::OpenAPI::toJsonValue(m_date_end));
    }
    if (m_usage_limit_isSet) {
        obj.insert(QString("usage_limit"), ::OpenAPI::toJsonValue(m_usage_limit));
    }
    if (m_usage_limit_per_customer_isSet) {
        obj.insert(QString("usage_limit_per_customer"), ::OpenAPI::toJsonValue(m_usage_limit_per_customer));
    }
    if (m_action_condition_entity_isSet) {
        obj.insert(QString("action_condition_entity"), ::OpenAPI::toJsonValue(m_action_condition_entity));
    }
    if (m_action_condition_key_isSet) {
        obj.insert(QString("action_condition_key"), ::OpenAPI::toJsonValue(m_action_condition_key));
    }
    if (m_action_condition_operator_isSet) {
        obj.insert(QString("action_condition_operator"), ::OpenAPI::toJsonValue(m_action_condition_operator));
    }
    if (m_action_condition_value_isSet) {
        obj.insert(QString("action_condition_value"), ::OpenAPI::toJsonValue(m_action_condition_value));
    }
    if (m_include_tax_isSet) {
        obj.insert(QString("include_tax"), ::OpenAPI::toJsonValue(m_include_tax));
    }
    return obj;
}

QString OAICartCouponAdd::getStoreId() const {
    return m_store_id;
}
void OAICartCouponAdd::setStoreId(const QString &store_id) {
    m_store_id = store_id;
    m_store_id_isSet = true;
}

bool OAICartCouponAdd::is_store_id_Set() const{
    return m_store_id_isSet;
}

bool OAICartCouponAdd::is_store_id_Valid() const{
    return m_store_id_isValid;
}

QString OAICartCouponAdd::getCode() const {
    return m_code;
}
void OAICartCouponAdd::setCode(const QString &code) {
    m_code = code;
    m_code_isSet = true;
}

bool OAICartCouponAdd::is_code_Set() const{
    return m_code_isSet;
}

bool OAICartCouponAdd::is_code_Valid() const{
    return m_code_isValid;
}

QString OAICartCouponAdd::getName() const {
    return m_name;
}
void OAICartCouponAdd::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICartCouponAdd::is_name_Set() const{
    return m_name_isSet;
}

bool OAICartCouponAdd::is_name_Valid() const{
    return m_name_isValid;
}

QList<QString> OAICartCouponAdd::getCodes() const {
    return m_codes;
}
void OAICartCouponAdd::setCodes(const QList<QString> &codes) {
    m_codes = codes;
    m_codes_isSet = true;
}

bool OAICartCouponAdd::is_codes_Set() const{
    return m_codes_isSet;
}

bool OAICartCouponAdd::is_codes_Valid() const{
    return m_codes_isValid;
}

QString OAICartCouponAdd::getActionType() const {
    return m_action_type;
}
void OAICartCouponAdd::setActionType(const QString &action_type) {
    m_action_type = action_type;
    m_action_type_isSet = true;
}

bool OAICartCouponAdd::is_action_type_Set() const{
    return m_action_type_isSet;
}

bool OAICartCouponAdd::is_action_type_Valid() const{
    return m_action_type_isValid;
}

QString OAICartCouponAdd::getActionApplyTo() const {
    return m_action_apply_to;
}
void OAICartCouponAdd::setActionApplyTo(const QString &action_apply_to) {
    m_action_apply_to = action_apply_to;
    m_action_apply_to_isSet = true;
}

bool OAICartCouponAdd::is_action_apply_to_Set() const{
    return m_action_apply_to_isSet;
}

bool OAICartCouponAdd::is_action_apply_to_Valid() const{
    return m_action_apply_to_isValid;
}

QString OAICartCouponAdd::getActionScope() const {
    return m_action_scope;
}
void OAICartCouponAdd::setActionScope(const QString &action_scope) {
    m_action_scope = action_scope;
    m_action_scope_isSet = true;
}

bool OAICartCouponAdd::is_action_scope_Set() const{
    return m_action_scope_isSet;
}

bool OAICartCouponAdd::is_action_scope_Valid() const{
    return m_action_scope_isValid;
}

double OAICartCouponAdd::getActionAmount() const {
    return m_action_amount;
}
void OAICartCouponAdd::setActionAmount(const double &action_amount) {
    m_action_amount = action_amount;
    m_action_amount_isSet = true;
}

bool OAICartCouponAdd::is_action_amount_Set() const{
    return m_action_amount_isSet;
}

bool OAICartCouponAdd::is_action_amount_Valid() const{
    return m_action_amount_isValid;
}

QString OAICartCouponAdd::getDateStart() const {
    return m_date_start;
}
void OAICartCouponAdd::setDateStart(const QString &date_start) {
    m_date_start = date_start;
    m_date_start_isSet = true;
}

bool OAICartCouponAdd::is_date_start_Set() const{
    return m_date_start_isSet;
}

bool OAICartCouponAdd::is_date_start_Valid() const{
    return m_date_start_isValid;
}

QString OAICartCouponAdd::getDateEnd() const {
    return m_date_end;
}
void OAICartCouponAdd::setDateEnd(const QString &date_end) {
    m_date_end = date_end;
    m_date_end_isSet = true;
}

bool OAICartCouponAdd::is_date_end_Set() const{
    return m_date_end_isSet;
}

bool OAICartCouponAdd::is_date_end_Valid() const{
    return m_date_end_isValid;
}

qint32 OAICartCouponAdd::getUsageLimit() const {
    return m_usage_limit;
}
void OAICartCouponAdd::setUsageLimit(const qint32 &usage_limit) {
    m_usage_limit = usage_limit;
    m_usage_limit_isSet = true;
}

bool OAICartCouponAdd::is_usage_limit_Set() const{
    return m_usage_limit_isSet;
}

bool OAICartCouponAdd::is_usage_limit_Valid() const{
    return m_usage_limit_isValid;
}

qint32 OAICartCouponAdd::getUsageLimitPerCustomer() const {
    return m_usage_limit_per_customer;
}
void OAICartCouponAdd::setUsageLimitPerCustomer(const qint32 &usage_limit_per_customer) {
    m_usage_limit_per_customer = usage_limit_per_customer;
    m_usage_limit_per_customer_isSet = true;
}

bool OAICartCouponAdd::is_usage_limit_per_customer_Set() const{
    return m_usage_limit_per_customer_isSet;
}

bool OAICartCouponAdd::is_usage_limit_per_customer_Valid() const{
    return m_usage_limit_per_customer_isValid;
}

QString OAICartCouponAdd::getActionConditionEntity() const {
    return m_action_condition_entity;
}
void OAICartCouponAdd::setActionConditionEntity(const QString &action_condition_entity) {
    m_action_condition_entity = action_condition_entity;
    m_action_condition_entity_isSet = true;
}

bool OAICartCouponAdd::is_action_condition_entity_Set() const{
    return m_action_condition_entity_isSet;
}

bool OAICartCouponAdd::is_action_condition_entity_Valid() const{
    return m_action_condition_entity_isValid;
}

QString OAICartCouponAdd::getActionConditionKey() const {
    return m_action_condition_key;
}
void OAICartCouponAdd::setActionConditionKey(const QString &action_condition_key) {
    m_action_condition_key = action_condition_key;
    m_action_condition_key_isSet = true;
}

bool OAICartCouponAdd::is_action_condition_key_Set() const{
    return m_action_condition_key_isSet;
}

bool OAICartCouponAdd::is_action_condition_key_Valid() const{
    return m_action_condition_key_isValid;
}

QString OAICartCouponAdd::getActionConditionOperator() const {
    return m_action_condition_operator;
}
void OAICartCouponAdd::setActionConditionOperator(const QString &action_condition_operator) {
    m_action_condition_operator = action_condition_operator;
    m_action_condition_operator_isSet = true;
}

bool OAICartCouponAdd::is_action_condition_operator_Set() const{
    return m_action_condition_operator_isSet;
}

bool OAICartCouponAdd::is_action_condition_operator_Valid() const{
    return m_action_condition_operator_isValid;
}

QString OAICartCouponAdd::getActionConditionValue() const {
    return m_action_condition_value;
}
void OAICartCouponAdd::setActionConditionValue(const QString &action_condition_value) {
    m_action_condition_value = action_condition_value;
    m_action_condition_value_isSet = true;
}

bool OAICartCouponAdd::is_action_condition_value_Set() const{
    return m_action_condition_value_isSet;
}

bool OAICartCouponAdd::is_action_condition_value_Valid() const{
    return m_action_condition_value_isValid;
}

bool OAICartCouponAdd::isIncludeTax() const {
    return m_include_tax;
}
void OAICartCouponAdd::setIncludeTax(const bool &include_tax) {
    m_include_tax = include_tax;
    m_include_tax_isSet = true;
}

bool OAICartCouponAdd::is_include_tax_Set() const{
    return m_include_tax_isSet;
}

bool OAICartCouponAdd::is_include_tax_Valid() const{
    return m_include_tax_isValid;
}

bool OAICartCouponAdd::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_store_id_isSet) {
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

        if (m_codes.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_apply_to_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_scope_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_amount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_start_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_end_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_usage_limit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_usage_limit_per_customer_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_condition_entity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_condition_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_condition_operator_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_condition_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_include_tax_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICartCouponAdd::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && m_action_type_isValid && m_action_apply_to_isValid && m_action_scope_isValid && m_action_amount_isValid && true;
}

} // namespace OpenAPI
