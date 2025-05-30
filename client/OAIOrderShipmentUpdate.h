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
 * OAIOrderShipmentUpdate.h
 *
 * 
 */

#ifndef OAIOrderShipmentUpdate_H
#define OAIOrderShipmentUpdate_H

#include <QJsonObject>

#include "OAIOrderShipmentAdd_items_inner.h"
#include "OAIOrderShipmentAdd_tracking_numbers_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIOrderShipmentAdd_tracking_numbers_inner;
class OAIOrderShipmentAdd_items_inner;

class OAIOrderShipmentUpdate : public OAIObject {
public:
    OAIOrderShipmentUpdate();
    OAIOrderShipmentUpdate(QString json);
    ~OAIOrderShipmentUpdate() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getShipmentId() const;
    void setShipmentId(const QString &shipment_id);
    bool is_shipment_id_Set() const;
    bool is_shipment_id_Valid() const;

    QString getOrderId() const;
    void setOrderId(const QString &order_id);
    bool is_order_id_Set() const;
    bool is_order_id_Valid() const;

    QString getStoreId() const;
    void setStoreId(const QString &store_id);
    bool is_store_id_Set() const;
    bool is_store_id_Valid() const;

    QString getShipmentProvider() const;
    void setShipmentProvider(const QString &shipment_provider);
    bool is_shipment_provider_Set() const;
    bool is_shipment_provider_Valid() const;

    QList<OAIOrderShipmentAdd_tracking_numbers_inner> getTrackingNumbers() const;
    void setTrackingNumbers(const QList<OAIOrderShipmentAdd_tracking_numbers_inner> &tracking_numbers);
    bool is_tracking_numbers_Set() const;
    bool is_tracking_numbers_Valid() const;

    QString getTrackingLink() const;
    void setTrackingLink(const QString &tracking_link);
    bool is_tracking_link_Set() const;
    bool is_tracking_link_Valid() const;

    bool isIsShipped() const;
    void setIsShipped(const bool &is_shipped);
    bool is_is_shipped_Set() const;
    bool is_is_shipped_Valid() const;

    QString getDeliveredAt() const;
    void setDeliveredAt(const QString &delivered_at);
    bool is_delivered_at_Set() const;
    bool is_delivered_at_Valid() const;

    bool isReplace() const;
    void setReplace(const bool &replace);
    bool is_replace_Set() const;
    bool is_replace_Valid() const;

    bool isSendNotifications() const;
    void setSendNotifications(const bool &send_notifications);
    bool is_send_notifications_Set() const;
    bool is_send_notifications_Valid() const;

    QString getTrackingProvider() const;
    void setTrackingProvider(const QString &tracking_provider);
    bool is_tracking_provider_Set() const;
    bool is_tracking_provider_Valid() const;

    QList<OAIOrderShipmentAdd_items_inner> getItems() const;
    void setItems(const QList<OAIOrderShipmentAdd_items_inner> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_shipment_id;
    bool m_shipment_id_isSet;
    bool m_shipment_id_isValid;

    QString m_order_id;
    bool m_order_id_isSet;
    bool m_order_id_isValid;

    QString m_store_id;
    bool m_store_id_isSet;
    bool m_store_id_isValid;

    QString m_shipment_provider;
    bool m_shipment_provider_isSet;
    bool m_shipment_provider_isValid;

    QList<OAIOrderShipmentAdd_tracking_numbers_inner> m_tracking_numbers;
    bool m_tracking_numbers_isSet;
    bool m_tracking_numbers_isValid;

    QString m_tracking_link;
    bool m_tracking_link_isSet;
    bool m_tracking_link_isValid;

    bool m_is_shipped;
    bool m_is_shipped_isSet;
    bool m_is_shipped_isValid;

    QString m_delivered_at;
    bool m_delivered_at_isSet;
    bool m_delivered_at_isValid;

    bool m_replace;
    bool m_replace_isSet;
    bool m_replace_isValid;

    bool m_send_notifications;
    bool m_send_notifications_isSet;
    bool m_send_notifications_isValid;

    QString m_tracking_provider;
    bool m_tracking_provider_isSet;
    bool m_tracking_provider_isValid;

    QList<OAIOrderShipmentAdd_items_inner> m_items;
    bool m_items_isSet;
    bool m_items_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderShipmentUpdate)

#endif // OAIOrderShipmentUpdate_H
