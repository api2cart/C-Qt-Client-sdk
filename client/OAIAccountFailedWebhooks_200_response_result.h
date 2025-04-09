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
 * OAIAccountFailedWebhooks_200_response_result.h
 *
 * 
 */

#ifndef OAIAccountFailedWebhooks_200_response_result_H
#define OAIAccountFailedWebhooks_200_response_result_H

#include <QJsonObject>

#include "OAIAccountFailedWebhooks_200_response_result_webhook_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAccountFailedWebhooks_200_response_result_webhook_inner;

class OAIAccountFailedWebhooks_200_response_result : public OAIObject {
public:
    OAIAccountFailedWebhooks_200_response_result();
    OAIAccountFailedWebhooks_200_response_result(QString json);
    ~OAIAccountFailedWebhooks_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAllFailedWebhook() const;
    void setAllFailedWebhook(const QString &all_failed_webhook);
    bool is_all_failed_webhook_Set() const;
    bool is_all_failed_webhook_Valid() const;

    QList<OAIAccountFailedWebhooks_200_response_result_webhook_inner> getWebhook() const;
    void setWebhook(const QList<OAIAccountFailedWebhooks_200_response_result_webhook_inner> &webhook);
    bool is_webhook_Set() const;
    bool is_webhook_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_all_failed_webhook;
    bool m_all_failed_webhook_isSet;
    bool m_all_failed_webhook_isValid;

    QList<OAIAccountFailedWebhooks_200_response_result_webhook_inner> m_webhook;
    bool m_webhook_isSet;
    bool m_webhook_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAccountFailedWebhooks_200_response_result)

#endif // OAIAccountFailedWebhooks_200_response_result_H
