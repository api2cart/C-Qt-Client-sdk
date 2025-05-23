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
 * OAIResponse_Order_PreestimateShipping_List_Result.h
 *
 * 
 */

#ifndef OAIResponse_Order_PreestimateShipping_List_Result_H
#define OAIResponse_Order_PreestimateShipping_List_Result_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAIOrder_PreestimateShipping.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIOrder_PreestimateShipping;

class OAIResponse_Order_PreestimateShipping_List_Result : public OAIObject {
public:
    OAIResponse_Order_PreestimateShipping_List_Result();
    OAIResponse_Order_PreestimateShipping_List_Result(QString json);
    ~OAIResponse_Order_PreestimateShipping_List_Result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPreestimateShippingsCount() const;
    void setPreestimateShippingsCount(const qint32 &preestimate_shippings_count);
    bool is_preestimate_shippings_count_Set() const;
    bool is_preestimate_shippings_count_Valid() const;

    QList<OAIOrder_PreestimateShipping> getPreestimateShippings() const;
    void setPreestimateShippings(const QList<OAIOrder_PreestimateShipping> &preestimate_shippings);
    bool is_preestimate_shippings_Set() const;
    bool is_preestimate_shippings_Valid() const;

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

    qint32 m_preestimate_shippings_count;
    bool m_preestimate_shippings_count_isSet;
    bool m_preestimate_shippings_count_isValid;

    QList<OAIOrder_PreestimateShipping> m_preestimate_shippings;
    bool m_preestimate_shippings_isSet;
    bool m_preestimate_shippings_isValid;

    OAIObject m_additional_fields;
    bool m_additional_fields_isSet;
    bool m_additional_fields_isValid;

    OAIObject m_custom_fields;
    bool m_custom_fields_isSet;
    bool m_custom_fields_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResponse_Order_PreestimateShipping_List_Result)

#endif // OAIResponse_Order_PreestimateShipping_List_Result_H
