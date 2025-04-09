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
 * OAIOrderRefundAdd.h
 *
 * 
 */

#ifndef OAIOrderRefundAdd_H
#define OAIOrderRefundAdd_H

#include <QJsonObject>

#include "OAIOrderRefundAdd_items_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIOrderRefundAdd_items_inner;

class OAIOrderRefundAdd : public OAIObject {
public:
    OAIOrderRefundAdd();
    OAIOrderRefundAdd(QString json);
    ~OAIOrderRefundAdd() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getOrderId() const;
    void setOrderId(const QString &order_id);
    bool is_order_id_Set() const;
    bool is_order_id_Valid() const;

    QList<OAIOrderRefundAdd_items_inner> getItems() const;
    void setItems(const QList<OAIOrderRefundAdd_items_inner> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    double getTotalPrice() const;
    void setTotalPrice(const double &total_price);
    bool is_total_price_Set() const;
    bool is_total_price_Valid() const;

    double getShippingPrice() const;
    void setShippingPrice(const double &shipping_price);
    bool is_shipping_price_Set() const;
    bool is_shipping_price_Valid() const;

    double getFeePrice() const;
    void setFeePrice(const double &fee_price);
    bool is_fee_price_Set() const;
    bool is_fee_price_Valid() const;

    QString getMessage() const;
    void setMessage(const QString &message);
    bool is_message_Set() const;
    bool is_message_Valid() const;

    bool isItemRestock() const;
    void setItemRestock(const bool &item_restock);
    bool is_item_restock_Set() const;
    bool is_item_restock_Valid() const;

    bool isSendNotifications() const;
    void setSendNotifications(const bool &send_notifications);
    bool is_send_notifications_Set() const;
    bool is_send_notifications_Valid() const;

    QString getDate() const;
    void setDate(const QString &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    bool isIsOnline() const;
    void setIsOnline(const bool &is_online);
    bool is_is_online_Set() const;
    bool is_is_online_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_order_id;
    bool m_order_id_isSet;
    bool m_order_id_isValid;

    QList<OAIOrderRefundAdd_items_inner> m_items;
    bool m_items_isSet;
    bool m_items_isValid;

    double m_total_price;
    bool m_total_price_isSet;
    bool m_total_price_isValid;

    double m_shipping_price;
    bool m_shipping_price_isSet;
    bool m_shipping_price_isValid;

    double m_fee_price;
    bool m_fee_price_isSet;
    bool m_fee_price_isValid;

    QString m_message;
    bool m_message_isSet;
    bool m_message_isValid;

    bool m_item_restock;
    bool m_item_restock_isSet;
    bool m_item_restock_isValid;

    bool m_send_notifications;
    bool m_send_notifications_isSet;
    bool m_send_notifications_isValid;

    QString m_date;
    bool m_date_isSet;
    bool m_date_isValid;

    bool m_is_online;
    bool m_is_online_isSet;
    bool m_is_online_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderRefundAdd)

#endif // OAIOrderRefundAdd_H
