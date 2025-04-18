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

#include "OAIResponse_Marketplace_Product_Find_Result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponse_Marketplace_Product_Find_Result::OAIResponse_Marketplace_Product_Find_Result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponse_Marketplace_Product_Find_Result::OAIResponse_Marketplace_Product_Find_Result() {
    this->initializeModel();
}

OAIResponse_Marketplace_Product_Find_Result::~OAIResponse_Marketplace_Product_Find_Result() {}

void OAIResponse_Marketplace_Product_Find_Result::initializeModel() {

    m_marketplace_products_count_isSet = false;
    m_marketplace_products_count_isValid = false;

    m_marketplace_product_isSet = false;
    m_marketplace_product_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIResponse_Marketplace_Product_Find_Result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponse_Marketplace_Product_Find_Result::fromJsonObject(QJsonObject json) {

    m_marketplace_products_count_isValid = ::OpenAPI::fromJsonValue(m_marketplace_products_count, json[QString("marketplace_products_count")]);
    m_marketplace_products_count_isSet = !json[QString("marketplace_products_count")].isNull() && m_marketplace_products_count_isValid;

    m_marketplace_product_isValid = ::OpenAPI::fromJsonValue(m_marketplace_product, json[QString("marketplace_product")]);
    m_marketplace_product_isSet = !json[QString("marketplace_product")].isNull() && m_marketplace_product_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIResponse_Marketplace_Product_Find_Result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponse_Marketplace_Product_Find_Result::asJsonObject() const {
    QJsonObject obj;
    if (m_marketplace_products_count_isSet) {
        obj.insert(QString("marketplace_products_count"), ::OpenAPI::toJsonValue(m_marketplace_products_count));
    }
    if (m_marketplace_product.size() > 0) {
        obj.insert(QString("marketplace_product"), ::OpenAPI::toJsonValue(m_marketplace_product));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

qint32 OAIResponse_Marketplace_Product_Find_Result::getMarketplaceProductsCount() const {
    return m_marketplace_products_count;
}
void OAIResponse_Marketplace_Product_Find_Result::setMarketplaceProductsCount(const qint32 &marketplace_products_count) {
    m_marketplace_products_count = marketplace_products_count;
    m_marketplace_products_count_isSet = true;
}

bool OAIResponse_Marketplace_Product_Find_Result::is_marketplace_products_count_Set() const{
    return m_marketplace_products_count_isSet;
}

bool OAIResponse_Marketplace_Product_Find_Result::is_marketplace_products_count_Valid() const{
    return m_marketplace_products_count_isValid;
}

QList<OAIMarketplace_Product> OAIResponse_Marketplace_Product_Find_Result::getMarketplaceProduct() const {
    return m_marketplace_product;
}
void OAIResponse_Marketplace_Product_Find_Result::setMarketplaceProduct(const QList<OAIMarketplace_Product> &marketplace_product) {
    m_marketplace_product = marketplace_product;
    m_marketplace_product_isSet = true;
}

bool OAIResponse_Marketplace_Product_Find_Result::is_marketplace_product_Set() const{
    return m_marketplace_product_isSet;
}

bool OAIResponse_Marketplace_Product_Find_Result::is_marketplace_product_Valid() const{
    return m_marketplace_product_isValid;
}

OAIObject OAIResponse_Marketplace_Product_Find_Result::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIResponse_Marketplace_Product_Find_Result::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIResponse_Marketplace_Product_Find_Result::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIResponse_Marketplace_Product_Find_Result::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIResponse_Marketplace_Product_Find_Result::getCustomFields() const {
    return m_custom_fields;
}
void OAIResponse_Marketplace_Product_Find_Result::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIResponse_Marketplace_Product_Find_Result::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIResponse_Marketplace_Product_Find_Result::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIResponse_Marketplace_Product_Find_Result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_marketplace_products_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_marketplace_product.size() > 0) {
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

bool OAIResponse_Marketplace_Product_Find_Result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
