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

#include "OAICartList_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICartList_200_response_result::OAICartList_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICartList_200_response_result::OAICartList_200_response_result() {
    this->initializeModel();
}

OAICartList_200_response_result::~OAICartList_200_response_result() {}

void OAICartList_200_response_result::initializeModel() {

    m_supported_carts_isSet = false;
    m_supported_carts_isValid = false;
}

void OAICartList_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICartList_200_response_result::fromJsonObject(QJsonObject json) {

    m_supported_carts_isValid = ::OpenAPI::fromJsonValue(m_supported_carts, json[QString("supported_carts")]);
    m_supported_carts_isSet = !json[QString("supported_carts")].isNull() && m_supported_carts_isValid;
}

QString OAICartList_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICartList_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_supported_carts.size() > 0) {
        obj.insert(QString("supported_carts"), ::OpenAPI::toJsonValue(m_supported_carts));
    }
    return obj;
}

QList<OAICartList_200_response_result_supported_carts_inner> OAICartList_200_response_result::getSupportedCarts() const {
    return m_supported_carts;
}
void OAICartList_200_response_result::setSupportedCarts(const QList<OAICartList_200_response_result_supported_carts_inner> &supported_carts) {
    m_supported_carts = supported_carts;
    m_supported_carts_isSet = true;
}

bool OAICartList_200_response_result::is_supported_carts_Set() const{
    return m_supported_carts_isSet;
}

bool OAICartList_200_response_result::is_supported_carts_Valid() const{
    return m_supported_carts_isValid;
}

bool OAICartList_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_supported_carts.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICartList_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
