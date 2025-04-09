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

#include "OAITaxClass_Rate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITaxClass_Rate::OAITaxClass_Rate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITaxClass_Rate::OAITaxClass_Rate() {
    this->initializeModel();
}

OAITaxClass_Rate::~OAITaxClass_Rate() {}

void OAITaxClass_Rate::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_tax_isSet = false;
    m_tax_isValid = false;

    m_tax_type_isSet = false;
    m_tax_type_isValid = false;

    m_tax_based_on_isSet = false;
    m_tax_based_on_isValid = false;

    m_countries_isSet = false;
    m_countries_isValid = false;

    m_cities_isSet = false;
    m_cities_isValid = false;

    m_address_isSet = false;
    m_address_isValid = false;

    m_zip_codes_isSet = false;
    m_zip_codes_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAITaxClass_Rate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITaxClass_Rate::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_tax_isValid = ::OpenAPI::fromJsonValue(m_tax, json[QString("tax")]);
    m_tax_isSet = !json[QString("tax")].isNull() && m_tax_isValid;

    m_tax_type_isValid = ::OpenAPI::fromJsonValue(m_tax_type, json[QString("tax_type")]);
    m_tax_type_isSet = !json[QString("tax_type")].isNull() && m_tax_type_isValid;

    m_tax_based_on_isValid = ::OpenAPI::fromJsonValue(m_tax_based_on, json[QString("tax_based_on")]);
    m_tax_based_on_isSet = !json[QString("tax_based_on")].isNull() && m_tax_based_on_isValid;

    m_countries_isValid = ::OpenAPI::fromJsonValue(m_countries, json[QString("countries")]);
    m_countries_isSet = !json[QString("countries")].isNull() && m_countries_isValid;

    m_cities_isValid = ::OpenAPI::fromJsonValue(m_cities, json[QString("cities")]);
    m_cities_isSet = !json[QString("cities")].isNull() && m_cities_isValid;

    m_address_isValid = ::OpenAPI::fromJsonValue(m_address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;

    m_zip_codes_isValid = ::OpenAPI::fromJsonValue(m_zip_codes, json[QString("zip_codes")]);
    m_zip_codes_isSet = !json[QString("zip_codes")].isNull() && m_zip_codes_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAITaxClass_Rate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITaxClass_Rate::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_tax_isSet) {
        obj.insert(QString("tax"), ::OpenAPI::toJsonValue(m_tax));
    }
    if (m_tax_type_isSet) {
        obj.insert(QString("tax_type"), ::OpenAPI::toJsonValue(m_tax_type));
    }
    if (m_tax_based_on_isSet) {
        obj.insert(QString("tax_based_on"), ::OpenAPI::toJsonValue(m_tax_based_on));
    }
    if (m_countries.size() > 0) {
        obj.insert(QString("countries"), ::OpenAPI::toJsonValue(m_countries));
    }
    if (m_cities.size() > 0) {
        obj.insert(QString("cities"), ::OpenAPI::toJsonValue(m_cities));
    }
    if (m_address.size() > 0) {
        obj.insert(QString("address"), ::OpenAPI::toJsonValue(m_address));
    }
    if (m_zip_codes.size() > 0) {
        obj.insert(QString("zip_codes"), ::OpenAPI::toJsonValue(m_zip_codes));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAITaxClass_Rate::getId() const {
    return m_id;
}
void OAITaxClass_Rate::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAITaxClass_Rate::is_id_Set() const{
    return m_id_isSet;
}

bool OAITaxClass_Rate::is_id_Valid() const{
    return m_id_isValid;
}

QString OAITaxClass_Rate::getName() const {
    return m_name;
}
void OAITaxClass_Rate::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAITaxClass_Rate::is_name_Set() const{
    return m_name_isSet;
}

bool OAITaxClass_Rate::is_name_Valid() const{
    return m_name_isValid;
}

double OAITaxClass_Rate::getTax() const {
    return m_tax;
}
void OAITaxClass_Rate::setTax(const double &tax) {
    m_tax = tax;
    m_tax_isSet = true;
}

bool OAITaxClass_Rate::is_tax_Set() const{
    return m_tax_isSet;
}

bool OAITaxClass_Rate::is_tax_Valid() const{
    return m_tax_isValid;
}

qint32 OAITaxClass_Rate::getTaxType() const {
    return m_tax_type;
}
void OAITaxClass_Rate::setTaxType(const qint32 &tax_type) {
    m_tax_type = tax_type;
    m_tax_type_isSet = true;
}

bool OAITaxClass_Rate::is_tax_type_Set() const{
    return m_tax_type_isSet;
}

bool OAITaxClass_Rate::is_tax_type_Valid() const{
    return m_tax_type_isValid;
}

QString OAITaxClass_Rate::getTaxBasedOn() const {
    return m_tax_based_on;
}
void OAITaxClass_Rate::setTaxBasedOn(const QString &tax_based_on) {
    m_tax_based_on = tax_based_on;
    m_tax_based_on_isSet = true;
}

bool OAITaxClass_Rate::is_tax_based_on_Set() const{
    return m_tax_based_on_isSet;
}

bool OAITaxClass_Rate::is_tax_based_on_Valid() const{
    return m_tax_based_on_isValid;
}

QList<OAITaxClass_Countries> OAITaxClass_Rate::getCountries() const {
    return m_countries;
}
void OAITaxClass_Rate::setCountries(const QList<OAITaxClass_Countries> &countries) {
    m_countries = countries;
    m_countries_isSet = true;
}

bool OAITaxClass_Rate::is_countries_Set() const{
    return m_countries_isSet;
}

bool OAITaxClass_Rate::is_countries_Valid() const{
    return m_countries_isValid;
}

QList<QString> OAITaxClass_Rate::getCities() const {
    return m_cities;
}
void OAITaxClass_Rate::setCities(const QList<QString> &cities) {
    m_cities = cities;
    m_cities_isSet = true;
}

bool OAITaxClass_Rate::is_cities_Set() const{
    return m_cities_isSet;
}

bool OAITaxClass_Rate::is_cities_Valid() const{
    return m_cities_isValid;
}

QList<QString> OAITaxClass_Rate::getAddress() const {
    return m_address;
}
void OAITaxClass_Rate::setAddress(const QList<QString> &address) {
    m_address = address;
    m_address_isSet = true;
}

bool OAITaxClass_Rate::is_address_Set() const{
    return m_address_isSet;
}

bool OAITaxClass_Rate::is_address_Valid() const{
    return m_address_isValid;
}

QList<OAITaxClass_ZipCodes> OAITaxClass_Rate::getZipCodes() const {
    return m_zip_codes;
}
void OAITaxClass_Rate::setZipCodes(const QList<OAITaxClass_ZipCodes> &zip_codes) {
    m_zip_codes = zip_codes;
    m_zip_codes_isSet = true;
}

bool OAITaxClass_Rate::is_zip_codes_Set() const{
    return m_zip_codes_isSet;
}

bool OAITaxClass_Rate::is_zip_codes_Valid() const{
    return m_zip_codes_isValid;
}

OAIObject OAITaxClass_Rate::getAdditionalFields() const {
    return m_additional_fields;
}
void OAITaxClass_Rate::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAITaxClass_Rate::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAITaxClass_Rate::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAITaxClass_Rate::getCustomFields() const {
    return m_custom_fields;
}
void OAITaxClass_Rate::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAITaxClass_Rate::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAITaxClass_Rate::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAITaxClass_Rate::isSet() const {
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

        if (m_tax_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tax_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tax_based_on_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_countries.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_cities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_address.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_zip_codes.size() > 0) {
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

bool OAITaxClass_Rate::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
