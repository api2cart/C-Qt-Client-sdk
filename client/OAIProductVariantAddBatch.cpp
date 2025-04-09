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

#include "OAIProductVariantAddBatch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductVariantAddBatch::OAIProductVariantAddBatch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductVariantAddBatch::OAIProductVariantAddBatch() {
    this->initializeModel();
}

OAIProductVariantAddBatch::~OAIProductVariantAddBatch() {}

void OAIProductVariantAddBatch::initializeModel() {

    m_clear_cache_isSet = false;
    m_clear_cache_isValid = false;

    m_reindex_isSet = false;
    m_reindex_isValid = false;

    m_payload_isSet = false;
    m_payload_isValid = false;
}

void OAIProductVariantAddBatch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductVariantAddBatch::fromJsonObject(QJsonObject json) {

    m_clear_cache_isValid = ::OpenAPI::fromJsonValue(m_clear_cache, json[QString("clear_cache")]);
    m_clear_cache_isSet = !json[QString("clear_cache")].isNull() && m_clear_cache_isValid;

    m_reindex_isValid = ::OpenAPI::fromJsonValue(m_reindex, json[QString("reindex")]);
    m_reindex_isSet = !json[QString("reindex")].isNull() && m_reindex_isValid;

    m_payload_isValid = ::OpenAPI::fromJsonValue(m_payload, json[QString("payload")]);
    m_payload_isSet = !json[QString("payload")].isNull() && m_payload_isValid;
}

QString OAIProductVariantAddBatch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductVariantAddBatch::asJsonObject() const {
    QJsonObject obj;
    if (m_clear_cache_isSet) {
        obj.insert(QString("clear_cache"), ::OpenAPI::toJsonValue(m_clear_cache));
    }
    if (m_reindex_isSet) {
        obj.insert(QString("reindex"), ::OpenAPI::toJsonValue(m_reindex));
    }
    if (m_payload.size() > 0) {
        obj.insert(QString("payload"), ::OpenAPI::toJsonValue(m_payload));
    }
    return obj;
}

bool OAIProductVariantAddBatch::isClearCache() const {
    return m_clear_cache;
}
void OAIProductVariantAddBatch::setClearCache(const bool &clear_cache) {
    m_clear_cache = clear_cache;
    m_clear_cache_isSet = true;
}

bool OAIProductVariantAddBatch::is_clear_cache_Set() const{
    return m_clear_cache_isSet;
}

bool OAIProductVariantAddBatch::is_clear_cache_Valid() const{
    return m_clear_cache_isValid;
}

bool OAIProductVariantAddBatch::isReindex() const {
    return m_reindex;
}
void OAIProductVariantAddBatch::setReindex(const bool &reindex) {
    m_reindex = reindex;
    m_reindex_isSet = true;
}

bool OAIProductVariantAddBatch::is_reindex_Set() const{
    return m_reindex_isSet;
}

bool OAIProductVariantAddBatch::is_reindex_Valid() const{
    return m_reindex_isValid;
}

QList<OAIProductVariantAddBatch_payload_inner> OAIProductVariantAddBatch::getPayload() const {
    return m_payload;
}
void OAIProductVariantAddBatch::setPayload(const QList<OAIProductVariantAddBatch_payload_inner> &payload) {
    m_payload = payload;
    m_payload_isSet = true;
}

bool OAIProductVariantAddBatch::is_payload_Set() const{
    return m_payload_isSet;
}

bool OAIProductVariantAddBatch::is_payload_Valid() const{
    return m_payload_isValid;
}

bool OAIProductVariantAddBatch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_clear_cache_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reindex_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_payload.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductVariantAddBatch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_payload_isValid && true;
}

} // namespace OpenAPI
