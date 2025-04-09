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

#include "OAIProductTaxAdd_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductTaxAdd_200_response_result::OAIProductTaxAdd_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductTaxAdd_200_response_result::OAIProductTaxAdd_200_response_result() {
    this->initializeModel();
}

OAIProductTaxAdd_200_response_result::~OAIProductTaxAdd_200_response_result() {}

void OAIProductTaxAdd_200_response_result::initializeModel() {

    m_tax_class_id_isSet = false;
    m_tax_class_id_isValid = false;
}

void OAIProductTaxAdd_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductTaxAdd_200_response_result::fromJsonObject(QJsonObject json) {

    m_tax_class_id_isValid = ::OpenAPI::fromJsonValue(m_tax_class_id, json[QString("tax_class_id")]);
    m_tax_class_id_isSet = !json[QString("tax_class_id")].isNull() && m_tax_class_id_isValid;
}

QString OAIProductTaxAdd_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductTaxAdd_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_tax_class_id_isSet) {
        obj.insert(QString("tax_class_id"), ::OpenAPI::toJsonValue(m_tax_class_id));
    }
    return obj;
}

QString OAIProductTaxAdd_200_response_result::getTaxClassId() const {
    return m_tax_class_id;
}
void OAIProductTaxAdd_200_response_result::setTaxClassId(const QString &tax_class_id) {
    m_tax_class_id = tax_class_id;
    m_tax_class_id_isSet = true;
}

bool OAIProductTaxAdd_200_response_result::is_tax_class_id_Set() const{
    return m_tax_class_id_isSet;
}

bool OAIProductTaxAdd_200_response_result::is_tax_class_id_Valid() const{
    return m_tax_class_id_isValid;
}

bool OAIProductTaxAdd_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_tax_class_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductTaxAdd_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
