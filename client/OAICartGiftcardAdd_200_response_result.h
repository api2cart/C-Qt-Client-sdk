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
 * OAICartGiftcardAdd_200_response_result.h
 *
 * 
 */

#ifndef OAICartGiftcardAdd_200_response_result_H
#define OAICartGiftcardAdd_200_response_result_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICartGiftcardAdd_200_response_result : public OAIObject {
public:
    OAICartGiftcardAdd_200_response_result();
    OAICartGiftcardAdd_200_response_result(QString json);
    ~OAICartGiftcardAdd_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getCode() const;
    void setCode(const QString &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_code;
    bool m_code_isSet;
    bool m_code_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICartGiftcardAdd_200_response_result)

#endif // OAICartGiftcardAdd_200_response_result_H
