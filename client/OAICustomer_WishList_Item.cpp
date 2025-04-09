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

#include "OAICustomer_WishList_Item.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustomer_WishList_Item::OAICustomer_WishList_Item(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustomer_WishList_Item::OAICustomer_WishList_Item() {
    this->initializeModel();
}

OAICustomer_WishList_Item::~OAICustomer_WishList_Item() {}

void OAICustomer_WishList_Item::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_product_id_isSet = false;
    m_product_id_isValid = false;

    m_child_id_isSet = false;
    m_child_id_isValid = false;

    m_created_time_isSet = false;
    m_created_time_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAICustomer_WishList_Item::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustomer_WishList_Item::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_product_id_isValid = ::OpenAPI::fromJsonValue(m_product_id, json[QString("product_id")]);
    m_product_id_isSet = !json[QString("product_id")].isNull() && m_product_id_isValid;

    m_child_id_isValid = ::OpenAPI::fromJsonValue(m_child_id, json[QString("child_id")]);
    m_child_id_isSet = !json[QString("child_id")].isNull() && m_child_id_isValid;

    m_created_time_isValid = ::OpenAPI::fromJsonValue(m_created_time, json[QString("created_time")]);
    m_created_time_isSet = !json[QString("created_time")].isNull() && m_created_time_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAICustomer_WishList_Item::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustomer_WishList_Item::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_product_id_isSet) {
        obj.insert(QString("product_id"), ::OpenAPI::toJsonValue(m_product_id));
    }
    if (m_child_id_isSet) {
        obj.insert(QString("child_id"), ::OpenAPI::toJsonValue(m_child_id));
    }
    if (m_created_time.isSet()) {
        obj.insert(QString("created_time"), ::OpenAPI::toJsonValue(m_created_time));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAICustomer_WishList_Item::getId() const {
    return m_id;
}
void OAICustomer_WishList_Item::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAICustomer_WishList_Item::is_id_Set() const{
    return m_id_isSet;
}

bool OAICustomer_WishList_Item::is_id_Valid() const{
    return m_id_isValid;
}

QString OAICustomer_WishList_Item::getProductId() const {
    return m_product_id;
}
void OAICustomer_WishList_Item::setProductId(const QString &product_id) {
    m_product_id = product_id;
    m_product_id_isSet = true;
}

bool OAICustomer_WishList_Item::is_product_id_Set() const{
    return m_product_id_isSet;
}

bool OAICustomer_WishList_Item::is_product_id_Valid() const{
    return m_product_id_isValid;
}

QString OAICustomer_WishList_Item::getChildId() const {
    return m_child_id;
}
void OAICustomer_WishList_Item::setChildId(const QString &child_id) {
    m_child_id = child_id;
    m_child_id_isSet = true;
}

bool OAICustomer_WishList_Item::is_child_id_Set() const{
    return m_child_id_isSet;
}

bool OAICustomer_WishList_Item::is_child_id_Valid() const{
    return m_child_id_isValid;
}

OAIA2CDateTime OAICustomer_WishList_Item::getCreatedTime() const {
    return m_created_time;
}
void OAICustomer_WishList_Item::setCreatedTime(const OAIA2CDateTime &created_time) {
    m_created_time = created_time;
    m_created_time_isSet = true;
}

bool OAICustomer_WishList_Item::is_created_time_Set() const{
    return m_created_time_isSet;
}

bool OAICustomer_WishList_Item::is_created_time_Valid() const{
    return m_created_time_isValid;
}

OAIObject OAICustomer_WishList_Item::getAdditionalFields() const {
    return m_additional_fields;
}
void OAICustomer_WishList_Item::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAICustomer_WishList_Item::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAICustomer_WishList_Item::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAICustomer_WishList_Item::getCustomFields() const {
    return m_custom_fields;
}
void OAICustomer_WishList_Item::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAICustomer_WishList_Item::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAICustomer_WishList_Item::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAICustomer_WishList_Item::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_product_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_child_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_time.isSet()) {
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

bool OAICustomer_WishList_Item::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
