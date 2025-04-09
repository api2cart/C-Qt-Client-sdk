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
 * OAIProductVariantAddBatch_payload_inner_combination_inner.h
 *
 * 
 */

#ifndef OAIProductVariantAddBatch_payload_inner_combination_inner_H
#define OAIProductVariantAddBatch_payload_inner_combination_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductVariantAddBatch_payload_inner_combination_inner : public OAIObject {
public:
    OAIProductVariantAddBatch_payload_inner_combination_inner();
    OAIProductVariantAddBatch_payload_inner_combination_inner(QString json);
    ~OAIProductVariantAddBatch_payload_inner_combination_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getOptionName() const;
    void setOptionName(const QString &option_name);
    bool is_option_name_Set() const;
    bool is_option_name_Valid() const;

    QString getOptionValueName() const;
    void setOptionValueName(const QString &option_value_name);
    bool is_option_value_name_Set() const;
    bool is_option_value_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_option_name;
    bool m_option_name_isSet;
    bool m_option_name_isValid;

    QString m_option_value_name;
    bool m_option_value_name_isSet;
    bool m_option_value_name_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductVariantAddBatch_payload_inner_combination_inner)

#endif // OAIProductVariantAddBatch_payload_inner_combination_inner_H
