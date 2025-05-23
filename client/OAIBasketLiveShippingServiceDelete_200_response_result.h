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
 * OAIBasketLiveShippingServiceDelete_200_response_result.h
 *
 * 
 */

#ifndef OAIBasketLiveShippingServiceDelete_200_response_result_H
#define OAIBasketLiveShippingServiceDelete_200_response_result_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBasketLiveShippingServiceDelete_200_response_result : public OAIObject {
public:
    OAIBasketLiveShippingServiceDelete_200_response_result();
    OAIBasketLiveShippingServiceDelete_200_response_result(QString json);
    ~OAIBasketLiveShippingServiceDelete_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isStatus() const;
    void setStatus(const bool &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_status;
    bool m_status_isSet;
    bool m_status_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBasketLiveShippingServiceDelete_200_response_result)

#endif // OAIBasketLiveShippingServiceDelete_200_response_result_H
