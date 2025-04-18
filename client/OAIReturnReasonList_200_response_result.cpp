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

#include "OAIReturnReasonList_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIReturnReasonList_200_response_result::OAIReturnReasonList_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIReturnReasonList_200_response_result::OAIReturnReasonList_200_response_result() {
    this->initializeModel();
}

OAIReturnReasonList_200_response_result::~OAIReturnReasonList_200_response_result() {}

void OAIReturnReasonList_200_response_result::initializeModel() {

    m_return_reasons_isSet = false;
    m_return_reasons_isValid = false;
}

void OAIReturnReasonList_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIReturnReasonList_200_response_result::fromJsonObject(QJsonObject json) {

    m_return_reasons_isValid = ::OpenAPI::fromJsonValue(m_return_reasons, json[QString("return_reasons")]);
    m_return_reasons_isSet = !json[QString("return_reasons")].isNull() && m_return_reasons_isValid;
}

QString OAIReturnReasonList_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIReturnReasonList_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_return_reasons.size() > 0) {
        obj.insert(QString("return_reasons"), ::OpenAPI::toJsonValue(m_return_reasons));
    }
    return obj;
}

QList<OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner> OAIReturnReasonList_200_response_result::getReturnReasons() const {
    return m_return_reasons;
}
void OAIReturnReasonList_200_response_result::setReturnReasons(const QList<OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner> &return_reasons) {
    m_return_reasons = return_reasons;
    m_return_reasons_isSet = true;
}

bool OAIReturnReasonList_200_response_result::is_return_reasons_Set() const{
    return m_return_reasons_isSet;
}

bool OAIReturnReasonList_200_response_result::is_return_reasons_Valid() const{
    return m_return_reasons_isValid;
}

bool OAIReturnReasonList_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_return_reasons.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIReturnReasonList_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
