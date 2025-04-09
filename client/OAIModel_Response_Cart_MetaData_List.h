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
 * OAIModel_Response_Cart_MetaData_List.h
 *
 * 
 */

#ifndef OAIModel_Response_Cart_MetaData_List_H
#define OAIModel_Response_Cart_MetaData_List_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAIPagination.h"
#include "OAIResponse_Cart_MetaData_List_Result.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIPagination;
class OAIResponse_Cart_MetaData_List_Result;

class OAIModel_Response_Cart_MetaData_List : public OAIObject {
public:
    OAIModel_Response_Cart_MetaData_List();
    OAIModel_Response_Cart_MetaData_List(QString json);
    ~OAIModel_Response_Cart_MetaData_List() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getReturnCode() const;
    void setReturnCode(const qint32 &return_code);
    bool is_return_code_Set() const;
    bool is_return_code_Valid() const;

    QString getReturnMessage() const;
    void setReturnMessage(const QString &return_message);
    bool is_return_message_Set() const;
    bool is_return_message_Valid() const;

    OAIPagination getPagination() const;
    void setPagination(const OAIPagination &pagination);
    bool is_pagination_Set() const;
    bool is_pagination_Valid() const;

    OAIResponse_Cart_MetaData_List_Result getResult() const;
    void setResult(const OAIResponse_Cart_MetaData_List_Result &result);
    bool is_result_Set() const;
    bool is_result_Valid() const;

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

    qint32 m_return_code;
    bool m_return_code_isSet;
    bool m_return_code_isValid;

    QString m_return_message;
    bool m_return_message_isSet;
    bool m_return_message_isValid;

    OAIPagination m_pagination;
    bool m_pagination_isSet;
    bool m_pagination_isValid;

    OAIResponse_Cart_MetaData_List_Result m_result;
    bool m_result_isSet;
    bool m_result_isValid;

    OAIObject m_additional_fields;
    bool m_additional_fields_isSet;
    bool m_additional_fields_isValid;

    OAIObject m_custom_fields;
    bool m_custom_fields_isSet;
    bool m_custom_fields_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIModel_Response_Cart_MetaData_List)

#endif // OAIModel_Response_Cart_MetaData_List_H
