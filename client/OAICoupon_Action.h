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
 * OAICoupon_Action.h
 *
 * 
 */

#ifndef OAICoupon_Action_H
#define OAICoupon_Action_H

#include <QJsonObject>

#include "OAICoupon_Condition.h"
#include "OAIObject.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICoupon_Condition;

class OAICoupon_Action : public OAIObject {
public:
    OAICoupon_Action();
    OAICoupon_Action(QString json);
    ~OAICoupon_Action() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getScope() const;
    void setScope(const QString &scope);
    bool is_scope_Set() const;
    bool is_scope_Valid() const;

    QString getApplyTo() const;
    void setApplyTo(const QString &apply_to);
    bool is_apply_to_Set() const;
    bool is_apply_to_Valid() const;

    double getAmount() const;
    void setAmount(const double &amount);
    bool is_amount_Set() const;
    bool is_amount_Valid() const;

    QString getCurrencyCode() const;
    void setCurrencyCode(const QString &currency_code);
    bool is_currency_code_Set() const;
    bool is_currency_code_Valid() const;

    bool isIncludeTax() const;
    void setIncludeTax(const bool &include_tax);
    bool is_include_tax_Set() const;
    bool is_include_tax_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    double getDiscountedQuantity() const;
    void setDiscountedQuantity(const double &discounted_quantity);
    bool is_discounted_quantity_Set() const;
    bool is_discounted_quantity_Valid() const;

    qint32 getDiscountQuantityStep() const;
    void setDiscountQuantityStep(const qint32 &discount_quantity_step);
    bool is_discount_quantity_step_Set() const;
    bool is_discount_quantity_step_Valid() const;

    QString getLogicOperator() const;
    void setLogicOperator(const QString &logic_operator);
    bool is_logic_operator_Set() const;
    bool is_logic_operator_Valid() const;

    QList<OAICoupon_Condition> getConditions() const;
    void setConditions(const QList<OAICoupon_Condition> &conditions);
    bool is_conditions_Set() const;
    bool is_conditions_Valid() const;

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

    QString m_scope;
    bool m_scope_isSet;
    bool m_scope_isValid;

    QString m_apply_to;
    bool m_apply_to_isSet;
    bool m_apply_to_isValid;

    double m_amount;
    bool m_amount_isSet;
    bool m_amount_isValid;

    QString m_currency_code;
    bool m_currency_code_isSet;
    bool m_currency_code_isValid;

    bool m_include_tax;
    bool m_include_tax_isSet;
    bool m_include_tax_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    double m_discounted_quantity;
    bool m_discounted_quantity_isSet;
    bool m_discounted_quantity_isValid;

    qint32 m_discount_quantity_step;
    bool m_discount_quantity_step_isSet;
    bool m_discount_quantity_step_isValid;

    QString m_logic_operator;
    bool m_logic_operator_isSet;
    bool m_logic_operator_isValid;

    QList<OAICoupon_Condition> m_conditions;
    bool m_conditions_isSet;
    bool m_conditions_isValid;

    OAIObject m_additional_fields;
    bool m_additional_fields_isSet;
    bool m_additional_fields_isValid;

    OAIObject m_custom_fields;
    bool m_custom_fields_isSet;
    bool m_custom_fields_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICoupon_Action)

#endif // OAICoupon_Action_H
