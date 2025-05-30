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
 * OAIAccountSupportedPlatforms_200_response_result.h
 *
 * 
 */

#ifndef OAIAccountSupportedPlatforms_200_response_result_H
#define OAIAccountSupportedPlatforms_200_response_result_H

#include <QJsonObject>

#include "OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner;

class OAIAccountSupportedPlatforms_200_response_result : public OAIObject {
public:
    OAIAccountSupportedPlatforms_200_response_result();
    OAIAccountSupportedPlatforms_200_response_result(QString json);
    ~OAIAccountSupportedPlatforms_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner> getSupportedPlatforms() const;
    void setSupportedPlatforms(const QList<OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner> &supported_platforms);
    bool is_supported_platforms_Set() const;
    bool is_supported_platforms_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner> m_supported_platforms;
    bool m_supported_platforms_isSet;
    bool m_supported_platforms_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAccountSupportedPlatforms_200_response_result)

#endif // OAIAccountSupportedPlatforms_200_response_result_H
