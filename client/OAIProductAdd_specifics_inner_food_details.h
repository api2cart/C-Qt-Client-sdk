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
 * OAIProductAdd_specifics_inner_food_details.h
 *
 * 
 */

#ifndef OAIProductAdd_specifics_inner_food_details_H
#define OAIProductAdd_specifics_inner_food_details_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductAdd_specifics_inner_food_details : public OAIObject {
public:
    OAIProductAdd_specifics_inner_food_details();
    OAIProductAdd_specifics_inner_food_details(QString json);
    ~OAIProductAdd_specifics_inner_food_details() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    double getCalories() const;
    void setCalories(const double &calories);
    bool is_calories_Set() const;
    bool is_calories_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    double m_calories;
    bool m_calories_isSet;
    bool m_calories_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductAdd_specifics_inner_food_details)

#endif // OAIProductAdd_specifics_inner_food_details_H
