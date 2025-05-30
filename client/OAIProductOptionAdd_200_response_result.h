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
 * OAIProductOptionAdd_200_response_result.h
 *
 * 
 */

#ifndef OAIProductOptionAdd_200_response_result_H
#define OAIProductOptionAdd_200_response_result_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductOptionAdd_200_response_result : public OAIObject {
public:
    OAIProductOptionAdd_200_response_result();
    OAIProductOptionAdd_200_response_result(QString json);
    ~OAIProductOptionAdd_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getOptionId() const;
    void setOptionId(const QString &option_id);
    bool is_option_id_Set() const;
    bool is_option_id_Valid() const;

    QString getProductOptionId() const;
    void setProductOptionId(const QString &product_option_id);
    bool is_product_option_id_Set() const;
    bool is_product_option_id_Valid() const;

    QString getProductValueIds() const;
    void setProductValueIds(const QString &product_value_ids);
    bool is_product_value_ids_Set() const;
    bool is_product_value_ids_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_option_id;
    bool m_option_id_isSet;
    bool m_option_id_isValid;

    QString m_product_option_id;
    bool m_product_option_id_isSet;
    bool m_product_option_id_isValid;

    QString m_product_value_ids;
    bool m_product_value_ids_isSet;
    bool m_product_value_ids_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductOptionAdd_200_response_result)

#endif // OAIProductOptionAdd_200_response_result_H
