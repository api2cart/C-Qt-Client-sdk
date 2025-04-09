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
 * OAIResponse_Product_Attribute_List_Result.h
 *
 * 
 */

#ifndef OAIResponse_Product_Attribute_List_Result_H
#define OAIResponse_Product_Attribute_List_Result_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAIProduct_Attribute.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIProduct_Attribute;

class OAIResponse_Product_Attribute_List_Result : public OAIObject {
public:
    OAIResponse_Product_Attribute_List_Result();
    OAIResponse_Product_Attribute_List_Result(QString json);
    ~OAIResponse_Product_Attribute_List_Result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIProduct_Attribute> getAttribute() const;
    void setAttribute(const QList<OAIProduct_Attribute> &attribute);
    bool is_attribute_Set() const;
    bool is_attribute_Valid() const;

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

    QList<OAIProduct_Attribute> m_attribute;
    bool m_attribute_isSet;
    bool m_attribute_isValid;

    OAIObject m_additional_fields;
    bool m_additional_fields_isSet;
    bool m_additional_fields_isValid;

    OAIObject m_custom_fields;
    bool m_custom_fields_isSet;
    bool m_custom_fields_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResponse_Product_Attribute_List_Result)

#endif // OAIResponse_Product_Attribute_List_Result_H
