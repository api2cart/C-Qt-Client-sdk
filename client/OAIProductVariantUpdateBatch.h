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
 * OAIProductVariantUpdateBatch.h
 *
 * 
 */

#ifndef OAIProductVariantUpdateBatch_H
#define OAIProductVariantUpdateBatch_H

#include <QJsonObject>

#include "OAIProductVariantUpdateBatch_payload_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIProductVariantUpdateBatch_payload_inner;

class OAIProductVariantUpdateBatch : public OAIObject {
public:
    OAIProductVariantUpdateBatch();
    OAIProductVariantUpdateBatch(QString json);
    ~OAIProductVariantUpdateBatch() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getNestedItemsUpdateBehaviour() const;
    void setNestedItemsUpdateBehaviour(const QString &nested_items_update_behaviour);
    bool is_nested_items_update_behaviour_Set() const;
    bool is_nested_items_update_behaviour_Valid() const;

    bool isClearCache() const;
    void setClearCache(const bool &clear_cache);
    bool is_clear_cache_Set() const;
    bool is_clear_cache_Valid() const;

    bool isReindex() const;
    void setReindex(const bool &reindex);
    bool is_reindex_Set() const;
    bool is_reindex_Valid() const;

    QList<OAIProductVariantUpdateBatch_payload_inner> getPayload() const;
    void setPayload(const QList<OAIProductVariantUpdateBatch_payload_inner> &payload);
    bool is_payload_Set() const;
    bool is_payload_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_nested_items_update_behaviour;
    bool m_nested_items_update_behaviour_isSet;
    bool m_nested_items_update_behaviour_isValid;

    bool m_clear_cache;
    bool m_clear_cache_isSet;
    bool m_clear_cache_isValid;

    bool m_reindex;
    bool m_reindex_isSet;
    bool m_reindex_isValid;

    QList<OAIProductVariantUpdateBatch_payload_inner> m_payload;
    bool m_payload_isSet;
    bool m_payload_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductVariantUpdateBatch)

#endif // OAIProductVariantUpdateBatch_H
