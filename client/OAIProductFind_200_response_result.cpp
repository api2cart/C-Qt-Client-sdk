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

#include "OAIProductFind_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductFind_200_response_result::OAIProductFind_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductFind_200_response_result::OAIProductFind_200_response_result() {
    this->initializeModel();
}

OAIProductFind_200_response_result::~OAIProductFind_200_response_result() {}

void OAIProductFind_200_response_result::initializeModel() {

    m_product_isSet = false;
    m_product_isValid = false;
}

void OAIProductFind_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductFind_200_response_result::fromJsonObject(QJsonObject json) {

    m_product_isValid = ::OpenAPI::fromJsonValue(m_product, json[QString("product")]);
    m_product_isSet = !json[QString("product")].isNull() && m_product_isValid;
}

QString OAIProductFind_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductFind_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_product.size() > 0) {
        obj.insert(QString("product"), ::OpenAPI::toJsonValue(m_product));
    }
    return obj;
}

QList<OAIProductFind_200_response_result_product_inner> OAIProductFind_200_response_result::getProduct() const {
    return m_product;
}
void OAIProductFind_200_response_result::setProduct(const QList<OAIProductFind_200_response_result_product_inner> &product) {
    m_product = product;
    m_product_isSet = true;
}

bool OAIProductFind_200_response_result::is_product_Set() const{
    return m_product_isSet;
}

bool OAIProductFind_200_response_result::is_product_Valid() const{
    return m_product_isValid;
}

bool OAIProductFind_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_product.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductFind_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
