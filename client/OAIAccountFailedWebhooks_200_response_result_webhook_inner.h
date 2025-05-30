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
 * OAIAccountFailedWebhooks_200_response_result_webhook_inner.h
 *
 * 
 */

#ifndef OAIAccountFailedWebhooks_200_response_result_webhook_inner_H
#define OAIAccountFailedWebhooks_200_response_result_webhook_inner_H

#include <QJsonObject>

#include "OAIA2CDateTime.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIA2CDateTime;

class OAIAccountFailedWebhooks_200_response_result_webhook_inner : public OAIObject {
public:
    OAIAccountFailedWebhooks_200_response_result_webhook_inner();
    OAIAccountFailedWebhooks_200_response_result_webhook_inner(QString json);
    ~OAIAccountFailedWebhooks_200_response_result_webhook_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getWebhookId() const;
    void setWebhookId(const qint32 &webhook_id);
    bool is_webhook_id_Set() const;
    bool is_webhook_id_Valid() const;

    QString getEntityId() const;
    void setEntityId(const QString &entity_id);
    bool is_entity_id_Set() const;
    bool is_entity_id_Valid() const;

    OAIA2CDateTime getTime() const;
    void setTime(const OAIA2CDateTime &time);
    bool is_time_Set() const;
    bool is_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_webhook_id;
    bool m_webhook_id_isSet;
    bool m_webhook_id_isValid;

    QString m_entity_id;
    bool m_entity_id_isSet;
    bool m_entity_id_isValid;

    OAIA2CDateTime m_time;
    bool m_time_isSet;
    bool m_time_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAccountFailedWebhooks_200_response_result_webhook_inner)

#endif // OAIAccountFailedWebhooks_200_response_result_webhook_inner_H
