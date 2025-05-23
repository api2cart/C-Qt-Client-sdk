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
 * OAIWebhookList_200_response_result.h
 *
 * 
 */

#ifndef OAIWebhookList_200_response_result_H
#define OAIWebhookList_200_response_result_H

#include <QJsonObject>

#include "OAIWebhook.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIWebhook;

class OAIWebhookList_200_response_result : public OAIObject {
public:
    OAIWebhookList_200_response_result();
    OAIWebhookList_200_response_result(QString json);
    ~OAIWebhookList_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIWebhook> getWebhook() const;
    void setWebhook(const QList<OAIWebhook> &webhook);
    bool is_webhook_Set() const;
    bool is_webhook_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIWebhook> m_webhook;
    bool m_webhook_isSet;
    bool m_webhook_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhookList_200_response_result)

#endif // OAIWebhookList_200_response_result_H
