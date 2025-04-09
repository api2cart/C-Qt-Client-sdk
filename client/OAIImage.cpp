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

#include "OAIImage.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIImage::OAIImage(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIImage::OAIImage() {
    this->initializeModel();
}

OAIImage::~OAIImage() {}

void OAIImage::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_http_path_isSet = false;
    m_http_path_isValid = false;

    m_file_name_isSet = false;
    m_file_name_isValid = false;

    m_mime_type_isSet = false;
    m_mime_type_isValid = false;

    m_size_isSet = false;
    m_size_isValid = false;

    m_create_at_isSet = false;
    m_create_at_isValid = false;

    m_modified_at_isSet = false;
    m_modified_at_isValid = false;

    m_alt_isSet = false;
    m_alt_isValid = false;

    m_avail_isSet = false;
    m_avail_isValid = false;

    m_sort_order_isSet = false;
    m_sort_order_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIImage::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIImage::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_http_path_isValid = ::OpenAPI::fromJsonValue(m_http_path, json[QString("http_path")]);
    m_http_path_isSet = !json[QString("http_path")].isNull() && m_http_path_isValid;

    m_file_name_isValid = ::OpenAPI::fromJsonValue(m_file_name, json[QString("file_name")]);
    m_file_name_isSet = !json[QString("file_name")].isNull() && m_file_name_isValid;

    m_mime_type_isValid = ::OpenAPI::fromJsonValue(m_mime_type, json[QString("mime-type")]);
    m_mime_type_isSet = !json[QString("mime-type")].isNull() && m_mime_type_isValid;

    m_size_isValid = ::OpenAPI::fromJsonValue(m_size, json[QString("size")]);
    m_size_isSet = !json[QString("size")].isNull() && m_size_isValid;

    m_create_at_isValid = ::OpenAPI::fromJsonValue(m_create_at, json[QString("create_at")]);
    m_create_at_isSet = !json[QString("create_at")].isNull() && m_create_at_isValid;

    m_modified_at_isValid = ::OpenAPI::fromJsonValue(m_modified_at, json[QString("modified_at")]);
    m_modified_at_isSet = !json[QString("modified_at")].isNull() && m_modified_at_isValid;

    m_alt_isValid = ::OpenAPI::fromJsonValue(m_alt, json[QString("alt")]);
    m_alt_isSet = !json[QString("alt")].isNull() && m_alt_isValid;

    m_avail_isValid = ::OpenAPI::fromJsonValue(m_avail, json[QString("avail")]);
    m_avail_isSet = !json[QString("avail")].isNull() && m_avail_isValid;

    m_sort_order_isValid = ::OpenAPI::fromJsonValue(m_sort_order, json[QString("sort_order")]);
    m_sort_order_isSet = !json[QString("sort_order")].isNull() && m_sort_order_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIImage::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIImage::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_http_path_isSet) {
        obj.insert(QString("http_path"), ::OpenAPI::toJsonValue(m_http_path));
    }
    if (m_file_name_isSet) {
        obj.insert(QString("file_name"), ::OpenAPI::toJsonValue(m_file_name));
    }
    if (m_mime_type_isSet) {
        obj.insert(QString("mime-type"), ::OpenAPI::toJsonValue(m_mime_type));
    }
    if (m_size_isSet) {
        obj.insert(QString("size"), ::OpenAPI::toJsonValue(m_size));
    }
    if (m_create_at.isSet()) {
        obj.insert(QString("create_at"), ::OpenAPI::toJsonValue(m_create_at));
    }
    if (m_modified_at.isSet()) {
        obj.insert(QString("modified_at"), ::OpenAPI::toJsonValue(m_modified_at));
    }
    if (m_alt_isSet) {
        obj.insert(QString("alt"), ::OpenAPI::toJsonValue(m_alt));
    }
    if (m_avail_isSet) {
        obj.insert(QString("avail"), ::OpenAPI::toJsonValue(m_avail));
    }
    if (m_sort_order_isSet) {
        obj.insert(QString("sort_order"), ::OpenAPI::toJsonValue(m_sort_order));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIImage::getId() const {
    return m_id;
}
void OAIImage::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIImage::is_id_Set() const{
    return m_id_isSet;
}

bool OAIImage::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIImage::getHttpPath() const {
    return m_http_path;
}
void OAIImage::setHttpPath(const QString &http_path) {
    m_http_path = http_path;
    m_http_path_isSet = true;
}

bool OAIImage::is_http_path_Set() const{
    return m_http_path_isSet;
}

bool OAIImage::is_http_path_Valid() const{
    return m_http_path_isValid;
}

QString OAIImage::getFileName() const {
    return m_file_name;
}
void OAIImage::setFileName(const QString &file_name) {
    m_file_name = file_name;
    m_file_name_isSet = true;
}

bool OAIImage::is_file_name_Set() const{
    return m_file_name_isSet;
}

bool OAIImage::is_file_name_Valid() const{
    return m_file_name_isValid;
}

QString OAIImage::getMimeType() const {
    return m_mime_type;
}
void OAIImage::setMimeType(const QString &mime_type) {
    m_mime_type = mime_type;
    m_mime_type_isSet = true;
}

bool OAIImage::is_mime_type_Set() const{
    return m_mime_type_isSet;
}

bool OAIImage::is_mime_type_Valid() const{
    return m_mime_type_isValid;
}

qint32 OAIImage::getSize() const {
    return m_size;
}
void OAIImage::setSize(const qint32 &size) {
    m_size = size;
    m_size_isSet = true;
}

bool OAIImage::is_size_Set() const{
    return m_size_isSet;
}

bool OAIImage::is_size_Valid() const{
    return m_size_isValid;
}

OAIA2CDateTime OAIImage::getCreateAt() const {
    return m_create_at;
}
void OAIImage::setCreateAt(const OAIA2CDateTime &create_at) {
    m_create_at = create_at;
    m_create_at_isSet = true;
}

bool OAIImage::is_create_at_Set() const{
    return m_create_at_isSet;
}

bool OAIImage::is_create_at_Valid() const{
    return m_create_at_isValid;
}

OAIA2CDateTime OAIImage::getModifiedAt() const {
    return m_modified_at;
}
void OAIImage::setModifiedAt(const OAIA2CDateTime &modified_at) {
    m_modified_at = modified_at;
    m_modified_at_isSet = true;
}

bool OAIImage::is_modified_at_Set() const{
    return m_modified_at_isSet;
}

bool OAIImage::is_modified_at_Valid() const{
    return m_modified_at_isValid;
}

QString OAIImage::getAlt() const {
    return m_alt;
}
void OAIImage::setAlt(const QString &alt) {
    m_alt = alt;
    m_alt_isSet = true;
}

bool OAIImage::is_alt_Set() const{
    return m_alt_isSet;
}

bool OAIImage::is_alt_Valid() const{
    return m_alt_isValid;
}

bool OAIImage::isAvail() const {
    return m_avail;
}
void OAIImage::setAvail(const bool &avail) {
    m_avail = avail;
    m_avail_isSet = true;
}

bool OAIImage::is_avail_Set() const{
    return m_avail_isSet;
}

bool OAIImage::is_avail_Valid() const{
    return m_avail_isValid;
}

qint32 OAIImage::getSortOrder() const {
    return m_sort_order;
}
void OAIImage::setSortOrder(const qint32 &sort_order) {
    m_sort_order = sort_order;
    m_sort_order_isSet = true;
}

bool OAIImage::is_sort_order_Set() const{
    return m_sort_order_isSet;
}

bool OAIImage::is_sort_order_Valid() const{
    return m_sort_order_isValid;
}

QString OAIImage::getType() const {
    return m_type;
}
void OAIImage::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIImage::is_type_Set() const{
    return m_type_isSet;
}

bool OAIImage::is_type_Valid() const{
    return m_type_isValid;
}

OAIObject OAIImage::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIImage::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIImage::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIImage::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIImage::getCustomFields() const {
    return m_custom_fields;
}
void OAIImage::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIImage::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIImage::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIImage::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_http_path_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_file_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mime_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_create_at.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_modified_at.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_alt_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sort_order_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
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

bool OAIImage::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
