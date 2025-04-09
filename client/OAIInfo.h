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
 * OAIInfo.h
 *
 * 
 */

#ifndef OAIInfo_H
#define OAIInfo_H

#include <QJsonObject>

#include "OAIObject.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIInfo : public OAIObject {
public:
    OAIInfo();
    OAIInfo(QString json);
    ~OAIInfo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getOwner() const;
    void setOwner(const QString &owner);
    bool is_owner_Set() const;
    bool is_owner_Valid() const;

    QString getCountry() const;
    void setCountry(const QString &country);
    bool is_country_Set() const;
    bool is_country_Valid() const;

    QString getState() const;
    void setState(const QString &state);
    bool is_state_Set() const;
    bool is_state_Valid() const;

    QString getStateCode() const;
    void setStateCode(const QString &state_code);
    bool is_state_code_Set() const;
    bool is_state_code_Valid() const;

    QString getCity() const;
    void setCity(const QString &city);
    bool is_city_Set() const;
    bool is_city_Valid() const;

    QString getStreetAddress() const;
    void setStreetAddress(const QString &street_address);
    bool is_street_address_Set() const;
    bool is_street_address_Valid() const;

    QString getStreetAddressLine2() const;
    void setStreetAddressLine2(const QString &street_address_line_2);
    bool is_street_address_line_2_Set() const;
    bool is_street_address_line_2_Valid() const;

    QString getZipCode() const;
    void setZipCode(const QString &zip_code);
    bool is_zip_code_Set() const;
    bool is_zip_code_Valid() const;

    QString getEmail() const;
    void setEmail(const QString &email);
    bool is_email_Set() const;
    bool is_email_Valid() const;

    QString getPhone() const;
    void setPhone(const QString &phone);
    bool is_phone_Set() const;
    bool is_phone_Valid() const;

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

    QString m_owner;
    bool m_owner_isSet;
    bool m_owner_isValid;

    QString m_country;
    bool m_country_isSet;
    bool m_country_isValid;

    QString m_state;
    bool m_state_isSet;
    bool m_state_isValid;

    QString m_state_code;
    bool m_state_code_isSet;
    bool m_state_code_isValid;

    QString m_city;
    bool m_city_isSet;
    bool m_city_isValid;

    QString m_street_address;
    bool m_street_address_isSet;
    bool m_street_address_isValid;

    QString m_street_address_line_2;
    bool m_street_address_line_2_isSet;
    bool m_street_address_line_2_isValid;

    QString m_zip_code;
    bool m_zip_code_isSet;
    bool m_zip_code_isValid;

    QString m_email;
    bool m_email_isSet;
    bool m_email_isValid;

    QString m_phone;
    bool m_phone_isSet;
    bool m_phone_isValid;

    OAIObject m_additional_fields;
    bool m_additional_fields_isSet;
    bool m_additional_fields_isValid;

    OAIObject m_custom_fields;
    bool m_custom_fields_isSet;
    bool m_custom_fields_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIInfo)

#endif // OAIInfo_H
