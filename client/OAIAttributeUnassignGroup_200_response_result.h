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
 * OAIAttributeUnassignGroup_200_response_result.h
 *
 * 
 */

#ifndef OAIAttributeUnassignGroup_200_response_result_H
#define OAIAttributeUnassignGroup_200_response_result_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAttributeUnassignGroup_200_response_result : public OAIObject {
public:
    OAIAttributeUnassignGroup_200_response_result();
    OAIAttributeUnassignGroup_200_response_result(QString json);
    ~OAIAttributeUnassignGroup_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getUnassigned() const;
    void setUnassigned(const QString &unassigned);
    bool is_unassigned_Set() const;
    bool is_unassigned_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_unassigned;
    bool m_unassigned_isSet;
    bool m_unassigned_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAttributeUnassignGroup_200_response_result)

#endif // OAIAttributeUnassignGroup_200_response_result_H
