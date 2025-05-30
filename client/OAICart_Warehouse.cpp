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

#include "OAICart_Warehouse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICart_Warehouse::OAICart_Warehouse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICart_Warehouse::OAICart_Warehouse() {
    this->initializeModel();
}

OAICart_Warehouse::~OAICart_Warehouse() {}

void OAICart_Warehouse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_avail_isSet = false;
    m_avail_isValid = false;

    m_address_isSet = false;
    m_address_isValid = false;

    m_carriers_ids_isSet = false;
    m_carriers_ids_isValid = false;

    m_stores_ids_isSet = false;
    m_stores_ids_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAICart_Warehouse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICart_Warehouse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_avail_isValid = ::OpenAPI::fromJsonValue(m_avail, json[QString("avail")]);
    m_avail_isSet = !json[QString("avail")].isNull() && m_avail_isValid;

    m_address_isValid = ::OpenAPI::fromJsonValue(m_address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;

    m_carriers_ids_isValid = ::OpenAPI::fromJsonValue(m_carriers_ids, json[QString("carriers_ids")]);
    m_carriers_ids_isSet = !json[QString("carriers_ids")].isNull() && m_carriers_ids_isValid;

    m_stores_ids_isValid = ::OpenAPI::fromJsonValue(m_stores_ids, json[QString("stores_ids")]);
    m_stores_ids_isSet = !json[QString("stores_ids")].isNull() && m_stores_ids_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAICart_Warehouse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICart_Warehouse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(m_description));
    }
    if (m_avail_isSet) {
        obj.insert(QString("avail"), ::OpenAPI::toJsonValue(m_avail));
    }
    if (m_address.isSet()) {
        obj.insert(QString("address"), ::OpenAPI::toJsonValue(m_address));
    }
    if (m_carriers_ids.size() > 0) {
        obj.insert(QString("carriers_ids"), ::OpenAPI::toJsonValue(m_carriers_ids));
    }
    if (m_stores_ids.size() > 0) {
        obj.insert(QString("stores_ids"), ::OpenAPI::toJsonValue(m_stores_ids));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAICart_Warehouse::getId() const {
    return m_id;
}
void OAICart_Warehouse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAICart_Warehouse::is_id_Set() const{
    return m_id_isSet;
}

bool OAICart_Warehouse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAICart_Warehouse::getName() const {
    return m_name;
}
void OAICart_Warehouse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICart_Warehouse::is_name_Set() const{
    return m_name_isSet;
}

bool OAICart_Warehouse::is_name_Valid() const{
    return m_name_isValid;
}

QString OAICart_Warehouse::getDescription() const {
    return m_description;
}
void OAICart_Warehouse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAICart_Warehouse::is_description_Set() const{
    return m_description_isSet;
}

bool OAICart_Warehouse::is_description_Valid() const{
    return m_description_isValid;
}

bool OAICart_Warehouse::isAvail() const {
    return m_avail;
}
void OAICart_Warehouse::setAvail(const bool &avail) {
    m_avail = avail;
    m_avail_isSet = true;
}

bool OAICart_Warehouse::is_avail_Set() const{
    return m_avail_isSet;
}

bool OAICart_Warehouse::is_avail_Valid() const{
    return m_avail_isValid;
}

OAICustomer_Address OAICart_Warehouse::getAddress() const {
    return m_address;
}
void OAICart_Warehouse::setAddress(const OAICustomer_Address &address) {
    m_address = address;
    m_address_isSet = true;
}

bool OAICart_Warehouse::is_address_Set() const{
    return m_address_isSet;
}

bool OAICart_Warehouse::is_address_Valid() const{
    return m_address_isValid;
}

QList<QString> OAICart_Warehouse::getCarriersIds() const {
    return m_carriers_ids;
}
void OAICart_Warehouse::setCarriersIds(const QList<QString> &carriers_ids) {
    m_carriers_ids = carriers_ids;
    m_carriers_ids_isSet = true;
}

bool OAICart_Warehouse::is_carriers_ids_Set() const{
    return m_carriers_ids_isSet;
}

bool OAICart_Warehouse::is_carriers_ids_Valid() const{
    return m_carriers_ids_isValid;
}

QList<QString> OAICart_Warehouse::getStoresIds() const {
    return m_stores_ids;
}
void OAICart_Warehouse::setStoresIds(const QList<QString> &stores_ids) {
    m_stores_ids = stores_ids;
    m_stores_ids_isSet = true;
}

bool OAICart_Warehouse::is_stores_ids_Set() const{
    return m_stores_ids_isSet;
}

bool OAICart_Warehouse::is_stores_ids_Valid() const{
    return m_stores_ids_isValid;
}

OAIObject OAICart_Warehouse::getAdditionalFields() const {
    return m_additional_fields;
}
void OAICart_Warehouse::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAICart_Warehouse::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAICart_Warehouse::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAICart_Warehouse::getCustomFields() const {
    return m_custom_fields;
}
void OAICart_Warehouse::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAICart_Warehouse::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAICart_Warehouse::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAICart_Warehouse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_address.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_carriers_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_stores_ids.size() > 0) {
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

bool OAICart_Warehouse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
