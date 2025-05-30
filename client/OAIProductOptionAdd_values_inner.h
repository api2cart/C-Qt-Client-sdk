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
 * OAIProductOptionAdd_values_inner.h
 *
 * 
 */

#ifndef OAIProductOptionAdd_values_inner_H
#define OAIProductOptionAdd_values_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductOptionAdd_values_inner : public OAIObject {
public:
    OAIProductOptionAdd_values_inner();
    OAIProductOptionAdd_values_inner(QString json);
    ~OAIProductOptionAdd_values_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getValue() const;
    void setValue(const QString &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    QString getDisplayValue() const;
    void setDisplayValue(const QString &display_value);
    bool is_display_value_Set() const;
    bool is_display_value_Valid() const;

    bool isIsDefault() const;
    void setIsDefault(const bool &is_default);
    bool is_is_default_Set() const;
    bool is_is_default_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_value;
    bool m_value_isSet;
    bool m_value_isValid;

    QString m_display_value;
    bool m_display_value_isSet;
    bool m_display_value_isValid;

    bool m_is_default;
    bool m_is_default_isSet;
    bool m_is_default_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductOptionAdd_values_inner)

#endif // OAIProductOptionAdd_values_inner_H
