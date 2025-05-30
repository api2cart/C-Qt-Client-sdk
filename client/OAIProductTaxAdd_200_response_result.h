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
 * OAIProductTaxAdd_200_response_result.h
 *
 * 
 */

#ifndef OAIProductTaxAdd_200_response_result_H
#define OAIProductTaxAdd_200_response_result_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductTaxAdd_200_response_result : public OAIObject {
public:
    OAIProductTaxAdd_200_response_result();
    OAIProductTaxAdd_200_response_result(QString json);
    ~OAIProductTaxAdd_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTaxClassId() const;
    void setTaxClassId(const QString &tax_class_id);
    bool is_tax_class_id_Set() const;
    bool is_tax_class_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_tax_class_id;
    bool m_tax_class_id_isSet;
    bool m_tax_class_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductTaxAdd_200_response_result)

#endif // OAIProductTaxAdd_200_response_result_H
