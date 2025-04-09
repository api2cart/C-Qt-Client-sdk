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

#include "OAIAccountCartAdd_hybris_websites_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAccountCartAdd_hybris_websites_inner::OAIAccountCartAdd_hybris_websites_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAccountCartAdd_hybris_websites_inner::OAIAccountCartAdd_hybris_websites_inner() {
    this->initializeModel();
}

OAIAccountCartAdd_hybris_websites_inner::~OAIAccountCartAdd_hybris_websites_inner() {}

void OAIAccountCartAdd_hybris_websites_inner::initializeModel() {

    m_uid_isSet = false;
    m_uid_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_store_ids_isSet = false;
    m_store_ids_isValid = false;
}

void OAIAccountCartAdd_hybris_websites_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAccountCartAdd_hybris_websites_inner::fromJsonObject(QJsonObject json) {

    m_uid_isValid = ::OpenAPI::fromJsonValue(m_uid, json[QString("uid")]);
    m_uid_isSet = !json[QString("uid")].isNull() && m_uid_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_store_ids_isValid = ::OpenAPI::fromJsonValue(m_store_ids, json[QString("storeIds")]);
    m_store_ids_isSet = !json[QString("storeIds")].isNull() && m_store_ids_isValid;
}

QString OAIAccountCartAdd_hybris_websites_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAccountCartAdd_hybris_websites_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_uid_isSet) {
        obj.insert(QString("uid"), ::OpenAPI::toJsonValue(m_uid));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(m_url));
    }
    if (m_store_ids.size() > 0) {
        obj.insert(QString("storeIds"), ::OpenAPI::toJsonValue(m_store_ids));
    }
    return obj;
}

QString OAIAccountCartAdd_hybris_websites_inner::getUid() const {
    return m_uid;
}
void OAIAccountCartAdd_hybris_websites_inner::setUid(const QString &uid) {
    m_uid = uid;
    m_uid_isSet = true;
}

bool OAIAccountCartAdd_hybris_websites_inner::is_uid_Set() const{
    return m_uid_isSet;
}

bool OAIAccountCartAdd_hybris_websites_inner::is_uid_Valid() const{
    return m_uid_isValid;
}

QString OAIAccountCartAdd_hybris_websites_inner::getUrl() const {
    return m_url;
}
void OAIAccountCartAdd_hybris_websites_inner::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIAccountCartAdd_hybris_websites_inner::is_url_Set() const{
    return m_url_isSet;
}

bool OAIAccountCartAdd_hybris_websites_inner::is_url_Valid() const{
    return m_url_isValid;
}

QList<QString> OAIAccountCartAdd_hybris_websites_inner::getStoreIds() const {
    return m_store_ids;
}
void OAIAccountCartAdd_hybris_websites_inner::setStoreIds(const QList<QString> &store_ids) {
    m_store_ids = store_ids;
    m_store_ids_isSet = true;
}

bool OAIAccountCartAdd_hybris_websites_inner::is_store_ids_Set() const{
    return m_store_ids_isSet;
}

bool OAIAccountCartAdd_hybris_websites_inner::is_store_ids_Valid() const{
    return m_store_ids_isValid;
}

bool OAIAccountCartAdd_hybris_websites_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_uid_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_store_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAccountCartAdd_hybris_websites_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_uid_isValid && m_url_isValid && m_store_ids_isValid && true;
}

} // namespace OpenAPI
