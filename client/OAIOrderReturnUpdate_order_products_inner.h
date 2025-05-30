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
 * OAIOrderReturnUpdate_order_products_inner.h
 *
 * 
 */

#ifndef OAIOrderReturnUpdate_order_products_inner_H
#define OAIOrderReturnUpdate_order_products_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOrderReturnUpdate_order_products_inner : public OAIObject {
public:
    OAIOrderReturnUpdate_order_products_inner();
    OAIOrderReturnUpdate_order_products_inner(QString json);
    ~OAIOrderReturnUpdate_order_products_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getOrderProductId() const;
    void setOrderProductId(const QString &order_product_id);
    bool is_order_product_id_Set() const;
    bool is_order_product_id_Valid() const;

    qint32 getOrderProductQuantity() const;
    void setOrderProductQuantity(const qint32 &order_product_quantity);
    bool is_order_product_quantity_Set() const;
    bool is_order_product_quantity_Valid() const;

    QString getOrderProductStatus() const;
    void setOrderProductStatus(const QString &order_product_status);
    bool is_order_product_status_Set() const;
    bool is_order_product_status_Valid() const;

    QString getOrderProductActionId() const;
    void setOrderProductActionId(const QString &order_product_action_id);
    bool is_order_product_action_id_Set() const;
    bool is_order_product_action_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_order_product_id;
    bool m_order_product_id_isSet;
    bool m_order_product_id_isValid;

    qint32 m_order_product_quantity;
    bool m_order_product_quantity_isSet;
    bool m_order_product_quantity_isValid;

    QString m_order_product_status;
    bool m_order_product_status_isSet;
    bool m_order_product_status_isValid;

    QString m_order_product_action_id;
    bool m_order_product_action_id_isSet;
    bool m_order_product_action_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderReturnUpdate_order_products_inner)

#endif // OAIOrderReturnUpdate_order_products_inner_H
