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
 * OAIOrderCount_200_response_result.h
 *
 * 
 */

#ifndef OAIOrderCount_200_response_result_H
#define OAIOrderCount_200_response_result_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOrderCount_200_response_result : public OAIObject {
public:
    OAIOrderCount_200_response_result();
    OAIOrderCount_200_response_result(QString json);
    ~OAIOrderCount_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getOrdersCount() const;
    void setOrdersCount(const qint32 &orders_count);
    bool is_orders_count_Set() const;
    bool is_orders_count_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_orders_count;
    bool m_orders_count_isSet;
    bool m_orders_count_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderCount_200_response_result)

#endif // OAIOrderCount_200_response_result_H
