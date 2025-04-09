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

#include "OAIProductVariantUpdateBatch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductVariantUpdateBatch::OAIProductVariantUpdateBatch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductVariantUpdateBatch::OAIProductVariantUpdateBatch() {
    this->initializeModel();
}

OAIProductVariantUpdateBatch::~OAIProductVariantUpdateBatch() {}

void OAIProductVariantUpdateBatch::initializeModel() {

    m_nested_items_update_behaviour_isSet = false;
    m_nested_items_update_behaviour_isValid = false;

    m_clear_cache_isSet = false;
    m_clear_cache_isValid = false;

    m_reindex_isSet = false;
    m_reindex_isValid = false;

    m_payload_isSet = false;
    m_payload_isValid = false;
}

void OAIProductVariantUpdateBatch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductVariantUpdateBatch::fromJsonObject(QJsonObject json) {

    m_nested_items_update_behaviour_isValid = ::OpenAPI::fromJsonValue(m_nested_items_update_behaviour, json[QString("nested_items_update_behaviour")]);
    m_nested_items_update_behaviour_isSet = !json[QString("nested_items_update_behaviour")].isNull() && m_nested_items_update_behaviour_isValid;

    m_clear_cache_isValid = ::OpenAPI::fromJsonValue(m_clear_cache, json[QString("clear_cache")]);
    m_clear_cache_isSet = !json[QString("clear_cache")].isNull() && m_clear_cache_isValid;

    m_reindex_isValid = ::OpenAPI::fromJsonValue(m_reindex, json[QString("reindex")]);
    m_reindex_isSet = !json[QString("reindex")].isNull() && m_reindex_isValid;

    m_payload_isValid = ::OpenAPI::fromJsonValue(m_payload, json[QString("payload")]);
    m_payload_isSet = !json[QString("payload")].isNull() && m_payload_isValid;
}

QString OAIProductVariantUpdateBatch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductVariantUpdateBatch::asJsonObject() const {
    QJsonObject obj;
    if (m_nested_items_update_behaviour_isSet) {
        obj.insert(QString("nested_items_update_behaviour"), ::OpenAPI::toJsonValue(m_nested_items_update_behaviour));
    }
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

QString OAIProductVariantUpdateBatch::getNestedItemsUpdateBehaviour() const {
    return m_nested_items_update_behaviour;
}
void OAIProductVariantUpdateBatch::setNestedItemsUpdateBehaviour(const QString &nested_items_update_behaviour) {
    m_nested_items_update_behaviour = nested_items_update_behaviour;
    m_nested_items_update_behaviour_isSet = true;
}

bool OAIProductVariantUpdateBatch::is_nested_items_update_behaviour_Set() const{
    return m_nested_items_update_behaviour_isSet;
}

bool OAIProductVariantUpdateBatch::is_nested_items_update_behaviour_Valid() const{
    return m_nested_items_update_behaviour_isValid;
}

bool OAIProductVariantUpdateBatch::isClearCache() const {
    return m_clear_cache;
}
void OAIProductVariantUpdateBatch::setClearCache(const bool &clear_cache) {
    m_clear_cache = clear_cache;
    m_clear_cache_isSet = true;
}

bool OAIProductVariantUpdateBatch::is_clear_cache_Set() const{
    return m_clear_cache_isSet;
}

bool OAIProductVariantUpdateBatch::is_clear_cache_Valid() const{
    return m_clear_cache_isValid;
}

bool OAIProductVariantUpdateBatch::isReindex() const {
    return m_reindex;
}
void OAIProductVariantUpdateBatch::setReindex(const bool &reindex) {
    m_reindex = reindex;
    m_reindex_isSet = true;
}

bool OAIProductVariantUpdateBatch::is_reindex_Set() const{
    return m_reindex_isSet;
}

bool OAIProductVariantUpdateBatch::is_reindex_Valid() const{
    return m_reindex_isValid;
}

QList<OAIProductVariantUpdateBatch_payload_inner> OAIProductVariantUpdateBatch::getPayload() const {
    return m_payload;
}
void OAIProductVariantUpdateBatch::setPayload(const QList<OAIProductVariantUpdateBatch_payload_inner> &payload) {
    m_payload = payload;
    m_payload_isSet = true;
}

bool OAIProductVariantUpdateBatch::is_payload_Set() const{
    return m_payload_isSet;
}

bool OAIProductVariantUpdateBatch::is_payload_Valid() const{
    return m_payload_isValid;
}

bool OAIProductVariantUpdateBatch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_nested_items_update_behaviour_isSet) {
            isObjectUpdated = true;
            break;
        }

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

bool OAIProductVariantUpdateBatch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_payload_isValid && true;
}

} // namespace OpenAPI
