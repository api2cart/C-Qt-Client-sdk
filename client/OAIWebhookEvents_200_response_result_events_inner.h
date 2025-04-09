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

/*
 * OAIWebhookEvents_200_response_result_events_inner.h
 *
 * 
 */

#ifndef OAIWebhookEvents_200_response_result_events_inner_H
#define OAIWebhookEvents_200_response_result_events_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIWebhookEvents_200_response_result_events_inner : public OAIObject {
public:
    OAIWebhookEvents_200_response_result_events_inner();
    OAIWebhookEvents_200_response_result_events_inner(QString json);
    ~OAIWebhookEvents_200_response_result_events_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getWebhookName() const;
    void setWebhookName(const QString &webhook_name);
    bool is_webhook_name_Set() const;
    bool is_webhook_name_Valid() const;

    QString getEntity() const;
    void setEntity(const QString &entity);
    bool is_entity_Set() const;
    bool is_entity_Valid() const;

    QString getAction() const;
    void setAction(const QString &action);
    bool is_action_Set() const;
    bool is_action_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_webhook_name;
    bool m_webhook_name_isSet;
    bool m_webhook_name_isValid;

    QString m_entity;
    bool m_entity_isSet;
    bool m_entity_isValid;

    QString m_action;
    bool m_action_isSet;
    bool m_action_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhookEvents_200_response_result_events_inner)

#endif // OAIWebhookEvents_200_response_result_events_inner_H
