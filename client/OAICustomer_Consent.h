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
 * OAICustomer_Consent.h
 *
 * 
 */

#ifndef OAICustomer_Consent_H
#define OAICustomer_Consent_H

#include <QJsonObject>

#include "OAIObject.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustomer_Consent : public OAIObject {
public:
    OAICustomer_Consent();
    OAICustomer_Consent(QString json);
    ~OAICustomer_Consent() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getStatus() const;
    void setStatus(const QString &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getSource() const;
    void setSource(const QString &source);
    bool is_source_Set() const;
    bool is_source_Valid() const;

    QString getOptInLevel() const;
    void setOptInLevel(const QString &opt_in_level);
    bool is_opt_in_level_Set() const;
    bool is_opt_in_level_Valid() const;

    QString getModifiedTime() const;
    void setModifiedTime(const QString &modified_time);
    bool is_modified_time_Set() const;
    bool is_modified_time_Valid() const;

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

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString m_source;
    bool m_source_isSet;
    bool m_source_isValid;

    QString m_opt_in_level;
    bool m_opt_in_level_isSet;
    bool m_opt_in_level_isValid;

    QString m_modified_time;
    bool m_modified_time_isSet;
    bool m_modified_time_isValid;

    OAIObject m_additional_fields;
    bool m_additional_fields_isSet;
    bool m_additional_fields_isValid;

    OAIObject m_custom_fields;
    bool m_custom_fields_isSet;
    bool m_custom_fields_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustomer_Consent)

#endif // OAICustomer_Consent_H
