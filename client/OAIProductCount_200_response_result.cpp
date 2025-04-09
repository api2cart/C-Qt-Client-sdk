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

#include "OAIProductCount_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductCount_200_response_result::OAIProductCount_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductCount_200_response_result::OAIProductCount_200_response_result() {
    this->initializeModel();
}

OAIProductCount_200_response_result::~OAIProductCount_200_response_result() {}

void OAIProductCount_200_response_result::initializeModel() {

    m_products_count_isSet = false;
    m_products_count_isValid = false;
}

void OAIProductCount_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductCount_200_response_result::fromJsonObject(QJsonObject json) {

    m_products_count_isValid = ::OpenAPI::fromJsonValue(m_products_count, json[QString("products_count")]);
    m_products_count_isSet = !json[QString("products_count")].isNull() && m_products_count_isValid;
}

QString OAIProductCount_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductCount_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_products_count_isSet) {
        obj.insert(QString("products_count"), ::OpenAPI::toJsonValue(m_products_count));
    }
    return obj;
}

qint32 OAIProductCount_200_response_result::getProductsCount() const {
    return m_products_count;
}
void OAIProductCount_200_response_result::setProductsCount(const qint32 &products_count) {
    m_products_count = products_count;
    m_products_count_isSet = true;
}

bool OAIProductCount_200_response_result::is_products_count_Set() const{
    return m_products_count_isSet;
}

bool OAIProductCount_200_response_result::is_products_count_Valid() const{
    return m_products_count_isValid;
}

bool OAIProductCount_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_products_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductCount_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
