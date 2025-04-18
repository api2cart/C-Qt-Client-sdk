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

#include "OAIOrderFind_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderFind_200_response_result::OAIOrderFind_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderFind_200_response_result::OAIOrderFind_200_response_result() {
    this->initializeModel();
}

OAIOrderFind_200_response_result::~OAIOrderFind_200_response_result() {}

void OAIOrderFind_200_response_result::initializeModel() {

    m_order_isSet = false;
    m_order_isValid = false;
}

void OAIOrderFind_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderFind_200_response_result::fromJsonObject(QJsonObject json) {

    m_order_isValid = ::OpenAPI::fromJsonValue(m_order, json[QString("order")]);
    m_order_isSet = !json[QString("order")].isNull() && m_order_isValid;
}

QString OAIOrderFind_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderFind_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_order.size() > 0) {
        obj.insert(QString("order"), ::OpenAPI::toJsonValue(m_order));
    }
    return obj;
}

QList<OAIOrder> OAIOrderFind_200_response_result::getOrder() const {
    return m_order;
}
void OAIOrderFind_200_response_result::setOrder(const QList<OAIOrder> &order) {
    m_order = order;
    m_order_isSet = true;
}

bool OAIOrderFind_200_response_result::is_order_Set() const{
    return m_order_isSet;
}

bool OAIOrderFind_200_response_result::is_order_Valid() const{
    return m_order_isValid;
}

bool OAIOrderFind_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_order.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrderFind_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
