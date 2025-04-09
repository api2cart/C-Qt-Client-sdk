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

#include "OAIOrderRefundAdd_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderRefundAdd_200_response_result::OAIOrderRefundAdd_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderRefundAdd_200_response_result::OAIOrderRefundAdd_200_response_result() {
    this->initializeModel();
}

OAIOrderRefundAdd_200_response_result::~OAIOrderRefundAdd_200_response_result() {}

void OAIOrderRefundAdd_200_response_result::initializeModel() {

    m_refund_id_isSet = false;
    m_refund_id_isValid = false;

    m_additional_refund_ids_isSet = false;
    m_additional_refund_ids_isValid = false;
}

void OAIOrderRefundAdd_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderRefundAdd_200_response_result::fromJsonObject(QJsonObject json) {

    m_refund_id_isValid = ::OpenAPI::fromJsonValue(m_refund_id, json[QString("refund_id")]);
    m_refund_id_isSet = !json[QString("refund_id")].isNull() && m_refund_id_isValid;

    m_additional_refund_ids_isValid = ::OpenAPI::fromJsonValue(m_additional_refund_ids, json[QString("additional_refund_ids")]);
    m_additional_refund_ids_isSet = !json[QString("additional_refund_ids")].isNull() && m_additional_refund_ids_isValid;
}

QString OAIOrderRefundAdd_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderRefundAdd_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_refund_id_isSet) {
        obj.insert(QString("refund_id"), ::OpenAPI::toJsonValue(m_refund_id));
    }
    if (m_additional_refund_ids_isSet) {
        obj.insert(QString("additional_refund_ids"), ::OpenAPI::toJsonValue(m_additional_refund_ids));
    }
    return obj;
}

QString OAIOrderRefundAdd_200_response_result::getRefundId() const {
    return m_refund_id;
}
void OAIOrderRefundAdd_200_response_result::setRefundId(const QString &refund_id) {
    m_refund_id = refund_id;
    m_refund_id_isSet = true;
}

bool OAIOrderRefundAdd_200_response_result::is_refund_id_Set() const{
    return m_refund_id_isSet;
}

bool OAIOrderRefundAdd_200_response_result::is_refund_id_Valid() const{
    return m_refund_id_isValid;
}

QString OAIOrderRefundAdd_200_response_result::getAdditionalRefundIds() const {
    return m_additional_refund_ids;
}
void OAIOrderRefundAdd_200_response_result::setAdditionalRefundIds(const QString &additional_refund_ids) {
    m_additional_refund_ids = additional_refund_ids;
    m_additional_refund_ids_isSet = true;
}

bool OAIOrderRefundAdd_200_response_result::is_additional_refund_ids_Set() const{
    return m_additional_refund_ids_isSet;
}

bool OAIOrderRefundAdd_200_response_result::is_additional_refund_ids_Valid() const{
    return m_additional_refund_ids_isValid;
}

bool OAIOrderRefundAdd_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_refund_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_additional_refund_ids_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrderRefundAdd_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
