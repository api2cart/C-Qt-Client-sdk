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
 * OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params_required_inner_inner.h
 *
 * 
 */

#ifndef OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params_required_inner_inner_H
#define OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params_required_inner_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params_required_inner_inner : public OAIObject {
public:
    OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params_required_inner_inner();
    OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params_required_inner_inner(QString json);
    ~OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params_required_inner_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params_required_inner_inner)

#endif // OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params_required_inner_inner_H
