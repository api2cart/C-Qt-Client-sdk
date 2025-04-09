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
 * OAIOrderAdd.h
 *
 * 
 */

#ifndef OAIOrderAdd_H
#define OAIOrderAdd_H

#include <QJsonObject>

#include "OAIOrderAdd_note_attributes_inner.h"
#include "OAIOrderAdd_order_item_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIOrderAdd_note_attributes_inner;
class OAIOrderAdd_order_item_inner;

class OAIOrderAdd : public OAIObject {
public:
    OAIOrderAdd();
    OAIOrderAdd(QString json);
    ~OAIOrderAdd() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getOrderId() const;
    void setOrderId(const QString &order_id);
    bool is_order_id_Set() const;
    bool is_order_id_Valid() const;

    QString getStoreId() const;
    void setStoreId(const QString &store_id);
    bool is_store_id_Set() const;
    bool is_store_id_Valid() const;

    QString getChannelId() const;
    void setChannelId(const QString &channel_id);
    bool is_channel_id_Set() const;
    bool is_channel_id_Valid() const;

    QString getOrderStatus() const;
    void setOrderStatus(const QString &order_status);
    bool is_order_status_Set() const;
    bool is_order_status_Valid() const;

    bool isSendNotifications() const;
    void setSendNotifications(const bool &send_notifications);
    bool is_send_notifications_Set() const;
    bool is_send_notifications_Valid() const;

    bool isSendAdminNotifications() const;
    void setSendAdminNotifications(const bool &send_admin_notifications);
    bool is_send_admin_notifications_Set() const;
    bool is_send_admin_notifications_Valid() const;

    QString getCustomerEmail() const;
    void setCustomerEmail(const QString &customer_email);
    bool is_customer_email_Set() const;
    bool is_customer_email_Valid() const;

    QString getBillFirstName() const;
    void setBillFirstName(const QString &bill_first_name);
    bool is_bill_first_name_Set() const;
    bool is_bill_first_name_Valid() const;

    QString getBillLastName() const;
    void setBillLastName(const QString &bill_last_name);
    bool is_bill_last_name_Set() const;
    bool is_bill_last_name_Valid() const;

    QString getBillAddress1() const;
    void setBillAddress1(const QString &bill_address_1);
    bool is_bill_address_1_Set() const;
    bool is_bill_address_1_Valid() const;

    QString getBillCity() const;
    void setBillCity(const QString &bill_city);
    bool is_bill_city_Set() const;
    bool is_bill_city_Valid() const;

    QString getBillPostcode() const;
    void setBillPostcode(const QString &bill_postcode);
    bool is_bill_postcode_Set() const;
    bool is_bill_postcode_Valid() const;

    QString getBillState() const;
    void setBillState(const QString &bill_state);
    bool is_bill_state_Set() const;
    bool is_bill_state_Valid() const;

    QString getBillCountry() const;
    void setBillCountry(const QString &bill_country);
    bool is_bill_country_Set() const;
    bool is_bill_country_Valid() const;

    QString getShippFirstName() const;
    void setShippFirstName(const QString &shipp_first_name);
    bool is_shipp_first_name_Set() const;
    bool is_shipp_first_name_Valid() const;

    QString getShippLastName() const;
    void setShippLastName(const QString &shipp_last_name);
    bool is_shipp_last_name_Set() const;
    bool is_shipp_last_name_Valid() const;

    QString getShippAddress1() const;
    void setShippAddress1(const QString &shipp_address_1);
    bool is_shipp_address_1_Set() const;
    bool is_shipp_address_1_Valid() const;

    QString getShippCity() const;
    void setShippCity(const QString &shipp_city);
    bool is_shipp_city_Set() const;
    bool is_shipp_city_Valid() const;

    QString getShippPostcode() const;
    void setShippPostcode(const QString &shipp_postcode);
    bool is_shipp_postcode_Set() const;
    bool is_shipp_postcode_Valid() const;

    QString getShippState() const;
    void setShippState(const QString &shipp_state);
    bool is_shipp_state_Set() const;
    bool is_shipp_state_Valid() const;

    QString getShippCountry() const;
    void setShippCountry(const QString &shipp_country);
    bool is_shipp_country_Set() const;
    bool is_shipp_country_Valid() const;

    double getTotalPrice() const;
    void setTotalPrice(const double &total_price);
    bool is_total_price_Set() const;
    bool is_total_price_Valid() const;

    QString getDate() const;
    void setDate(const QString &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    QString getOrderPaymentMethod() const;
    void setOrderPaymentMethod(const QString &order_payment_method);
    bool is_order_payment_method_Set() const;
    bool is_order_payment_method_Valid() const;

    QString getTransactionId() const;
    void setTransactionId(const QString &transaction_id);
    bool is_transaction_id_Set() const;
    bool is_transaction_id_Valid() const;

    QString getOrderShippingMethod() const;
    void setOrderShippingMethod(const QString &order_shipping_method);
    bool is_order_shipping_method_Set() const;
    bool is_order_shipping_method_Valid() const;

    QString getCurrency() const;
    void setCurrency(const QString &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    QString getBillAddress2() const;
    void setBillAddress2(const QString &bill_address_2);
    bool is_bill_address_2_Set() const;
    bool is_bill_address_2_Valid() const;

    QString getBillCompany() const;
    void setBillCompany(const QString &bill_company);
    bool is_bill_company_Set() const;
    bool is_bill_company_Valid() const;

    QString getBillPhone() const;
    void setBillPhone(const QString &bill_phone);
    bool is_bill_phone_Set() const;
    bool is_bill_phone_Valid() const;

    QString getBillFax() const;
    void setBillFax(const QString &bill_fax);
    bool is_bill_fax_Set() const;
    bool is_bill_fax_Valid() const;

    QString getComment() const;
    void setComment(const QString &comment);
    bool is_comment_Set() const;
    bool is_comment_Valid() const;

    QString getAdminComment() const;
    void setAdminComment(const QString &admin_comment);
    bool is_admin_comment_Set() const;
    bool is_admin_comment_Valid() const;

    QString getAdminPrivateComment() const;
    void setAdminPrivateComment(const QString &admin_private_comment);
    bool is_admin_private_comment_Set() const;
    bool is_admin_private_comment_Valid() const;

    QString getCustomerFirstName() const;
    void setCustomerFirstName(const QString &customer_first_name);
    bool is_customer_first_name_Set() const;
    bool is_customer_first_name_Valid() const;

    QString getCustomerLastName() const;
    void setCustomerLastName(const QString &customer_last_name);
    bool is_customer_last_name_Set() const;
    bool is_customer_last_name_Valid() const;

    QString getCustomerPhone() const;
    void setCustomerPhone(const QString &customer_phone);
    bool is_customer_phone_Set() const;
    bool is_customer_phone_Valid() const;

    QString getCustomerCountry() const;
    void setCustomerCountry(const QString &customer_country);
    bool is_customer_country_Set() const;
    bool is_customer_country_Valid() const;

    QString getCustomerBirthday() const;
    void setCustomerBirthday(const QString &customer_birthday);
    bool is_customer_birthday_Set() const;
    bool is_customer_birthday_Valid() const;

    QString getCustomerFax() const;
    void setCustomerFax(const QString &customer_fax);
    bool is_customer_fax_Set() const;
    bool is_customer_fax_Valid() const;

    QString getShippAddress2() const;
    void setShippAddress2(const QString &shipp_address_2);
    bool is_shipp_address_2_Set() const;
    bool is_shipp_address_2_Valid() const;

    QString getShippCompany() const;
    void setShippCompany(const QString &shipp_company);
    bool is_shipp_company_Set() const;
    bool is_shipp_company_Valid() const;

    QString getShippPhone() const;
    void setShippPhone(const QString &shipp_phone);
    bool is_shipp_phone_Set() const;
    bool is_shipp_phone_Valid() const;

    QString getShippFax() const;
    void setShippFax(const QString &shipp_fax);
    bool is_shipp_fax_Set() const;
    bool is_shipp_fax_Valid() const;

    QString getDateModified() const;
    void setDateModified(const QString &date_modified);
    bool is_date_modified_Set() const;
    bool is_date_modified_Valid() const;

    QString getDateFinished() const;
    void setDateFinished(const QString &date_finished);
    bool is_date_finished_Set() const;
    bool is_date_finished_Valid() const;

    double getSubtotalPrice() const;
    void setSubtotalPrice(const double &subtotal_price);
    bool is_subtotal_price_Set() const;
    bool is_subtotal_price_Valid() const;

    double getTaxPrice() const;
    void setTaxPrice(const double &tax_price);
    bool is_tax_price_Set() const;
    bool is_tax_price_Valid() const;

    bool isPricesIncTax() const;
    void setPricesIncTax(const bool &prices_inc_tax);
    bool is_prices_inc_tax_Set() const;
    bool is_prices_inc_tax_Valid() const;

    double getShippingPrice() const;
    void setShippingPrice(const double &shipping_price);
    bool is_shipping_price_Set() const;
    bool is_shipping_price_Valid() const;

    double getShippingTax() const;
    void setShippingTax(const double &shipping_tax);
    bool is_shipping_tax_Set() const;
    bool is_shipping_tax_Valid() const;

    QString getCarrierId() const;
    void setCarrierId(const QString &carrier_id);
    bool is_carrier_id_Set() const;
    bool is_carrier_id_Valid() const;

    QString getWarehouseId() const;
    void setWarehouseId(const QString &warehouse_id);
    bool is_warehouse_id_Set() const;
    bool is_warehouse_id_Valid() const;

    double getDiscount() const;
    void setDiscount(const double &discount);
    bool is_discount_Set() const;
    bool is_discount_Valid() const;

    double getCouponDiscount() const;
    void setCouponDiscount(const double &coupon_discount);
    bool is_coupon_discount_Set() const;
    bool is_coupon_discount_Valid() const;

    QList<QString> getCoupons() const;
    void setCoupons(const QList<QString> &coupons);
    bool is_coupons_Set() const;
    bool is_coupons_Valid() const;

    double getGiftCertificateDiscount() const;
    void setGiftCertificateDiscount(const double &gift_certificate_discount);
    bool is_gift_certificate_discount_Set() const;
    bool is_gift_certificate_discount_Valid() const;

    QString getFulfillmentStatus() const;
    void setFulfillmentStatus(const QString &fulfillment_status);
    bool is_fulfillment_status_Set() const;
    bool is_fulfillment_status_Valid() const;

    QString getFinancialStatus() const;
    void setFinancialStatus(const QString &financial_status);
    bool is_financial_status_Set() const;
    bool is_financial_status_Valid() const;

    double getTotalPaid() const;
    void setTotalPaid(const double &total_paid);
    bool is_total_paid_Set() const;
    bool is_total_paid_Valid() const;

    QString getExternalSource() const;
    void setExternalSource(const QString &external_source);
    bool is_external_source_Set() const;
    bool is_external_source_Valid() const;

    QString getTags() const;
    void setTags(const QString &tags);
    bool is_tags_Set() const;
    bool is_tags_Valid() const;

    QString getInventoryBehaviour() const;
    void setInventoryBehaviour(const QString &inventory_behaviour);
    bool is_inventory_behaviour_Set() const;
    bool is_inventory_behaviour_Valid() const;

    bool isCreateInvoice() const;
    void setCreateInvoice(const bool &create_invoice);
    bool is_create_invoice_Set() const;
    bool is_create_invoice_Valid() const;

    QList<OAIOrderAdd_note_attributes_inner> getNoteAttributes() const;
    void setNoteAttributes(const QList<OAIOrderAdd_note_attributes_inner> &note_attributes);
    bool is_note_attributes_Set() const;
    bool is_note_attributes_Valid() const;

    qint32 getTotalWeight() const;
    void setTotalWeight(const qint32 &total_weight);
    bool is_total_weight_Set() const;
    bool is_total_weight_Valid() const;

    bool isClearCache() const;
    void setClearCache(const bool &clear_cache);
    bool is_clear_cache_Set() const;
    bool is_clear_cache_Valid() const;

    QString getOrigin() const;
    void setOrigin(const QString &origin);
    bool is_origin_Set() const;
    bool is_origin_Valid() const;

    QList<OAIOrderAdd_order_item_inner> getOrderItem() const;
    void setOrderItem(const QList<OAIOrderAdd_order_item_inner> &order_item);
    bool is_order_item_Set() const;
    bool is_order_item_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_order_id;
    bool m_order_id_isSet;
    bool m_order_id_isValid;

    QString m_store_id;
    bool m_store_id_isSet;
    bool m_store_id_isValid;

    QString m_channel_id;
    bool m_channel_id_isSet;
    bool m_channel_id_isValid;

    QString m_order_status;
    bool m_order_status_isSet;
    bool m_order_status_isValid;

    bool m_send_notifications;
    bool m_send_notifications_isSet;
    bool m_send_notifications_isValid;

    bool m_send_admin_notifications;
    bool m_send_admin_notifications_isSet;
    bool m_send_admin_notifications_isValid;

    QString m_customer_email;
    bool m_customer_email_isSet;
    bool m_customer_email_isValid;

    QString m_bill_first_name;
    bool m_bill_first_name_isSet;
    bool m_bill_first_name_isValid;

    QString m_bill_last_name;
    bool m_bill_last_name_isSet;
    bool m_bill_last_name_isValid;

    QString m_bill_address_1;
    bool m_bill_address_1_isSet;
    bool m_bill_address_1_isValid;

    QString m_bill_city;
    bool m_bill_city_isSet;
    bool m_bill_city_isValid;

    QString m_bill_postcode;
    bool m_bill_postcode_isSet;
    bool m_bill_postcode_isValid;

    QString m_bill_state;
    bool m_bill_state_isSet;
    bool m_bill_state_isValid;

    QString m_bill_country;
    bool m_bill_country_isSet;
    bool m_bill_country_isValid;

    QString m_shipp_first_name;
    bool m_shipp_first_name_isSet;
    bool m_shipp_first_name_isValid;

    QString m_shipp_last_name;
    bool m_shipp_last_name_isSet;
    bool m_shipp_last_name_isValid;

    QString m_shipp_address_1;
    bool m_shipp_address_1_isSet;
    bool m_shipp_address_1_isValid;

    QString m_shipp_city;
    bool m_shipp_city_isSet;
    bool m_shipp_city_isValid;

    QString m_shipp_postcode;
    bool m_shipp_postcode_isSet;
    bool m_shipp_postcode_isValid;

    QString m_shipp_state;
    bool m_shipp_state_isSet;
    bool m_shipp_state_isValid;

    QString m_shipp_country;
    bool m_shipp_country_isSet;
    bool m_shipp_country_isValid;

    double m_total_price;
    bool m_total_price_isSet;
    bool m_total_price_isValid;

    QString m_date;
    bool m_date_isSet;
    bool m_date_isValid;

    QString m_order_payment_method;
    bool m_order_payment_method_isSet;
    bool m_order_payment_method_isValid;

    QString m_transaction_id;
    bool m_transaction_id_isSet;
    bool m_transaction_id_isValid;

    QString m_order_shipping_method;
    bool m_order_shipping_method_isSet;
    bool m_order_shipping_method_isValid;

    QString m_currency;
    bool m_currency_isSet;
    bool m_currency_isValid;

    QString m_bill_address_2;
    bool m_bill_address_2_isSet;
    bool m_bill_address_2_isValid;

    QString m_bill_company;
    bool m_bill_company_isSet;
    bool m_bill_company_isValid;

    QString m_bill_phone;
    bool m_bill_phone_isSet;
    bool m_bill_phone_isValid;

    QString m_bill_fax;
    bool m_bill_fax_isSet;
    bool m_bill_fax_isValid;

    QString m_comment;
    bool m_comment_isSet;
    bool m_comment_isValid;

    QString m_admin_comment;
    bool m_admin_comment_isSet;
    bool m_admin_comment_isValid;

    QString m_admin_private_comment;
    bool m_admin_private_comment_isSet;
    bool m_admin_private_comment_isValid;

    QString m_customer_first_name;
    bool m_customer_first_name_isSet;
    bool m_customer_first_name_isValid;

    QString m_customer_last_name;
    bool m_customer_last_name_isSet;
    bool m_customer_last_name_isValid;

    QString m_customer_phone;
    bool m_customer_phone_isSet;
    bool m_customer_phone_isValid;

    QString m_customer_country;
    bool m_customer_country_isSet;
    bool m_customer_country_isValid;

    QString m_customer_birthday;
    bool m_customer_birthday_isSet;
    bool m_customer_birthday_isValid;

    QString m_customer_fax;
    bool m_customer_fax_isSet;
    bool m_customer_fax_isValid;

    QString m_shipp_address_2;
    bool m_shipp_address_2_isSet;
    bool m_shipp_address_2_isValid;

    QString m_shipp_company;
    bool m_shipp_company_isSet;
    bool m_shipp_company_isValid;

    QString m_shipp_phone;
    bool m_shipp_phone_isSet;
    bool m_shipp_phone_isValid;

    QString m_shipp_fax;
    bool m_shipp_fax_isSet;
    bool m_shipp_fax_isValid;

    QString m_date_modified;
    bool m_date_modified_isSet;
    bool m_date_modified_isValid;

    QString m_date_finished;
    bool m_date_finished_isSet;
    bool m_date_finished_isValid;

    double m_subtotal_price;
    bool m_subtotal_price_isSet;
    bool m_subtotal_price_isValid;

    double m_tax_price;
    bool m_tax_price_isSet;
    bool m_tax_price_isValid;

    bool m_prices_inc_tax;
    bool m_prices_inc_tax_isSet;
    bool m_prices_inc_tax_isValid;

    double m_shipping_price;
    bool m_shipping_price_isSet;
    bool m_shipping_price_isValid;

    double m_shipping_tax;
    bool m_shipping_tax_isSet;
    bool m_shipping_tax_isValid;

    QString m_carrier_id;
    bool m_carrier_id_isSet;
    bool m_carrier_id_isValid;

    QString m_warehouse_id;
    bool m_warehouse_id_isSet;
    bool m_warehouse_id_isValid;

    double m_discount;
    bool m_discount_isSet;
    bool m_discount_isValid;

    double m_coupon_discount;
    bool m_coupon_discount_isSet;
    bool m_coupon_discount_isValid;

    QList<QString> m_coupons;
    bool m_coupons_isSet;
    bool m_coupons_isValid;

    double m_gift_certificate_discount;
    bool m_gift_certificate_discount_isSet;
    bool m_gift_certificate_discount_isValid;

    QString m_fulfillment_status;
    bool m_fulfillment_status_isSet;
    bool m_fulfillment_status_isValid;

    QString m_financial_status;
    bool m_financial_status_isSet;
    bool m_financial_status_isValid;

    double m_total_paid;
    bool m_total_paid_isSet;
    bool m_total_paid_isValid;

    QString m_external_source;
    bool m_external_source_isSet;
    bool m_external_source_isValid;

    QString m_tags;
    bool m_tags_isSet;
    bool m_tags_isValid;

    QString m_inventory_behaviour;
    bool m_inventory_behaviour_isSet;
    bool m_inventory_behaviour_isValid;

    bool m_create_invoice;
    bool m_create_invoice_isSet;
    bool m_create_invoice_isValid;

    QList<OAIOrderAdd_note_attributes_inner> m_note_attributes;
    bool m_note_attributes_isSet;
    bool m_note_attributes_isValid;

    qint32 m_total_weight;
    bool m_total_weight_isSet;
    bool m_total_weight_isValid;

    bool m_clear_cache;
    bool m_clear_cache_isSet;
    bool m_clear_cache_isValid;

    QString m_origin;
    bool m_origin_isSet;
    bool m_origin_isValid;

    QList<OAIOrderAdd_order_item_inner> m_order_item;
    bool m_order_item_isSet;
    bool m_order_item_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderAdd)

#endif // OAIOrderAdd_H
