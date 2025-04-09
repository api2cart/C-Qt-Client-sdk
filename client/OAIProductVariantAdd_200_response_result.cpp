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

#include "OAIProductVariantAdd_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductVariantAdd_200_response_result::OAIProductVariantAdd_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductVariantAdd_200_response_result::OAIProductVariantAdd_200_response_result() {
    this->initializeModel();
}

OAIProductVariantAdd_200_response_result::~OAIProductVariantAdd_200_response_result() {}

void OAIProductVariantAdd_200_response_result::initializeModel() {

    m_product_variant_id_isSet = false;
    m_product_variant_id_isValid = false;
}

void OAIProductVariantAdd_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductVariantAdd_200_response_result::fromJsonObject(QJsonObject json) {

    m_product_variant_id_isValid = ::OpenAPI::fromJsonValue(m_product_variant_id, json[QString("product_variant_id")]);
    m_product_variant_id_isSet = !json[QString("product_variant_id")].isNull() && m_product_variant_id_isValid;
}

QString OAIProductVariantAdd_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductVariantAdd_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_product_variant_id_isSet) {
        obj.insert(QString("product_variant_id"), ::OpenAPI::toJsonValue(m_product_variant_id));
    }
    return obj;
}

QString OAIProductVariantAdd_200_response_result::getProductVariantId() const {
    return m_product_variant_id;
}
void OAIProductVariantAdd_200_response_result::setProductVariantId(const QString &product_variant_id) {
    m_product_variant_id = product_variant_id;
    m_product_variant_id_isSet = true;
}

bool OAIProductVariantAdd_200_response_result::is_product_variant_id_Set() const{
    return m_product_variant_id_isSet;
}

bool OAIProductVariantAdd_200_response_result::is_product_variant_id_Valid() const{
    return m_product_variant_id_isValid;
}

bool OAIProductVariantAdd_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_product_variant_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductVariantAdd_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
