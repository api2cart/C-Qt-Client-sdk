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
 * OAIMarketplace_Product.h
 *
 * 
 */

#ifndef OAIMarketplace_Product_H
#define OAIMarketplace_Product_H

#include <QJsonObject>

#include "OAIImage.h"
#include "OAIObject.h"
#include "OAIProduct_Option.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIImage;
class OAIProduct_Option;

class OAIMarketplace_Product : public OAIObject {
public:
    OAIMarketplace_Product();
    OAIMarketplace_Product(QString json);
    ~OAIMarketplace_Product() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getUAsin() const;
    void setUAsin(const QString &u_asin);
    bool is_u_asin_Set() const;
    bool is_u_asin_Valid() const;

    QString getUEan() const;
    void setUEan(const QString &u_ean);
    bool is_u_ean_Set() const;
    bool is_u_ean_Valid() const;

    QString getUGtin() const;
    void setUGtin(const QString &u_gtin);
    bool is_u_gtin_Set() const;
    bool is_u_gtin_Valid() const;

    QString getUIsbn() const;
    void setUIsbn(const QString &u_isbn);
    bool is_u_isbn_Set() const;
    bool is_u_isbn_Valid() const;

    QString getUMpn() const;
    void setUMpn(const QString &u_mpn);
    bool is_u_mpn_Set() const;
    bool is_u_mpn_Valid() const;

    QString getUUpc() const;
    void setUUpc(const QString &u_upc);
    bool is_u_upc_Set() const;
    bool is_u_upc_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    double getPrice() const;
    void setPrice(const double &price);
    bool is_price_Set() const;
    bool is_price_Valid() const;

    QList<OAIImage> getImages() const;
    void setImages(const QList<OAIImage> &images);
    bool is_images_Set() const;
    bool is_images_Valid() const;

    QList<OAIProduct_Option> getProductOptions() const;
    void setProductOptions(const QList<OAIProduct_Option> &product_options);
    bool is_product_options_Set() const;
    bool is_product_options_Valid() const;

    QString getManufacturer() const;
    void setManufacturer(const QString &manufacturer);
    bool is_manufacturer_Set() const;
    bool is_manufacturer_Valid() const;

    QString getBrand() const;
    void setBrand(const QString &brand);
    bool is_brand_Set() const;
    bool is_brand_Valid() const;

    double getWeight() const;
    void setWeight(const double &weight);
    bool is_weight_Set() const;
    bool is_weight_Valid() const;

    QString getWeightUnit() const;
    void setWeightUnit(const QString &weight_unit);
    bool is_weight_unit_Set() const;
    bool is_weight_unit_Valid() const;

    QString getDimensionsUnit() const;
    void setDimensionsUnit(const QString &dimensions_unit);
    bool is_dimensions_unit_Set() const;
    bool is_dimensions_unit_Valid() const;

    double getWidth() const;
    void setWidth(const double &width);
    bool is_width_Set() const;
    bool is_width_Valid() const;

    double getHeight() const;
    void setHeight(const double &height);
    bool is_height_Set() const;
    bool is_height_Valid() const;

    double getLength() const;
    void setLength(const double &length);
    bool is_length_Set() const;
    bool is_length_Valid() const;

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

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_u_asin;
    bool m_u_asin_isSet;
    bool m_u_asin_isValid;

    QString m_u_ean;
    bool m_u_ean_isSet;
    bool m_u_ean_isValid;

    QString m_u_gtin;
    bool m_u_gtin_isSet;
    bool m_u_gtin_isValid;

    QString m_u_isbn;
    bool m_u_isbn_isSet;
    bool m_u_isbn_isValid;

    QString m_u_mpn;
    bool m_u_mpn_isSet;
    bool m_u_mpn_isValid;

    QString m_u_upc;
    bool m_u_upc_isSet;
    bool m_u_upc_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;

    double m_price;
    bool m_price_isSet;
    bool m_price_isValid;

    QList<OAIImage> m_images;
    bool m_images_isSet;
    bool m_images_isValid;

    QList<OAIProduct_Option> m_product_options;
    bool m_product_options_isSet;
    bool m_product_options_isValid;

    QString m_manufacturer;
    bool m_manufacturer_isSet;
    bool m_manufacturer_isValid;

    QString m_brand;
    bool m_brand_isSet;
    bool m_brand_isValid;

    double m_weight;
    bool m_weight_isSet;
    bool m_weight_isValid;

    QString m_weight_unit;
    bool m_weight_unit_isSet;
    bool m_weight_unit_isValid;

    QString m_dimensions_unit;
    bool m_dimensions_unit_isSet;
    bool m_dimensions_unit_isValid;

    double m_width;
    bool m_width_isSet;
    bool m_width_isValid;

    double m_height;
    bool m_height_isSet;
    bool m_height_isValid;

    double m_length;
    bool m_length_isSet;
    bool m_length_isValid;

    OAIObject m_additional_fields;
    bool m_additional_fields_isSet;
    bool m_additional_fields_isValid;

    OAIObject m_custom_fields;
    bool m_custom_fields_isSet;
    bool m_custom_fields_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMarketplace_Product)

#endif // OAIMarketplace_Product_H
