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
 * OAIOrderShipmentTrackingAdd.h
 *
 * 
 */

#ifndef OAIOrderShipmentTrackingAdd_H
#define OAIOrderShipmentTrackingAdd_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOrderShipmentTrackingAdd : public OAIObject {
public:
    OAIOrderShipmentTrackingAdd();
    OAIOrderShipmentTrackingAdd(QString json);
    ~OAIOrderShipmentTrackingAdd() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getStoreId() const;
    void setStoreId(const QString &store_id);
    bool is_store_id_Set() const;
    bool is_store_id_Valid() const;

    QString getOrderId() const;
    void setOrderId(const QString &order_id);
    bool is_order_id_Set() const;
    bool is_order_id_Valid() const;

    QString getShipmentId() const;
    void setShipmentId(const QString &shipment_id);
    bool is_shipment_id_Set() const;
    bool is_shipment_id_Valid() const;

    QString getCarrierId() const;
    void setCarrierId(const QString &carrier_id);
    bool is_carrier_id_Set() const;
    bool is_carrier_id_Valid() const;

    QString getTrackingProvider() const;
    void setTrackingProvider(const QString &tracking_provider);
    bool is_tracking_provider_Set() const;
    bool is_tracking_provider_Valid() const;

    QString getTrackingNumber() const;
    void setTrackingNumber(const QString &tracking_number);
    bool is_tracking_number_Set() const;
    bool is_tracking_number_Valid() const;

    QString getTrackingLink() const;
    void setTrackingLink(const QString &tracking_link);
    bool is_tracking_link_Set() const;
    bool is_tracking_link_Valid() const;

    bool isSendNotifications() const;
    void setSendNotifications(const bool &send_notifications);
    bool is_send_notifications_Set() const;
    bool is_send_notifications_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_store_id;
    bool m_store_id_isSet;
    bool m_store_id_isValid;

    QString m_order_id;
    bool m_order_id_isSet;
    bool m_order_id_isValid;

    QString m_shipment_id;
    bool m_shipment_id_isSet;
    bool m_shipment_id_isValid;

    QString m_carrier_id;
    bool m_carrier_id_isSet;
    bool m_carrier_id_isValid;

    QString m_tracking_provider;
    bool m_tracking_provider_isSet;
    bool m_tracking_provider_isValid;

    QString m_tracking_number;
    bool m_tracking_number_isSet;
    bool m_tracking_number_isValid;

    QString m_tracking_link;
    bool m_tracking_link_isSet;
    bool m_tracking_link_isValid;

    bool m_send_notifications;
    bool m_send_notifications_isSet;
    bool m_send_notifications_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderShipmentTrackingAdd)

#endif // OAIOrderShipmentTrackingAdd_H
