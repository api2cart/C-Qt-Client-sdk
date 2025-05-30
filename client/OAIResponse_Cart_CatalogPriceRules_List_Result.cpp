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

#include "OAIResponse_Cart_CatalogPriceRules_List_Result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponse_Cart_CatalogPriceRules_List_Result::OAIResponse_Cart_CatalogPriceRules_List_Result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponse_Cart_CatalogPriceRules_List_Result::OAIResponse_Cart_CatalogPriceRules_List_Result() {
    this->initializeModel();
}

OAIResponse_Cart_CatalogPriceRules_List_Result::~OAIResponse_Cart_CatalogPriceRules_List_Result() {}

void OAIResponse_Cart_CatalogPriceRules_List_Result::initializeModel() {

    m_catalog_price_rules_count_isSet = false;
    m_catalog_price_rules_count_isValid = false;

    m_catalog_price_rules_isSet = false;
    m_catalog_price_rules_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIResponse_Cart_CatalogPriceRules_List_Result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponse_Cart_CatalogPriceRules_List_Result::fromJsonObject(QJsonObject json) {

    m_catalog_price_rules_count_isValid = ::OpenAPI::fromJsonValue(m_catalog_price_rules_count, json[QString("catalog_price_rules_count")]);
    m_catalog_price_rules_count_isSet = !json[QString("catalog_price_rules_count")].isNull() && m_catalog_price_rules_count_isValid;

    m_catalog_price_rules_isValid = ::OpenAPI::fromJsonValue(m_catalog_price_rules, json[QString("catalog_price_rules")]);
    m_catalog_price_rules_isSet = !json[QString("catalog_price_rules")].isNull() && m_catalog_price_rules_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIResponse_Cart_CatalogPriceRules_List_Result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponse_Cart_CatalogPriceRules_List_Result::asJsonObject() const {
    QJsonObject obj;
    if (m_catalog_price_rules_count_isSet) {
        obj.insert(QString("catalog_price_rules_count"), ::OpenAPI::toJsonValue(m_catalog_price_rules_count));
    }
    if (m_catalog_price_rules.size() > 0) {
        obj.insert(QString("catalog_price_rules"), ::OpenAPI::toJsonValue(m_catalog_price_rules));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

qint32 OAIResponse_Cart_CatalogPriceRules_List_Result::getCatalogPriceRulesCount() const {
    return m_catalog_price_rules_count;
}
void OAIResponse_Cart_CatalogPriceRules_List_Result::setCatalogPriceRulesCount(const qint32 &catalog_price_rules_count) {
    m_catalog_price_rules_count = catalog_price_rules_count;
    m_catalog_price_rules_count_isSet = true;
}

bool OAIResponse_Cart_CatalogPriceRules_List_Result::is_catalog_price_rules_count_Set() const{
    return m_catalog_price_rules_count_isSet;
}

bool OAIResponse_Cart_CatalogPriceRules_List_Result::is_catalog_price_rules_count_Valid() const{
    return m_catalog_price_rules_count_isValid;
}

QList<OAICatalogPriceRule> OAIResponse_Cart_CatalogPriceRules_List_Result::getCatalogPriceRules() const {
    return m_catalog_price_rules;
}
void OAIResponse_Cart_CatalogPriceRules_List_Result::setCatalogPriceRules(const QList<OAICatalogPriceRule> &catalog_price_rules) {
    m_catalog_price_rules = catalog_price_rules;
    m_catalog_price_rules_isSet = true;
}

bool OAIResponse_Cart_CatalogPriceRules_List_Result::is_catalog_price_rules_Set() const{
    return m_catalog_price_rules_isSet;
}

bool OAIResponse_Cart_CatalogPriceRules_List_Result::is_catalog_price_rules_Valid() const{
    return m_catalog_price_rules_isValid;
}

OAIObject OAIResponse_Cart_CatalogPriceRules_List_Result::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIResponse_Cart_CatalogPriceRules_List_Result::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIResponse_Cart_CatalogPriceRules_List_Result::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIResponse_Cart_CatalogPriceRules_List_Result::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIResponse_Cart_CatalogPriceRules_List_Result::getCustomFields() const {
    return m_custom_fields;
}
void OAIResponse_Cart_CatalogPriceRules_List_Result::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIResponse_Cart_CatalogPriceRules_List_Result::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIResponse_Cart_CatalogPriceRules_List_Result::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIResponse_Cart_CatalogPriceRules_List_Result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_catalog_price_rules_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_catalog_price_rules.size() > 0) {
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

bool OAIResponse_Cart_CatalogPriceRules_List_Result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
