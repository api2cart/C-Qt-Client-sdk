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
 * OAICartCouponAdd_200_response_result.h
 *
 * 
 */

#ifndef OAICartCouponAdd_200_response_result_H
#define OAICartCouponAdd_200_response_result_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICartCouponAdd_200_response_result : public OAIObject {
public:
    OAICartCouponAdd_200_response_result();
    OAICartCouponAdd_200_response_result(QString json);
    ~OAICartCouponAdd_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCouponId() const;
    void setCouponId(const QString &coupon_id);
    bool is_coupon_id_Set() const;
    bool is_coupon_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_coupon_id;
    bool m_coupon_id_isSet;
    bool m_coupon_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICartCouponAdd_200_response_result)

#endif // OAICartCouponAdd_200_response_result_H
