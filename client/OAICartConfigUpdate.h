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
 * OAICartConfigUpdate.h
 *
 * 
 */

#ifndef OAICartConfigUpdate_H
#define OAICartConfigUpdate_H

#include <QJsonObject>

#include "OAIObject.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICartConfigUpdate : public OAIObject {
public:
    OAICartConfigUpdate();
    OAICartConfigUpdate(QString json);
    ~OAICartConfigUpdate() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getDbTablesPrefix() const;
    void setDbTablesPrefix(const QString &db_tables_prefix);
    bool is_db_tables_prefix_Set() const;
    bool is_db_tables_prefix_Valid() const;

    OAIObject getCustomFields() const;
    void setCustomFields(const OAIObject &custom_fields);
    bool is_custom_fields_Set() const;
    bool is_custom_fields_Valid() const;

    QString getStoreId() const;
    void setStoreId(const QString &store_id);
    bool is_store_id_Set() const;
    bool is_store_id_Valid() const;

    QString getUserAgent() const;
    void setUserAgent(const QString &user_agent);
    bool is_user_agent_Set() const;
    bool is_user_agent_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_db_tables_prefix;
    bool m_db_tables_prefix_isSet;
    bool m_db_tables_prefix_isValid;

    OAIObject m_custom_fields;
    bool m_custom_fields_isSet;
    bool m_custom_fields_isValid;

    QString m_store_id;
    bool m_store_id_isSet;
    bool m_store_id_isValid;

    QString m_user_agent;
    bool m_user_agent_isSet;
    bool m_user_agent_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICartConfigUpdate)

#endif // OAICartConfigUpdate_H
