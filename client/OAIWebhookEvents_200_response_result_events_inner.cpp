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

#include "OAIWebhookEvents_200_response_result_events_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhookEvents_200_response_result_events_inner::OAIWebhookEvents_200_response_result_events_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhookEvents_200_response_result_events_inner::OAIWebhookEvents_200_response_result_events_inner() {
    this->initializeModel();
}

OAIWebhookEvents_200_response_result_events_inner::~OAIWebhookEvents_200_response_result_events_inner() {}

void OAIWebhookEvents_200_response_result_events_inner::initializeModel() {

    m_webhook_name_isSet = false;
    m_webhook_name_isValid = false;

    m_entity_isSet = false;
    m_entity_isValid = false;

    m_action_isSet = false;
    m_action_isValid = false;
}

void OAIWebhookEvents_200_response_result_events_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhookEvents_200_response_result_events_inner::fromJsonObject(QJsonObject json) {

    m_webhook_name_isValid = ::OpenAPI::fromJsonValue(m_webhook_name, json[QString("webhook_name")]);
    m_webhook_name_isSet = !json[QString("webhook_name")].isNull() && m_webhook_name_isValid;

    m_entity_isValid = ::OpenAPI::fromJsonValue(m_entity, json[QString("entity")]);
    m_entity_isSet = !json[QString("entity")].isNull() && m_entity_isValid;

    m_action_isValid = ::OpenAPI::fromJsonValue(m_action, json[QString("action")]);
    m_action_isSet = !json[QString("action")].isNull() && m_action_isValid;
}

QString OAIWebhookEvents_200_response_result_events_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhookEvents_200_response_result_events_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_webhook_name_isSet) {
        obj.insert(QString("webhook_name"), ::OpenAPI::toJsonValue(m_webhook_name));
    }
    if (m_entity_isSet) {
        obj.insert(QString("entity"), ::OpenAPI::toJsonValue(m_entity));
    }
    if (m_action_isSet) {
        obj.insert(QString("action"), ::OpenAPI::toJsonValue(m_action));
    }
    return obj;
}

QString OAIWebhookEvents_200_response_result_events_inner::getWebhookName() const {
    return m_webhook_name;
}
void OAIWebhookEvents_200_response_result_events_inner::setWebhookName(const QString &webhook_name) {
    m_webhook_name = webhook_name;
    m_webhook_name_isSet = true;
}

bool OAIWebhookEvents_200_response_result_events_inner::is_webhook_name_Set() const{
    return m_webhook_name_isSet;
}

bool OAIWebhookEvents_200_response_result_events_inner::is_webhook_name_Valid() const{
    return m_webhook_name_isValid;
}

QString OAIWebhookEvents_200_response_result_events_inner::getEntity() const {
    return m_entity;
}
void OAIWebhookEvents_200_response_result_events_inner::setEntity(const QString &entity) {
    m_entity = entity;
    m_entity_isSet = true;
}

bool OAIWebhookEvents_200_response_result_events_inner::is_entity_Set() const{
    return m_entity_isSet;
}

bool OAIWebhookEvents_200_response_result_events_inner::is_entity_Valid() const{
    return m_entity_isValid;
}

QString OAIWebhookEvents_200_response_result_events_inner::getAction() const {
    return m_action;
}
void OAIWebhookEvents_200_response_result_events_inner::setAction(const QString &action) {
    m_action = action;
    m_action_isSet = true;
}

bool OAIWebhookEvents_200_response_result_events_inner::is_action_Set() const{
    return m_action_isSet;
}

bool OAIWebhookEvents_200_response_result_events_inner::is_action_Valid() const{
    return m_action_isValid;
}

bool OAIWebhookEvents_200_response_result_events_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_webhook_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_entity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhookEvents_200_response_result_events_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
