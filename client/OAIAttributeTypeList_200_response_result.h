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
 * OAIAttributeTypeList_200_response_result.h
 *
 * 
 */

#ifndef OAIAttributeTypeList_200_response_result_H
#define OAIAttributeTypeList_200_response_result_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAttributeTypeList_200_response_result : public OAIObject {
public:
    OAIAttributeTypeList_200_response_result();
    OAIAttributeTypeList_200_response_result(QString json);
    ~OAIAttributeTypeList_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getAttributeType() const;
    void setAttributeType(const QList<QString> &attribute_type);
    bool is_attribute_type_Set() const;
    bool is_attribute_type_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> m_attribute_type;
    bool m_attribute_type_isSet;
    bool m_attribute_type_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAttributeTypeList_200_response_result)

#endif // OAIAttributeTypeList_200_response_result_H
