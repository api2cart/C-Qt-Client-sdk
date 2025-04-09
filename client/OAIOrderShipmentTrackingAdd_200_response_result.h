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
 * OAIOrderShipmentTrackingAdd_200_response_result.h
 *
 * 
 */

#ifndef OAIOrderShipmentTrackingAdd_200_response_result_H
#define OAIOrderShipmentTrackingAdd_200_response_result_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOrderShipmentTrackingAdd_200_response_result : public OAIObject {
public:
    OAIOrderShipmentTrackingAdd_200_response_result();
    OAIOrderShipmentTrackingAdd_200_response_result(QString json);
    ~OAIOrderShipmentTrackingAdd_200_response_result() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getShipmentTrackingId() const;
    void setShipmentTrackingId(const QString &shipment_tracking_id);
    bool is_shipment_tracking_id_Set() const;
    bool is_shipment_tracking_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_shipment_tracking_id;
    bool m_shipment_tracking_id_isSet;
    bool m_shipment_tracking_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderShipmentTrackingAdd_200_response_result)

#endif // OAIOrderShipmentTrackingAdd_200_response_result_H
