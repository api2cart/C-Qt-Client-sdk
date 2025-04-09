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
 * OAIReturnReasonList_200_response_result.h
 *
 * 
 */

#ifndef OAIReturnReasonList_200_response_result_H
#define OAIReturnReasonList_200_response_result_H

#include <QJsonObject>

#include "OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner;

class OAIReturnReasonList_200_response_result : public OAIObject {
public:
    OAIReturnReasonList_200_response_result();
    OAIReturnReasonList_200_response_result(QString json);
    ~OAIReturnReasonList_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner> getReturnReasons() const;
    void setReturnReasons(const QList<OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner> &return_reasons);
    bool is_return_reasons_Set() const;
    bool is_return_reasons_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner> m_return_reasons;
    bool m_return_reasons_isSet;
    bool m_return_reasons_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIReturnReasonList_200_response_result)

#endif // OAIReturnReasonList_200_response_result_H
