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
 * OAIProductAdd_certifications_inner_files_inner.h
 *
 * 
 */

#ifndef OAIProductAdd_certifications_inner_files_inner_H
#define OAIProductAdd_certifications_inner_files_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductAdd_certifications_inner_files_inner : public OAIObject {
public:
    OAIProductAdd_certifications_inner_files_inner();
    OAIProductAdd_certifications_inner_files_inner(QString json);
    ~OAIProductAdd_certifications_inner_files_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductAdd_certifications_inner_files_inner)

#endif // OAIProductAdd_certifications_inner_files_inner_H
