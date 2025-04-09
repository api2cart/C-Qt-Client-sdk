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
 * OAIProduct_Option.h
 *
 * 
 */

#ifndef OAIProduct_Option_H
#define OAIProduct_Option_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAIProduct_Option_Item.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIProduct_Option_Item;

class OAIProduct_Option : public OAIObject {
public:
    OAIProduct_Option();
    OAIProduct_Option(QString json);
    ~OAIProduct_Option() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getProductOptionId() const;
    void setProductOptionId(const QString &product_option_id);
    bool is_product_option_id_Set() const;
    bool is_product_option_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    qint32 getSortOrder() const;
    void setSortOrder(const qint32 &sort_order);
    bool is_sort_order_Set() const;
    bool is_sort_order_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    bool isRequired() const;
    void setRequired(const bool &required);
    bool is_required_Set() const;
    bool is_required_Valid() const;

    bool isAvailable() const;
    void setAvailable(const bool &available);
    bool is_available_Set() const;
    bool is_available_Valid() const;

    bool isUsedInCombination() const;
    void setUsedInCombination(const bool &used_in_combination);
    bool is_used_in_combination_Set() const;
    bool is_used_in_combination_Valid() const;

    QList<OAIProduct_Option_Item> getOptionItems() const;
    void setOptionItems(const QList<OAIProduct_Option_Item> &option_items);
    bool is_option_items_Set() const;
    bool is_option_items_Valid() const;

    OAIObject getAdditionalFields() const;
    void setAdditionalFields(const OAIObject &additional_fields);
    bool is_additional_fields_Set() const;
    bool is_additional_fields_Valid() const;

    OAIObject getCustomFields() const;
    void setCustomFields(const OAIObject &custom_fields);
    bool is_custom_fields_Set() const;
    bool is_custom_fields_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_product_option_id;
    bool m_product_option_id_isSet;
    bool m_product_option_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    qint32 m_sort_order;
    bool m_sort_order_isSet;
    bool m_sort_order_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    bool m_required;
    bool m_required_isSet;
    bool m_required_isValid;

    bool m_available;
    bool m_available_isSet;
    bool m_available_isValid;

    bool m_used_in_combination;
    bool m_used_in_combination_isSet;
    bool m_used_in_combination_isValid;

    QList<OAIProduct_Option_Item> m_option_items;
    bool m_option_items_isSet;
    bool m_option_items_isValid;

    OAIObject m_additional_fields;
    bool m_additional_fields_isSet;
    bool m_additional_fields_isValid;

    OAIObject m_custom_fields;
    bool m_custom_fields_isSet;
    bool m_custom_fields_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProduct_Option)

#endif // OAIProduct_Option_H
