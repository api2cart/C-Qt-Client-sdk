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
 * OAICategoryAdd_200_response_result.h
 *
 * 
 */

#ifndef OAICategoryAdd_200_response_result_H
#define OAICategoryAdd_200_response_result_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICategoryAdd_200_response_result : public OAIObject {
public:
    OAICategoryAdd_200_response_result();
    OAICategoryAdd_200_response_result(QString json);
    ~OAICategoryAdd_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCategoryId() const;
    void setCategoryId(const QString &category_id);
    bool is_category_id_Set() const;
    bool is_category_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_category_id;
    bool m_category_id_isSet;
    bool m_category_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICategoryAdd_200_response_result)

#endif // OAICategoryAdd_200_response_result_H
