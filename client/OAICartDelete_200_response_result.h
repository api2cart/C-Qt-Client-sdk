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
 * OAICartDelete_200_response_result.h
 *
 * 
 */

#ifndef OAICartDelete_200_response_result_H
#define OAICartDelete_200_response_result_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICartDelete_200_response_result : public OAIObject {
public:
    OAICartDelete_200_response_result();
    OAICartDelete_200_response_result(QString json);
    ~OAICartDelete_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getStore() const;
    void setStore(const QString &store);
    bool is_store_Set() const;
    bool is_store_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_store;
    bool m_store_isSet;
    bool m_store_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICartDelete_200_response_result)

#endif // OAICartDelete_200_response_result_H
