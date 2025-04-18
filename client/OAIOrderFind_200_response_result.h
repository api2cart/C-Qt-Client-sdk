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
 * OAIOrderFind_200_response_result.h
 *
 * 
 */

#ifndef OAIOrderFind_200_response_result_H
#define OAIOrderFind_200_response_result_H

#include <QJsonObject>

#include "OAIOrder.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIOrder;

class OAIOrderFind_200_response_result : public OAIObject {
public:
    OAIOrderFind_200_response_result();
    OAIOrderFind_200_response_result(QString json);
    ~OAIOrderFind_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIOrder> getOrder() const;
    void setOrder(const QList<OAIOrder> &order);
    bool is_order_Set() const;
    bool is_order_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIOrder> m_order;
    bool m_order_isSet;
    bool m_order_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderFind_200_response_result)

#endif // OAIOrderFind_200_response_result_H
