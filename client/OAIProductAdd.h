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
 * OAIProductAdd.h
 *
 * 
 */

#ifndef OAIProductAdd_H
#define OAIProductAdd_H

#include <QJsonObject>

#include "OAIProductAdd_best_offer.h"
#include "OAIProductAdd_certifications_inner.h"
#include "OAIProductAdd_files_inner.h"
#include "OAIProductAdd_group_prices_inner.h"
#include "OAIProductAdd_logistic_info_inner.h"
#include "OAIProductAdd_manufacturer_info.h"
#include "OAIProductAdd_package_details.h"
#include "OAIProductAdd_sales_tax.h"
#include "OAIProductAdd_seller_profiles.h"
#include "OAIProductAdd_shipping_details_inner.h"
#include "OAIProductAdd_size_chart.h"
#include "OAIProductAdd_specifics_inner.h"
#include "OAIProductAdd_tier_prices_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIProductAdd_tier_prices_inner;
class OAIProductAdd_group_prices_inner;
class OAIProductAdd_shipping_details_inner;
class OAIProductAdd_seller_profiles;
class OAIProductAdd_package_details;
class OAIProductAdd_best_offer;
class OAIProductAdd_sales_tax;
class OAIProductAdd_specifics_inner;
class OAIProductAdd_logistic_info_inner;
class OAIProductAdd_files_inner;
class OAIProductAdd_size_chart;
class OAIProductAdd_certifications_inner;
class OAIProductAdd_manufacturer_info;

class OAIProductAdd : public OAIObject {
public:
    OAIProductAdd();
    OAIProductAdd(QString json);
    ~OAIProductAdd() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getModel() const;
    void setModel(const QString &model);
    bool is_model_Set() const;
    bool is_model_Valid() const;

    QString getSku() const;
    void setSku(const QString &sku);
    bool is_sku_Set() const;
    bool is_sku_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    double getPrice() const;
    void setPrice(const double &price);
    bool is_price_Set() const;
    bool is_price_Valid() const;

    double getOldPrice() const;
    void setOldPrice(const double &old_price);
    bool is_old_price_Set() const;
    bool is_old_price_Valid() const;

    double getSpecialPrice() const;
    void setSpecialPrice(const double &special_price);
    bool is_special_price_Set() const;
    bool is_special_price_Valid() const;

    double getCostPrice() const;
    void setCostPrice(const double &cost_price);
    bool is_cost_price_Set() const;
    bool is_cost_price_Valid() const;

    double getFixedCostShippingPrice() const;
    void setFixedCostShippingPrice(const double &fixed_cost_shipping_price);
    bool is_fixed_cost_shipping_price_Set() const;
    bool is_fixed_cost_shipping_price_Valid() const;

    QString getSpriceCreate() const;
    void setSpriceCreate(const QString &sprice_create);
    bool is_sprice_create_Set() const;
    bool is_sprice_create_Valid() const;

    QString getSpriceModified() const;
    void setSpriceModified(const QString &sprice_modified);
    bool is_sprice_modified_Set() const;
    bool is_sprice_modified_Valid() const;

    QString getSpriceExpire() const;
    void setSpriceExpire(const QString &sprice_expire);
    bool is_sprice_expire_Set() const;
    bool is_sprice_expire_Valid() const;

    QList<OAIProductAdd_tier_prices_inner> getTierPrices() const;
    void setTierPrices(const QList<OAIProductAdd_tier_prices_inner> &tier_prices);
    bool is_tier_prices_Set() const;
    bool is_tier_prices_Valid() const;

    QList<OAIProductAdd_group_prices_inner> getGroupPrices() const;
    void setGroupPrices(const QList<OAIProductAdd_group_prices_inner> &group_prices);
    bool is_group_prices_Set() const;
    bool is_group_prices_Valid() const;

    bool isAvailableForView() const;
    void setAvailableForView(const bool &available_for_view);
    bool is_available_for_view_Set() const;
    bool is_available_for_view_Valid() const;

    bool isAvailableForSale() const;
    void setAvailableForSale(const bool &available_for_sale);
    bool is_available_for_sale_Set() const;
    bool is_available_for_sale_Valid() const;

    double getWeight() const;
    void setWeight(const double &weight);
    bool is_weight_Set() const;
    bool is_weight_Valid() const;

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

    QString getWeightUnit() const;
    void setWeightUnit(const QString &weight_unit);
    bool is_weight_unit_Set() const;
    bool is_weight_unit_Valid() const;

    QString getDimensionsUnit() const;
    void setDimensionsUnit(const QString &dimensions_unit);
    bool is_dimensions_unit_Set() const;
    bool is_dimensions_unit_Valid() const;

    QString getShortDescription() const;
    void setShortDescription(const QString &short_description);
    bool is_short_description_Set() const;
    bool is_short_description_Valid() const;

    QString getWarehouseId() const;
    void setWarehouseId(const QString &warehouse_id);
    bool is_warehouse_id_Set() const;
    bool is_warehouse_id_Valid() const;

    QString getBackorderStatus() const;
    void setBackorderStatus(const QString &backorder_status);
    bool is_backorder_status_Set() const;
    bool is_backorder_status_Valid() const;

    double getQuantity() const;
    void setQuantity(const double &quantity);
    bool is_quantity_Set() const;
    bool is_quantity_Valid() const;

    bool isDownloadable() const;
    void setDownloadable(const bool &downloadable);
    bool is_downloadable_Set() const;
    bool is_downloadable_Valid() const;

    double getWholesalePrice() const;
    void setWholesalePrice(const double &wholesale_price);
    bool is_wholesale_price_Set() const;
    bool is_wholesale_price_Valid() const;

    QString getCreatedAt() const;
    void setCreatedAt(const QString &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    QString getManufacturer() const;
    void setManufacturer(const QString &manufacturer);
    bool is_manufacturer_Set() const;
    bool is_manufacturer_Valid() const;

    QString getManufacturerId() const;
    void setManufacturerId(const QString &manufacturer_id);
    bool is_manufacturer_id_Set() const;
    bool is_manufacturer_id_Valid() const;

    QString getCategoriesIds() const;
    void setCategoriesIds(const QString &categories_ids);
    bool is_categories_ids_Set() const;
    bool is_categories_ids_Valid() const;

    QString getRelatedProductsIds() const;
    void setRelatedProductsIds(const QString &related_products_ids);
    bool is_related_products_ids_Set() const;
    bool is_related_products_ids_Valid() const;

    QString getUpSellProductsIds() const;
    void setUpSellProductsIds(const QString &up_sell_products_ids);
    bool is_up_sell_products_ids_Set() const;
    bool is_up_sell_products_ids_Valid() const;

    QString getCrossSellProductsIds() const;
    void setCrossSellProductsIds(const QString &cross_sell_products_ids);
    bool is_cross_sell_products_ids_Set() const;
    bool is_cross_sell_products_ids_Valid() const;

    QString getTaxClassId() const;
    void setTaxClassId(const QString &tax_class_id);
    bool is_tax_class_id_Set() const;
    bool is_tax_class_id_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getMetaTitle() const;
    void setMetaTitle(const QString &meta_title);
    bool is_meta_title_Set() const;
    bool is_meta_title_Valid() const;

    QString getMetaKeywords() const;
    void setMetaKeywords(const QString &meta_keywords);
    bool is_meta_keywords_Set() const;
    bool is_meta_keywords_Valid() const;

    QString getMetaDescription() const;
    void setMetaDescription(const QString &meta_description);
    bool is_meta_description_Set() const;
    bool is_meta_description_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    QString getLangId() const;
    void setLangId(const QString &lang_id);
    bool is_lang_id_Set() const;
    bool is_lang_id_Valid() const;

    QString getStoresIds() const;
    void setStoresIds(const QString &stores_ids);
    bool is_stores_ids_Set() const;
    bool is_stores_ids_Valid() const;

    QString getCategoryId() const;
    void setCategoryId(const QString &category_id);
    bool is_category_id_Set() const;
    bool is_category_id_Valid() const;

    qint32 getViewedCount() const;
    void setViewedCount(const qint32 &viewed_count);
    bool is_viewed_count_Set() const;
    bool is_viewed_count_Valid() const;

    qint32 getOrderedCount() const;
    void setOrderedCount(const qint32 &ordered_count);
    bool is_ordered_count_Set() const;
    bool is_ordered_count_Valid() const;

    QString getAttributeSetName() const;
    void setAttributeSetName(const QString &attribute_set_name);
    bool is_attribute_set_name_Set() const;
    bool is_attribute_set_name_Valid() const;

    QString getAttributeName() const;
    void setAttributeName(const QString &attribute_name);
    bool is_attribute_name_Set() const;
    bool is_attribute_name_Valid() const;

    qint32 getShippingTemplateId() const;
    void setShippingTemplateId(const qint32 &shipping_template_id);
    bool is_shipping_template_id_Set() const;
    bool is_shipping_template_id_Valid() const;

    QString getProductionPartnerIds() const;
    void setProductionPartnerIds(const QString &production_partner_ids);
    bool is_production_partner_ids_Set() const;
    bool is_production_partner_ids_Valid() const;

    QString getCondition() const;
    void setCondition(const QString &condition);
    bool is_condition_Set() const;
    bool is_condition_Valid() const;

    QString getListingDuration() const;
    void setListingDuration(const QString &listing_duration);
    bool is_listing_duration_Set() const;
    bool is_listing_duration_Valid() const;

    QString getListingType() const;
    void setListingType(const QString &listing_type);
    bool is_listing_type_Set() const;
    bool is_listing_type_Valid() const;

    QList<QString> getPaymentMethods() const;
    void setPaymentMethods(const QList<QString> &payment_methods);
    bool is_payment_methods_Set() const;
    bool is_payment_methods_Valid() const;

    bool isReturnAccepted() const;
    void setReturnAccepted(const bool &return_accepted);
    bool is_return_accepted_Set() const;
    bool is_return_accepted_Valid() const;

    QList<OAIProductAdd_shipping_details_inner> getShippingDetails() const;
    void setShippingDetails(const QList<OAIProductAdd_shipping_details_inner> &shipping_details);
    bool is_shipping_details_Set() const;
    bool is_shipping_details_Valid() const;

    QString getPaypalEmail() const;
    void setPaypalEmail(const QString &paypal_email);
    bool is_paypal_email_Set() const;
    bool is_paypal_email_Valid() const;

    OAIProductAdd_seller_profiles getSellerProfiles() const;
    void setSellerProfiles(const OAIProductAdd_seller_profiles &seller_profiles);
    bool is_seller_profiles_Set() const;
    bool is_seller_profiles_Valid() const;

    OAIProductAdd_package_details getPackageDetails() const;
    void setPackageDetails(const OAIProductAdd_package_details &package_details);
    bool is_package_details_Set() const;
    bool is_package_details_Valid() const;

    OAIProductAdd_best_offer getBestOffer() const;
    void setBestOffer(const OAIProductAdd_best_offer &best_offer);
    bool is_best_offer_Set() const;
    bool is_best_offer_Valid() const;

    OAIProductAdd_sales_tax getSalesTax() const;
    void setSalesTax(const OAIProductAdd_sales_tax &sales_tax);
    bool is_sales_tax_Set() const;
    bool is_sales_tax_Valid() const;

    QString getBarcode() const;
    void setBarcode(const QString &barcode);
    bool is_barcode_Set() const;
    bool is_barcode_Valid() const;

    QString getUpc() const;
    void setUpc(const QString &upc);
    bool is_upc_Set() const;
    bool is_upc_Valid() const;

    QString getEan() const;
    void setEan(const QString &ean);
    bool is_ean_Set() const;
    bool is_ean_Valid() const;

    QString getIsbn() const;
    void setIsbn(const QString &isbn);
    bool is_isbn_Set() const;
    bool is_isbn_Valid() const;

    QList<OAIProductAdd_specifics_inner> getSpecifics() const;
    void setSpecifics(const QList<OAIProductAdd_specifics_inner> &specifics);
    bool is_specifics_Set() const;
    bool is_specifics_Valid() const;

    QString getImageUrl() const;
    void setImageUrl(const QString &image_url);
    bool is_image_url_Set() const;
    bool is_image_url_Valid() const;

    QString getImageName() const;
    void setImageName(const QString &image_name);
    bool is_image_name_Set() const;
    bool is_image_name_Valid() const;

    QList<QString> getAdditionalImageUrls() const;
    void setAdditionalImageUrls(const QList<QString> &additional_image_urls);
    bool is_additional_image_urls_Set() const;
    bool is_additional_image_urls_Valid() const;

    double getReservePrice() const;
    void setReservePrice(const double &reserve_price);
    bool is_reserve_price_Set() const;
    bool is_reserve_price_Valid() const;

    double getBuyitnowPrice() const;
    void setBuyitnowPrice(const double &buyitnow_price);
    bool is_buyitnow_price_Set() const;
    bool is_buyitnow_price_Valid() const;

    QString getConditionDescription() const;
    void setConditionDescription(const QString &condition_description);
    bool is_condition_description_Set() const;
    bool is_condition_description_Valid() const;

    QString getAuctionConfidentialityLevel() const;
    void setAuctionConfidentialityLevel(const QString &auction_confidentiality_level);
    bool is_auction_confidentiality_level_Set() const;
    bool is_auction_confidentiality_level_Valid() const;

    QList<OAIProductAdd_logistic_info_inner> getLogisticInfo() const;
    void setLogisticInfo(const QList<OAIProductAdd_logistic_info_inner> &logistic_info);
    bool is_logistic_info_Set() const;
    bool is_logistic_info_Valid() const;

    QString getAvailFrom() const;
    void setAvailFrom(const QString &avail_from);
    bool is_avail_from_Set() const;
    bool is_avail_from_Valid() const;

    QString getTags() const;
    void setTags(const QString &tags);
    bool is_tags_Set() const;
    bool is_tags_Valid() const;

    bool isClearCache() const;
    void setClearCache(const bool &clear_cache);
    bool is_clear_cache_Set() const;
    bool is_clear_cache_Valid() const;

    QString getAsin() const;
    void setAsin(const QString &asin);
    bool is_asin_Set() const;
    bool is_asin_Valid() const;

    QString getGtin() const;
    void setGtin(const QString &gtin);
    bool is_gtin_Set() const;
    bool is_gtin_Valid() const;

    QString getMpn() const;
    void setMpn(const QString &mpn);
    bool is_mpn_Set() const;
    bool is_mpn_Valid() const;

    bool isTaxable() const;
    void setTaxable(const bool &taxable);
    bool is_taxable_Set() const;
    bool is_taxable_Valid() const;

    QString getVisible() const;
    void setVisible(const QString &visible);
    bool is_visible_Set() const;
    bool is_visible_Valid() const;

    QString getStatus() const;
    void setStatus(const QString &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getSeoUrl() const;
    void setSeoUrl(const QString &seo_url);
    bool is_seo_url_Set() const;
    bool is_seo_url_Valid() const;

    QString getProductClass() const;
    void setProductClass(const QString &product_class);
    bool is_product_class_Set() const;
    bool is_product_class_Valid() const;

    QString getProductType() const;
    void setProductType(const QString &product_type);
    bool is_product_type_Set() const;
    bool is_product_type_Valid() const;

    QString getMarketplaceItemProperties() const;
    void setMarketplaceItemProperties(const QString &marketplace_item_properties);
    bool is_marketplace_item_properties_Set() const;
    bool is_marketplace_item_properties_Valid() const;

    bool isManageStock() const;
    void setManageStock(const bool &manage_stock);
    bool is_manage_stock_Set() const;
    bool is_manage_stock_Valid() const;

    QString getHarmonizedSystemCode() const;
    void setHarmonizedSystemCode(const QString &harmonized_system_code);
    bool is_harmonized_system_code_Set() const;
    bool is_harmonized_system_code_Valid() const;

    QString getCountryOfOrigin() const;
    void setCountryOfOrigin(const QString &country_of_origin);
    bool is_country_of_origin_Set() const;
    bool is_country_of_origin_Valid() const;

    QList<OAIProductAdd_files_inner> getFiles() const;
    void setFiles(const QList<OAIProductAdd_files_inner> &files);
    bool is_files_Set() const;
    bool is_files_Valid() const;

    QString getSearchKeywords() const;
    void setSearchKeywords(const QString &search_keywords);
    bool is_search_keywords_Set() const;
    bool is_search_keywords_Valid() const;

    QString getStoreId() const;
    void setStoreId(const QString &store_id);
    bool is_store_id_Set() const;
    bool is_store_id_Valid() const;

    QString getBrandName() const;
    void setBrandName(const QString &brand_name);
    bool is_brand_name_Set() const;
    bool is_brand_name_Valid() const;

    bool isIsVirtual() const;
    void setIsVirtual(const bool &is_virtual);
    bool is_is_virtual_Set() const;
    bool is_is_virtual_Valid() const;

    bool isIsFreeShipping() const;
    void setIsFreeShipping(const bool &is_free_shipping);
    bool is_is_free_shipping_Set() const;
    bool is_is_free_shipping_Valid() const;

    bool isInStock() const;
    void setInStock(const bool &in_stock);
    bool is_in_stock_Set() const;
    bool is_in_stock_Valid() const;

    QString getDeliveryCode() const;
    void setDeliveryCode(const QString &delivery_code);
    bool is_delivery_code_Set() const;
    bool is_delivery_code_Valid() const;

    QString getProductReference() const;
    void setProductReference(const QString &product_reference);
    bool is_product_reference_Set() const;
    bool is_product_reference_Valid() const;

    QString getDeliveryType() const;
    void setDeliveryType(const QString &delivery_type);
    bool is_delivery_type_Set() const;
    bool is_delivery_type_Valid() const;

    qint32 getDeliveryTime() const;
    void setDeliveryTime(const qint32 &delivery_time);
    bool is_delivery_time_Set() const;
    bool is_delivery_time_Valid() const;

    OAIProductAdd_size_chart getSizeChart() const;
    void setSizeChart(const OAIProductAdd_size_chart &size_chart);
    bool is_size_chart_Set() const;
    bool is_size_chart_Valid() const;

    QList<OAIProductAdd_certifications_inner> getCertifications() const;
    void setCertifications(const QList<OAIProductAdd_certifications_inner> &certifications);
    bool is_certifications_Set() const;
    bool is_certifications_Valid() const;

    QString getDeliveryOptionIds() const;
    void setDeliveryOptionIds(const QString &delivery_option_ids);
    bool is_delivery_option_ids_Set() const;
    bool is_delivery_option_ids_Valid() const;

    OAIProductAdd_manufacturer_info getManufacturerInfo() const;
    void setManufacturerInfo(const OAIProductAdd_manufacturer_info &manufacturer_info);
    bool is_manufacturer_info_Set() const;
    bool is_manufacturer_info_Valid() const;

    QString getWhenMade() const;
    void setWhenMade(const QString &when_made);
    bool is_when_made_Set() const;
    bool is_when_made_Valid() const;

    bool isIsSupply() const;
    void setIsSupply(const bool &is_supply);
    bool is_is_supply_Set() const;
    bool is_is_supply_Valid() const;

    QList<QString> getMaterials() const;
    void setMaterials(const QList<QString> &materials);
    bool is_materials_Set() const;
    bool is_materials_Valid() const;

    bool isAutoRenew() const;
    void setAutoRenew(const bool &auto_renew);
    bool is_auto_renew_Set() const;
    bool is_auto_renew_Valid() const;

    bool isAllowDisplayCondition() const;
    void setAllowDisplayCondition(const bool &allow_display_condition);
    bool is_allow_display_condition_Set() const;
    bool is_allow_display_condition_Valid() const;

    double getMinOrderQuantity() const;
    void setMinOrderQuantity(const double &min_order_quantity);
    bool is_min_order_quantity_Set() const;
    bool is_min_order_quantity_Valid() const;

    double getMaxOrderQuantity() const;
    void setMaxOrderQuantity(const double &max_order_quantity);
    bool is_max_order_quantity_Set() const;
    bool is_max_order_quantity_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_model;
    bool m_model_isSet;
    bool m_model_isValid;

    QString m_sku;
    bool m_sku_isSet;
    bool m_sku_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    double m_price;
    bool m_price_isSet;
    bool m_price_isValid;

    double m_old_price;
    bool m_old_price_isSet;
    bool m_old_price_isValid;

    double m_special_price;
    bool m_special_price_isSet;
    bool m_special_price_isValid;

    double m_cost_price;
    bool m_cost_price_isSet;
    bool m_cost_price_isValid;

    double m_fixed_cost_shipping_price;
    bool m_fixed_cost_shipping_price_isSet;
    bool m_fixed_cost_shipping_price_isValid;

    QString m_sprice_create;
    bool m_sprice_create_isSet;
    bool m_sprice_create_isValid;

    QString m_sprice_modified;
    bool m_sprice_modified_isSet;
    bool m_sprice_modified_isValid;

    QString m_sprice_expire;
    bool m_sprice_expire_isSet;
    bool m_sprice_expire_isValid;

    QList<OAIProductAdd_tier_prices_inner> m_tier_prices;
    bool m_tier_prices_isSet;
    bool m_tier_prices_isValid;

    QList<OAIProductAdd_group_prices_inner> m_group_prices;
    bool m_group_prices_isSet;
    bool m_group_prices_isValid;

    bool m_available_for_view;
    bool m_available_for_view_isSet;
    bool m_available_for_view_isValid;

    bool m_available_for_sale;
    bool m_available_for_sale_isSet;
    bool m_available_for_sale_isValid;

    double m_weight;
    bool m_weight_isSet;
    bool m_weight_isValid;

    double m_width;
    bool m_width_isSet;
    bool m_width_isValid;

    double m_height;
    bool m_height_isSet;
    bool m_height_isValid;

    double m_length;
    bool m_length_isSet;
    bool m_length_isValid;

    QString m_weight_unit;
    bool m_weight_unit_isSet;
    bool m_weight_unit_isValid;

    QString m_dimensions_unit;
    bool m_dimensions_unit_isSet;
    bool m_dimensions_unit_isValid;

    QString m_short_description;
    bool m_short_description_isSet;
    bool m_short_description_isValid;

    QString m_warehouse_id;
    bool m_warehouse_id_isSet;
    bool m_warehouse_id_isValid;

    QString m_backorder_status;
    bool m_backorder_status_isSet;
    bool m_backorder_status_isValid;

    double m_quantity;
    bool m_quantity_isSet;
    bool m_quantity_isValid;

    bool m_downloadable;
    bool m_downloadable_isSet;
    bool m_downloadable_isValid;

    double m_wholesale_price;
    bool m_wholesale_price_isSet;
    bool m_wholesale_price_isValid;

    QString m_created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    QString m_manufacturer;
    bool m_manufacturer_isSet;
    bool m_manufacturer_isValid;

    QString m_manufacturer_id;
    bool m_manufacturer_id_isSet;
    bool m_manufacturer_id_isValid;

    QString m_categories_ids;
    bool m_categories_ids_isSet;
    bool m_categories_ids_isValid;

    QString m_related_products_ids;
    bool m_related_products_ids_isSet;
    bool m_related_products_ids_isValid;

    QString m_up_sell_products_ids;
    bool m_up_sell_products_ids_isSet;
    bool m_up_sell_products_ids_isValid;

    QString m_cross_sell_products_ids;
    bool m_cross_sell_products_ids_isSet;
    bool m_cross_sell_products_ids_isValid;

    QString m_tax_class_id;
    bool m_tax_class_id_isSet;
    bool m_tax_class_id_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_meta_title;
    bool m_meta_title_isSet;
    bool m_meta_title_isValid;

    QString m_meta_keywords;
    bool m_meta_keywords_isSet;
    bool m_meta_keywords_isValid;

    QString m_meta_description;
    bool m_meta_description_isSet;
    bool m_meta_description_isValid;

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;

    QString m_lang_id;
    bool m_lang_id_isSet;
    bool m_lang_id_isValid;

    QString m_stores_ids;
    bool m_stores_ids_isSet;
    bool m_stores_ids_isValid;

    QString m_category_id;
    bool m_category_id_isSet;
    bool m_category_id_isValid;

    qint32 m_viewed_count;
    bool m_viewed_count_isSet;
    bool m_viewed_count_isValid;

    qint32 m_ordered_count;
    bool m_ordered_count_isSet;
    bool m_ordered_count_isValid;

    QString m_attribute_set_name;
    bool m_attribute_set_name_isSet;
    bool m_attribute_set_name_isValid;

    QString m_attribute_name;
    bool m_attribute_name_isSet;
    bool m_attribute_name_isValid;

    qint32 m_shipping_template_id;
    bool m_shipping_template_id_isSet;
    bool m_shipping_template_id_isValid;

    QString m_production_partner_ids;
    bool m_production_partner_ids_isSet;
    bool m_production_partner_ids_isValid;

    QString m_condition;
    bool m_condition_isSet;
    bool m_condition_isValid;

    QString m_listing_duration;
    bool m_listing_duration_isSet;
    bool m_listing_duration_isValid;

    QString m_listing_type;
    bool m_listing_type_isSet;
    bool m_listing_type_isValid;

    QList<QString> m_payment_methods;
    bool m_payment_methods_isSet;
    bool m_payment_methods_isValid;

    bool m_return_accepted;
    bool m_return_accepted_isSet;
    bool m_return_accepted_isValid;

    QList<OAIProductAdd_shipping_details_inner> m_shipping_details;
    bool m_shipping_details_isSet;
    bool m_shipping_details_isValid;

    QString m_paypal_email;
    bool m_paypal_email_isSet;
    bool m_paypal_email_isValid;

    OAIProductAdd_seller_profiles m_seller_profiles;
    bool m_seller_profiles_isSet;
    bool m_seller_profiles_isValid;

    OAIProductAdd_package_details m_package_details;
    bool m_package_details_isSet;
    bool m_package_details_isValid;

    OAIProductAdd_best_offer m_best_offer;
    bool m_best_offer_isSet;
    bool m_best_offer_isValid;

    OAIProductAdd_sales_tax m_sales_tax;
    bool m_sales_tax_isSet;
    bool m_sales_tax_isValid;

    QString m_barcode;
    bool m_barcode_isSet;
    bool m_barcode_isValid;

    QString m_upc;
    bool m_upc_isSet;
    bool m_upc_isValid;

    QString m_ean;
    bool m_ean_isSet;
    bool m_ean_isValid;

    QString m_isbn;
    bool m_isbn_isSet;
    bool m_isbn_isValid;

    QList<OAIProductAdd_specifics_inner> m_specifics;
    bool m_specifics_isSet;
    bool m_specifics_isValid;

    QString m_image_url;
    bool m_image_url_isSet;
    bool m_image_url_isValid;

    QString m_image_name;
    bool m_image_name_isSet;
    bool m_image_name_isValid;

    QList<QString> m_additional_image_urls;
    bool m_additional_image_urls_isSet;
    bool m_additional_image_urls_isValid;

    double m_reserve_price;
    bool m_reserve_price_isSet;
    bool m_reserve_price_isValid;

    double m_buyitnow_price;
    bool m_buyitnow_price_isSet;
    bool m_buyitnow_price_isValid;

    QString m_condition_description;
    bool m_condition_description_isSet;
    bool m_condition_description_isValid;

    QString m_auction_confidentiality_level;
    bool m_auction_confidentiality_level_isSet;
    bool m_auction_confidentiality_level_isValid;

    QList<OAIProductAdd_logistic_info_inner> m_logistic_info;
    bool m_logistic_info_isSet;
    bool m_logistic_info_isValid;

    QString m_avail_from;
    bool m_avail_from_isSet;
    bool m_avail_from_isValid;

    QString m_tags;
    bool m_tags_isSet;
    bool m_tags_isValid;

    bool m_clear_cache;
    bool m_clear_cache_isSet;
    bool m_clear_cache_isValid;

    QString m_asin;
    bool m_asin_isSet;
    bool m_asin_isValid;

    QString m_gtin;
    bool m_gtin_isSet;
    bool m_gtin_isValid;

    QString m_mpn;
    bool m_mpn_isSet;
    bool m_mpn_isValid;

    bool m_taxable;
    bool m_taxable_isSet;
    bool m_taxable_isValid;

    QString m_visible;
    bool m_visible_isSet;
    bool m_visible_isValid;

    QString m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString m_seo_url;
    bool m_seo_url_isSet;
    bool m_seo_url_isValid;

    QString m_product_class;
    bool m_product_class_isSet;
    bool m_product_class_isValid;

    QString m_product_type;
    bool m_product_type_isSet;
    bool m_product_type_isValid;

    QString m_marketplace_item_properties;
    bool m_marketplace_item_properties_isSet;
    bool m_marketplace_item_properties_isValid;

    bool m_manage_stock;
    bool m_manage_stock_isSet;
    bool m_manage_stock_isValid;

    QString m_harmonized_system_code;
    bool m_harmonized_system_code_isSet;
    bool m_harmonized_system_code_isValid;

    QString m_country_of_origin;
    bool m_country_of_origin_isSet;
    bool m_country_of_origin_isValid;

    QList<OAIProductAdd_files_inner> m_files;
    bool m_files_isSet;
    bool m_files_isValid;

    QString m_search_keywords;
    bool m_search_keywords_isSet;
    bool m_search_keywords_isValid;

    QString m_store_id;
    bool m_store_id_isSet;
    bool m_store_id_isValid;

    QString m_brand_name;
    bool m_brand_name_isSet;
    bool m_brand_name_isValid;

    bool m_is_virtual;
    bool m_is_virtual_isSet;
    bool m_is_virtual_isValid;

    bool m_is_free_shipping;
    bool m_is_free_shipping_isSet;
    bool m_is_free_shipping_isValid;

    bool m_in_stock;
    bool m_in_stock_isSet;
    bool m_in_stock_isValid;

    QString m_delivery_code;
    bool m_delivery_code_isSet;
    bool m_delivery_code_isValid;

    QString m_product_reference;
    bool m_product_reference_isSet;
    bool m_product_reference_isValid;

    QString m_delivery_type;
    bool m_delivery_type_isSet;
    bool m_delivery_type_isValid;

    qint32 m_delivery_time;
    bool m_delivery_time_isSet;
    bool m_delivery_time_isValid;

    OAIProductAdd_size_chart m_size_chart;
    bool m_size_chart_isSet;
    bool m_size_chart_isValid;

    QList<OAIProductAdd_certifications_inner> m_certifications;
    bool m_certifications_isSet;
    bool m_certifications_isValid;

    QString m_delivery_option_ids;
    bool m_delivery_option_ids_isSet;
    bool m_delivery_option_ids_isValid;

    OAIProductAdd_manufacturer_info m_manufacturer_info;
    bool m_manufacturer_info_isSet;
    bool m_manufacturer_info_isValid;

    QString m_when_made;
    bool m_when_made_isSet;
    bool m_when_made_isValid;

    bool m_is_supply;
    bool m_is_supply_isSet;
    bool m_is_supply_isValid;

    QList<QString> m_materials;
    bool m_materials_isSet;
    bool m_materials_isValid;

    bool m_auto_renew;
    bool m_auto_renew_isSet;
    bool m_auto_renew_isValid;

    bool m_allow_display_condition;
    bool m_allow_display_condition_isSet;
    bool m_allow_display_condition_isValid;

    double m_min_order_quantity;
    bool m_min_order_quantity_isSet;
    bool m_min_order_quantity_isValid;

    double m_max_order_quantity;
    bool m_max_order_quantity_isSet;
    bool m_max_order_quantity_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductAdd)

#endif // OAIProductAdd_H
