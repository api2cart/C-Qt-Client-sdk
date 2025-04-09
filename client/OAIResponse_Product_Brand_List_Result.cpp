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

#include "OAIResponse_Product_Brand_List_Result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponse_Product_Brand_List_Result::OAIResponse_Product_Brand_List_Result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponse_Product_Brand_List_Result::OAIResponse_Product_Brand_List_Result() {
    this->initializeModel();
}

OAIResponse_Product_Brand_List_Result::~OAIResponse_Product_Brand_List_Result() {}

void OAIResponse_Product_Brand_List_Result::initializeModel() {

    m_total_count_isSet = false;
    m_total_count_isValid = false;

    m_brands_isSet = false;
    m_brands_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIResponse_Product_Brand_List_Result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponse_Product_Brand_List_Result::fromJsonObject(QJsonObject json) {

    m_total_count_isValid = ::OpenAPI::fromJsonValue(m_total_count, json[QString("total_count")]);
    m_total_count_isSet = !json[QString("total_count")].isNull() && m_total_count_isValid;

    m_brands_isValid = ::OpenAPI::fromJsonValue(m_brands, json[QString("brands")]);
    m_brands_isSet = !json[QString("brands")].isNull() && m_brands_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIResponse_Product_Brand_List_Result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponse_Product_Brand_List_Result::asJsonObject() const {
    QJsonObject obj;
    if (m_total_count_isSet) {
        obj.insert(QString("total_count"), ::OpenAPI::toJsonValue(m_total_count));
    }
    if (m_brands.size() > 0) {
        obj.insert(QString("brands"), ::OpenAPI::toJsonValue(m_brands));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

qint32 OAIResponse_Product_Brand_List_Result::getTotalCount() const {
    return m_total_count;
}
void OAIResponse_Product_Brand_List_Result::setTotalCount(const qint32 &total_count) {
    m_total_count = total_count;
    m_total_count_isSet = true;
}

bool OAIResponse_Product_Brand_List_Result::is_total_count_Set() const{
    return m_total_count_isSet;
}

bool OAIResponse_Product_Brand_List_Result::is_total_count_Valid() const{
    return m_total_count_isValid;
}

QList<OAIBrand> OAIResponse_Product_Brand_List_Result::getBrands() const {
    return m_brands;
}
void OAIResponse_Product_Brand_List_Result::setBrands(const QList<OAIBrand> &brands) {
    m_brands = brands;
    m_brands_isSet = true;
}

bool OAIResponse_Product_Brand_List_Result::is_brands_Set() const{
    return m_brands_isSet;
}

bool OAIResponse_Product_Brand_List_Result::is_brands_Valid() const{
    return m_brands_isValid;
}

OAIObject OAIResponse_Product_Brand_List_Result::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIResponse_Product_Brand_List_Result::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIResponse_Product_Brand_List_Result::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIResponse_Product_Brand_List_Result::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIResponse_Product_Brand_List_Result::getCustomFields() const {
    return m_custom_fields;
}
void OAIResponse_Product_Brand_List_Result::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIResponse_Product_Brand_List_Result::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIResponse_Product_Brand_List_Result::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIResponse_Product_Brand_List_Result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_total_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_brands.size() > 0) {
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

bool OAIResponse_Product_Brand_List_Result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
