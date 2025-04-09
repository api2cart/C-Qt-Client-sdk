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

#include "OAIProductUpdateBatch_payload_inner_images_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductUpdateBatch_payload_inner_images_inner::OAIProductUpdateBatch_payload_inner_images_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductUpdateBatch_payload_inner_images_inner::OAIProductUpdateBatch_payload_inner_images_inner() {
    this->initializeModel();
}

OAIProductUpdateBatch_payload_inner_images_inner::~OAIProductUpdateBatch_payload_inner_images_inner() {}

void OAIProductUpdateBatch_payload_inner_images_inner::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_label_isSet = false;
    m_label_isValid = false;

    m_position_isSet = false;
    m_position_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;
}

void OAIProductUpdateBatch_payload_inner_images_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductUpdateBatch_payload_inner_images_inner::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_label_isValid = ::OpenAPI::fromJsonValue(m_label, json[QString("label")]);
    m_label_isSet = !json[QString("label")].isNull() && m_label_isValid;

    m_position_isValid = ::OpenAPI::fromJsonValue(m_position, json[QString("position")]);
    m_position_isSet = !json[QString("position")].isNull() && m_position_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;
}

QString OAIProductUpdateBatch_payload_inner_images_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductUpdateBatch_payload_inner_images_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(m_url));
    }
    if (m_label_isSet) {
        obj.insert(QString("label"), ::OpenAPI::toJsonValue(m_label));
    }
    if (m_position_isSet) {
        obj.insert(QString("position"), ::OpenAPI::toJsonValue(m_position));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    return obj;
}

QString OAIProductUpdateBatch_payload_inner_images_inner::getId() const {
    return m_id;
}
void OAIProductUpdateBatch_payload_inner_images_inner::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_id_Set() const{
    return m_id_isSet;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIProductUpdateBatch_payload_inner_images_inner::getName() const {
    return m_name;
}
void OAIProductUpdateBatch_payload_inner_images_inner::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_name_Set() const{
    return m_name_isSet;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIProductUpdateBatch_payload_inner_images_inner::getUrl() const {
    return m_url;
}
void OAIProductUpdateBatch_payload_inner_images_inner::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_url_Set() const{
    return m_url_isSet;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIProductUpdateBatch_payload_inner_images_inner::getLabel() const {
    return m_label;
}
void OAIProductUpdateBatch_payload_inner_images_inner::setLabel(const QString &label) {
    m_label = label;
    m_label_isSet = true;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_label_Set() const{
    return m_label_isSet;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_label_Valid() const{
    return m_label_isValid;
}

qint32 OAIProductUpdateBatch_payload_inner_images_inner::getPosition() const {
    return m_position;
}
void OAIProductUpdateBatch_payload_inner_images_inner::setPosition(const qint32 &position) {
    m_position = position;
    m_position_isSet = true;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_position_Set() const{
    return m_position_isSet;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_position_Valid() const{
    return m_position_isValid;
}

QString OAIProductUpdateBatch_payload_inner_images_inner::getType() const {
    return m_type;
}
void OAIProductUpdateBatch_payload_inner_images_inner::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_type_Set() const{
    return m_type_isSet;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::is_type_Valid() const{
    return m_type_isValid;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::isSet() const {
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

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_position_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductUpdateBatch_payload_inner_images_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_url_isValid && true;
}

} // namespace OpenAPI
