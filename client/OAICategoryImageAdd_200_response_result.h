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
 * OAICategoryImageAdd_200_response_result.h
 *
 * 
 */

#ifndef OAICategoryImageAdd_200_response_result_H
#define OAICategoryImageAdd_200_response_result_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICategoryImageAdd_200_response_result : public OAIObject {
public:
    OAICategoryImageAdd_200_response_result();
    OAICategoryImageAdd_200_response_result(QString json);
    ~OAICategoryImageAdd_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getImagePath() const;
    void setImagePath(const QString &image_path);
    bool is_image_path_Set() const;
    bool is_image_path_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_image_path;
    bool m_image_path_isSet;
    bool m_image_path_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICategoryImageAdd_200_response_result)

#endif // OAICategoryImageAdd_200_response_result_H
