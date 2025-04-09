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
 * OAIOrder_Transaction.h
 *
 * 
 */

#ifndef OAIOrder_Transaction_H
#define OAIOrder_Transaction_H

#include <QJsonObject>

#include "OAIA2CDateTime.h"
#include "OAIObject.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIA2CDateTime;

class OAIOrder_Transaction : public OAIObject {
public:
    OAIOrder_Transaction();
    OAIOrder_Transaction(QString json);
    ~OAIOrder_Transaction() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getTransactionId() const;
    void setTransactionId(const QString &transaction_id);
    bool is_transaction_id_Set() const;
    bool is_transaction_id_Valid() const;

    QString getOrderId() const;
    void setOrderId(const QString &order_id);
    bool is_order_id_Set() const;
    bool is_order_id_Valid() const;

    QString getParentId() const;
    void setParentId(const QString &parent_id);
    bool is_parent_id_Set() const;
    bool is_parent_id_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getStatus() const;
    void setStatus(const QString &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getGateway() const;
    void setGateway(const QString &gateway);
    bool is_gateway_Set() const;
    bool is_gateway_Valid() const;

    QString getReferenceNumber() const;
    void setReferenceNumber(const QString &reference_number);
    bool is_reference_number_Set() const;
    bool is_reference_number_Valid() const;

    QString getCurrency() const;
    void setCurrency(const QString &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    double getAmount() const;
    void setAmount(const double &amount);
    bool is_amount_Set() const;
    bool is_amount_Valid() const;

    OAIA2CDateTime getCreatedTime() const;
    void setCreatedTime(const OAIA2CDateTime &created_time);
    bool is_created_time_Set() const;
    bool is_created_time_Valid() const;

    QString getSettlementCurrency() const;
    void setSettlementCurrency(const QString &settlement_currency);
    bool is_settlement_currency_Set() const;
    bool is_settlement_currency_Valid() const;

    double getSettlementAmount() const;
    void setSettlementAmount(const double &settlement_amount);
    bool is_settlement_amount_Set() const;
    bool is_settlement_amount_Valid() const;

    OAIA2CDateTime getSettlementCreatedTime() const;
    void setSettlementCreatedTime(const OAIA2CDateTime &settlement_created_time);
    bool is_settlement_created_time_Set() const;
    bool is_settlement_created_time_Valid() const;

    QString getCardBrand() const;
    void setCardBrand(const QString &card_brand);
    bool is_card_brand_Set() const;
    bool is_card_brand_Valid() const;

    QString getCardBin() const;
    void setCardBin(const QString &card_bin);
    bool is_card_bin_Set() const;
    bool is_card_bin_Valid() const;

    QString getCardLastFour() const;
    void setCardLastFour(const QString &card_last_four);
    bool is_card_last_four_Set() const;
    bool is_card_last_four_Valid() const;

    QString getAvsStreetRespCode() const;
    void setAvsStreetRespCode(const QString &avs_street_resp_code);
    bool is_avs_street_resp_code_Set() const;
    bool is_avs_street_resp_code_Valid() const;

    QString getAvsPostalRespCode() const;
    void setAvsPostalRespCode(const QString &avs_postal_resp_code);
    bool is_avs_postal_resp_code_Set() const;
    bool is_avs_postal_resp_code_Valid() const;

    QString getAvsMessage() const;
    void setAvsMessage(const QString &avs_message);
    bool is_avs_message_Set() const;
    bool is_avs_message_Valid() const;

    QString getCvvCode() const;
    void setCvvCode(const QString &cvv_code);
    bool is_cvv_code_Set() const;
    bool is_cvv_code_Valid() const;

    QString getCvvMessage() const;
    void setCvvMessage(const QString &cvv_message);
    bool is_cvv_message_Set() const;
    bool is_cvv_message_Valid() const;

    bool isIsTestMode() const;
    void setIsTestMode(const bool &is_test_mode);
    bool is_is_test_mode_Set() const;
    bool is_is_test_mode_Valid() const;

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

    QString m_transaction_id;
    bool m_transaction_id_isSet;
    bool m_transaction_id_isValid;

    QString m_order_id;
    bool m_order_id_isSet;
    bool m_order_id_isValid;

    QString m_parent_id;
    bool m_parent_id_isSet;
    bool m_parent_id_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString m_gateway;
    bool m_gateway_isSet;
    bool m_gateway_isValid;

    QString m_reference_number;
    bool m_reference_number_isSet;
    bool m_reference_number_isValid;

    QString m_currency;
    bool m_currency_isSet;
    bool m_currency_isValid;

    double m_amount;
    bool m_amount_isSet;
    bool m_amount_isValid;

    OAIA2CDateTime m_created_time;
    bool m_created_time_isSet;
    bool m_created_time_isValid;

    QString m_settlement_currency;
    bool m_settlement_currency_isSet;
    bool m_settlement_currency_isValid;

    double m_settlement_amount;
    bool m_settlement_amount_isSet;
    bool m_settlement_amount_isValid;

    OAIA2CDateTime m_settlement_created_time;
    bool m_settlement_created_time_isSet;
    bool m_settlement_created_time_isValid;

    QString m_card_brand;
    bool m_card_brand_isSet;
    bool m_card_brand_isValid;

    QString m_card_bin;
    bool m_card_bin_isSet;
    bool m_card_bin_isValid;

    QString m_card_last_four;
    bool m_card_last_four_isSet;
    bool m_card_last_four_isValid;

    QString m_avs_street_resp_code;
    bool m_avs_street_resp_code_isSet;
    bool m_avs_street_resp_code_isValid;

    QString m_avs_postal_resp_code;
    bool m_avs_postal_resp_code_isSet;
    bool m_avs_postal_resp_code_isValid;

    QString m_avs_message;
    bool m_avs_message_isSet;
    bool m_avs_message_isValid;

    QString m_cvv_code;
    bool m_cvv_code_isSet;
    bool m_cvv_code_isValid;

    QString m_cvv_message;
    bool m_cvv_message_isSet;
    bool m_cvv_message_isValid;

    bool m_is_test_mode;
    bool m_is_test_mode_isSet;
    bool m_is_test_mode_isValid;

    OAIObject m_additional_fields;
    bool m_additional_fields_isSet;
    bool m_additional_fields_isValid;

    OAIObject m_custom_fields;
    bool m_custom_fields_isSet;
    bool m_custom_fields_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrder_Transaction)

#endif // OAIOrder_Transaction_H
