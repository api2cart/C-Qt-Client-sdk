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
 * OAIResponse_Cart_MetaData_List_Result.h
 *
 * 
 */

#ifndef OAIResponse_Cart_MetaData_List_Result_H
#define OAIResponse_Cart_MetaData_List_Result_H

#include <QJsonObject>

#include "OAICart_MetaData.h"
#include "OAIObject.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICart_MetaData;

class OAIResponse_Cart_MetaData_List_Result : public OAIObject {
public:
    OAIResponse_Cart_MetaData_List_Result();
    OAIResponse_Cart_MetaData_List_Result(QString json);
    ~OAIResponse_Cart_MetaData_List_Result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getTotalCount() const;
    void setTotalCount(const qint32 &total_count);
    bool is_total_count_Set() const;
    bool is_total_count_Valid() const;

    QList<OAICart_MetaData> getItems() const;
    void setItems(const QList<OAICart_MetaData> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

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

    qint32 m_total_count;
    bool m_total_count_isSet;
    bool m_total_count_isValid;

    QList<OAICart_MetaData> m_items;
    bool m_items_isSet;
    bool m_items_isValid;

    OAIObject m_additional_fields;
    bool m_additional_fields_isSet;
    bool m_additional_fields_isValid;

    OAIObject m_custom_fields;
    bool m_custom_fields_isSet;
    bool m_custom_fields_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResponse_Cart_MetaData_List_Result)

#endif // OAIResponse_Cart_MetaData_List_Result_H
