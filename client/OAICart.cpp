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

#include "OAICart.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICart::OAICart(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICart::OAICart() {
    this->initializeModel();
}

OAICart::~OAICart() {}

void OAICart::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_version_isSet = false;
    m_version_isValid = false;

    m_db_prefix_isSet = false;
    m_db_prefix_isValid = false;

    m_stores_info_isSet = false;
    m_stores_info_isValid = false;

    m_warehouses_isSet = false;
    m_warehouses_isValid = false;

    m_shipping_zones_isSet = false;
    m_shipping_zones_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAICart::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICart::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_version_isValid = ::OpenAPI::fromJsonValue(m_version, json[QString("version")]);
    m_version_isSet = !json[QString("version")].isNull() && m_version_isValid;

    m_db_prefix_isValid = ::OpenAPI::fromJsonValue(m_db_prefix, json[QString("db_prefix")]);
    m_db_prefix_isSet = !json[QString("db_prefix")].isNull() && m_db_prefix_isValid;

    m_stores_info_isValid = ::OpenAPI::fromJsonValue(m_stores_info, json[QString("stores_info")]);
    m_stores_info_isSet = !json[QString("stores_info")].isNull() && m_stores_info_isValid;

    m_warehouses_isValid = ::OpenAPI::fromJsonValue(m_warehouses, json[QString("warehouses")]);
    m_warehouses_isSet = !json[QString("warehouses")].isNull() && m_warehouses_isValid;

    m_shipping_zones_isValid = ::OpenAPI::fromJsonValue(m_shipping_zones, json[QString("shipping_zones")]);
    m_shipping_zones_isSet = !json[QString("shipping_zones")].isNull() && m_shipping_zones_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAICart::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICart::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(m_url));
    }
    if (m_version_isSet) {
        obj.insert(QString("version"), ::OpenAPI::toJsonValue(m_version));
    }
    if (m_db_prefix_isSet) {
        obj.insert(QString("db_prefix"), ::OpenAPI::toJsonValue(m_db_prefix));
    }
    if (m_stores_info.size() > 0) {
        obj.insert(QString("stores_info"), ::OpenAPI::toJsonValue(m_stores_info));
    }
    if (m_warehouses.size() > 0) {
        obj.insert(QString("warehouses"), ::OpenAPI::toJsonValue(m_warehouses));
    }
    if (m_shipping_zones.size() > 0) {
        obj.insert(QString("shipping_zones"), ::OpenAPI::toJsonValue(m_shipping_zones));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAICart::getName() const {
    return m_name;
}
void OAICart::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICart::is_name_Set() const{
    return m_name_isSet;
}

bool OAICart::is_name_Valid() const{
    return m_name_isValid;
}

QString OAICart::getUrl() const {
    return m_url;
}
void OAICart::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAICart::is_url_Set() const{
    return m_url_isSet;
}

bool OAICart::is_url_Valid() const{
    return m_url_isValid;
}

QString OAICart::getVersion() const {
    return m_version;
}
void OAICart::setVersion(const QString &version) {
    m_version = version;
    m_version_isSet = true;
}

bool OAICart::is_version_Set() const{
    return m_version_isSet;
}

bool OAICart::is_version_Valid() const{
    return m_version_isValid;
}

QString OAICart::getDbPrefix() const {
    return m_db_prefix;
}
void OAICart::setDbPrefix(const QString &db_prefix) {
    m_db_prefix = db_prefix;
    m_db_prefix_isSet = true;
}

bool OAICart::is_db_prefix_Set() const{
    return m_db_prefix_isSet;
}

bool OAICart::is_db_prefix_Valid() const{
    return m_db_prefix_isValid;
}

QList<OAICart_StoreInfo> OAICart::getStoresInfo() const {
    return m_stores_info;
}
void OAICart::setStoresInfo(const QList<OAICart_StoreInfo> &stores_info) {
    m_stores_info = stores_info;
    m_stores_info_isSet = true;
}

bool OAICart::is_stores_info_Set() const{
    return m_stores_info_isSet;
}

bool OAICart::is_stores_info_Valid() const{
    return m_stores_info_isValid;
}

QList<OAICart_Warehouse> OAICart::getWarehouses() const {
    return m_warehouses;
}
void OAICart::setWarehouses(const QList<OAICart_Warehouse> &warehouses) {
    m_warehouses = warehouses;
    m_warehouses_isSet = true;
}

bool OAICart::is_warehouses_Set() const{
    return m_warehouses_isSet;
}

bool OAICart::is_warehouses_Valid() const{
    return m_warehouses_isValid;
}

QList<OAICart_ShippingZone> OAICart::getShippingZones() const {
    return m_shipping_zones;
}
void OAICart::setShippingZones(const QList<OAICart_ShippingZone> &shipping_zones) {
    m_shipping_zones = shipping_zones;
    m_shipping_zones_isSet = true;
}

bool OAICart::is_shipping_zones_Set() const{
    return m_shipping_zones_isSet;
}

bool OAICart::is_shipping_zones_Valid() const{
    return m_shipping_zones_isValid;
}

OAIObject OAICart::getAdditionalFields() const {
    return m_additional_fields;
}
void OAICart::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAICart::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAICart::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAICart::getCustomFields() const {
    return m_custom_fields;
}
void OAICart::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAICart::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAICart::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAICart::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_db_prefix_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_stores_info.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_warehouses.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_shipping_zones.size() > 0) {
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

bool OAICart::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
