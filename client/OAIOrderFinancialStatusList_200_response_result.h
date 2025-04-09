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
 * OAIOrderFinancialStatusList_200_response_result.h
 *
 * 
 */

#ifndef OAIOrderFinancialStatusList_200_response_result_H
#define OAIOrderFinancialStatusList_200_response_result_H

#include <QJsonObject>

#include "OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner;

class OAIOrderFinancialStatusList_200_response_result : public OAIObject {
public:
    OAIOrderFinancialStatusList_200_response_result();
    OAIOrderFinancialStatusList_200_response_result(QString json);
    ~OAIOrderFinancialStatusList_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner> getOrderFinancialStatuses() const;
    void setOrderFinancialStatuses(const QList<OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner> &order_financial_statuses);
    bool is_order_financial_statuses_Set() const;
    bool is_order_financial_statuses_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner> m_order_financial_statuses;
    bool m_order_financial_statuses_isSet;
    bool m_order_financial_statuses_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderFinancialStatusList_200_response_result)

#endif // OAIOrderFinancialStatusList_200_response_result_H
