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
 * OAIProductOptionAssign_200_response_result.h
 *
 * 
 */

#ifndef OAIProductOptionAssign_200_response_result_H
#define OAIProductOptionAssign_200_response_result_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductOptionAssign_200_response_result : public OAIObject {
public:
    OAIProductOptionAssign_200_response_result();
    OAIProductOptionAssign_200_response_result(QString json);
    ~OAIProductOptionAssign_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getProductOptionId() const;
    void setProductOptionId(const QString &product_option_id);
    bool is_product_option_id_Set() const;
    bool is_product_option_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_product_option_id;
    bool m_product_option_id_isSet;
    bool m_product_option_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductOptionAssign_200_response_result)

#endif // OAIProductOptionAssign_200_response_result_H
