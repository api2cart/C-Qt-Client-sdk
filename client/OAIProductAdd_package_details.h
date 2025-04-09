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
 * OAIProductAdd_package_details.h
 *
 * If the seller is subscribed to \&quot;Business Policies\&quot;, use the seller_profiles instead of the shipping_details, payment_methods and return_accepted params.&lt;hr&gt;&lt;div style&#x3D;\&quot;font-style:normal\&quot;&gt;Param structure:&lt;div style&#x3D;\&quot;margin-left: 2%;\&quot;&gt;&lt;code style&#x3D;\&quot;padding:0; background-color:#ffffff;font-size:85%;font-family:monospace;\&quot;&gt;package_details[&lt;b&gt;measure_unit&lt;/b&gt;] &#x3D; string&lt;/br&gt; Allowed measure_unit values: [English or Metric] &lt;/br&gt; Default: Metric&lt;/br&gt;package_details[&lt;b&gt;weigh_unit&lt;/b&gt;] &#x3D; string&lt;/br&gt; Allowed weigh_unit values: [kg, g, lbs, oz]&lt;/br&gt;package_details[&lt;b&gt;package_depth&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;package_details[&lt;b&gt;package_length&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;package_details[&lt;b&gt;package_width&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;package_details[&lt;b&gt;weight_major&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;package_details[&lt;b&gt;weight_minor&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;package_details[&lt;b&gt;shipping_package&lt;/b&gt;] &#x3D; string&lt;/br&gt; See cart.info method, param &#x60;eBay_shipping_package_details&#x60;&lt;/code&gt;&lt;/div&gt;&lt;/div&gt;
 */

#ifndef OAIProductAdd_package_details_H
#define OAIProductAdd_package_details_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductAdd_package_details : public OAIObject {
public:
    OAIProductAdd_package_details();
    OAIProductAdd_package_details(QString json);
    ~OAIProductAdd_package_details() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getMeasureUnit() const;
    void setMeasureUnit(const QString &measure_unit);
    bool is_measure_unit_Set() const;
    bool is_measure_unit_Valid() const;

    QString getWeighUnit() const;
    void setWeighUnit(const QString &weigh_unit);
    bool is_weigh_unit_Set() const;
    bool is_weigh_unit_Valid() const;

    double getPackageDepth() const;
    void setPackageDepth(const double &package_depth);
    bool is_package_depth_Set() const;
    bool is_package_depth_Valid() const;

    double getPackageLength() const;
    void setPackageLength(const double &package_length);
    bool is_package_length_Set() const;
    bool is_package_length_Valid() const;

    double getPackageWidth() const;
    void setPackageWidth(const double &package_width);
    bool is_package_width_Set() const;
    bool is_package_width_Valid() const;

    double getWeightMajor() const;
    void setWeightMajor(const double &weight_major);
    bool is_weight_major_Set() const;
    bool is_weight_major_Valid() const;

    double getWeightMinor() const;
    void setWeightMinor(const double &weight_minor);
    bool is_weight_minor_Set() const;
    bool is_weight_minor_Valid() const;

    QString getShippingPackage() const;
    void setShippingPackage(const QString &shipping_package);
    bool is_shipping_package_Set() const;
    bool is_shipping_package_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_measure_unit;
    bool m_measure_unit_isSet;
    bool m_measure_unit_isValid;

    QString m_weigh_unit;
    bool m_weigh_unit_isSet;
    bool m_weigh_unit_isValid;

    double m_package_depth;
    bool m_package_depth_isSet;
    bool m_package_depth_isValid;

    double m_package_length;
    bool m_package_length_isSet;
    bool m_package_length_isValid;

    double m_package_width;
    bool m_package_width_isSet;
    bool m_package_width_isValid;

    double m_weight_major;
    bool m_weight_major_isSet;
    bool m_weight_major_isValid;

    double m_weight_minor;
    bool m_weight_minor_isSet;
    bool m_weight_minor_isValid;

    QString m_shipping_package;
    bool m_shipping_package_isSet;
    bool m_shipping_package_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductAdd_package_details)

#endif // OAIProductAdd_package_details_H
