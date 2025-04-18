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
 * OAIProductAttributeValueSet_200_response_result.h
 *
 * 
 */

#ifndef OAIProductAttributeValueSet_200_response_result_H
#define OAIProductAttributeValueSet_200_response_result_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductAttributeValueSet_200_response_result : public OAIObject {
public:
    OAIProductAttributeValueSet_200_response_result();
    OAIProductAttributeValueSet_200_response_result(QString json);
    ~OAIProductAttributeValueSet_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getProductId() const;
    void setProductId(const QString &product_id);
    bool is_product_id_Set() const;
    bool is_product_id_Valid() const;

    QString getAttributeId() const;
    void setAttributeId(const QString &attribute_id);
    bool is_attribute_id_Set() const;
    bool is_attribute_id_Valid() const;

    QString getValueId() const;
    void setValueId(const QString &value_id);
    bool is_value_id_Set() const;
    bool is_value_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_product_id;
    bool m_product_id_isSet;
    bool m_product_id_isValid;

    QString m_attribute_id;
    bool m_attribute_id_isSet;
    bool m_attribute_id_isValid;

    QString m_value_id;
    bool m_value_id_isSet;
    bool m_value_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductAttributeValueSet_200_response_result)

#endif // OAIProductAttributeValueSet_200_response_result_H
