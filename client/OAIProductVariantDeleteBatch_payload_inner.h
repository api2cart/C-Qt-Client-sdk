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
 * OAIProductVariantDeleteBatch_payload_inner.h
 *
 * 
 */

#ifndef OAIProductVariantDeleteBatch_payload_inner_H
#define OAIProductVariantDeleteBatch_payload_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductVariantDeleteBatch_payload_inner : public OAIObject {
public:
    OAIProductVariantDeleteBatch_payload_inner();
    OAIProductVariantDeleteBatch_payload_inner(QString json);
    ~OAIProductVariantDeleteBatch_payload_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getProductId() const;
    void setProductId(const QString &product_id);
    bool is_product_id_Set() const;
    bool is_product_id_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getStoreId() const;
    void setStoreId(const QString &store_id);
    bool is_store_id_Set() const;
    bool is_store_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_product_id;
    bool m_product_id_isSet;
    bool m_product_id_isValid;

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_store_id;
    bool m_store_id_isSet;
    bool m_store_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductVariantDeleteBatch_payload_inner)

#endif // OAIProductVariantDeleteBatch_payload_inner_H
