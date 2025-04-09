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

#include "OAIChild.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIChild::OAIChild(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChild::OAIChild() {
    this->initializeModel();
}

OAIChild::~OAIChild() {}

void OAIChild::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_parent_id_isSet = false;
    m_parent_id_isValid = false;

    m_sku_isSet = false;
    m_sku_isValid = false;

    m_upc_isSet = false;
    m_upc_isValid = false;

    m_ean_isSet = false;
    m_ean_isValid = false;

    m_mpn_isSet = false;
    m_mpn_isValid = false;

    m_gtin_isSet = false;
    m_gtin_isValid = false;

    m_isbn_isSet = false;
    m_isbn_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_seo_url_isSet = false;
    m_seo_url_isValid = false;

    m_sort_order_isSet = false;
    m_sort_order_isValid = false;

    m_created_time_isSet = false;
    m_created_time_isValid = false;

    m_modified_time_isSet = false;
    m_modified_time_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_short_description_isSet = false;
    m_short_description_isValid = false;

    m_full_description_isSet = false;
    m_full_description_isValid = false;

    m_images_isSet = false;
    m_images_isValid = false;

    m_combination_isSet = false;
    m_combination_isValid = false;

    m_default_price_isSet = false;
    m_default_price_isValid = false;

    m_cost_price_isSet = false;
    m_cost_price_isValid = false;

    m_list_price_isSet = false;
    m_list_price_isValid = false;

    m_wholesale_price_isSet = false;
    m_wholesale_price_isValid = false;

    m_advanced_price_isSet = false;
    m_advanced_price_isValid = false;

    m_tax_class_id_isSet = false;
    m_tax_class_id_isValid = false;

    m_avail_for_sale_isSet = false;
    m_avail_for_sale_isValid = false;

    m_allow_backorders_isSet = false;
    m_allow_backorders_isValid = false;

    m_in_stock_isSet = false;
    m_in_stock_isValid = false;

    m_manage_stock_isSet = false;
    m_manage_stock_isValid = false;

    m_inventory_level_isSet = false;
    m_inventory_level_isValid = false;

    m_inventory_isSet = false;
    m_inventory_isValid = false;

    m_min_quantity_isSet = false;
    m_min_quantity_isValid = false;

    m_default_qty_in_pack_isSet = false;
    m_default_qty_in_pack_isValid = false;

    m_is_qty_in_pack_fixed_isSet = false;
    m_is_qty_in_pack_fixed_isValid = false;

    m_weight_unit_isSet = false;
    m_weight_unit_isValid = false;

    m_weight_isSet = false;
    m_weight_isValid = false;

    m_dimensions_unit_isSet = false;
    m_dimensions_unit_isValid = false;

    m_width_isSet = false;
    m_width_isValid = false;

    m_height_isSet = false;
    m_height_isValid = false;

    m_length_isSet = false;
    m_length_isValid = false;

    m_meta_title_isSet = false;
    m_meta_title_isValid = false;

    m_meta_description_isSet = false;
    m_meta_description_isValid = false;

    m_meta_keywords_isSet = false;
    m_meta_keywords_isValid = false;

    m_discounts_isSet = false;
    m_discounts_isValid = false;

    m_is_virtual_isSet = false;
    m_is_virtual_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAIChild::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChild::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_parent_id_isValid = ::OpenAPI::fromJsonValue(m_parent_id, json[QString("parent_id")]);
    m_parent_id_isSet = !json[QString("parent_id")].isNull() && m_parent_id_isValid;

    m_sku_isValid = ::OpenAPI::fromJsonValue(m_sku, json[QString("sku")]);
    m_sku_isSet = !json[QString("sku")].isNull() && m_sku_isValid;

    m_upc_isValid = ::OpenAPI::fromJsonValue(m_upc, json[QString("upc")]);
    m_upc_isSet = !json[QString("upc")].isNull() && m_upc_isValid;

    m_ean_isValid = ::OpenAPI::fromJsonValue(m_ean, json[QString("ean")]);
    m_ean_isSet = !json[QString("ean")].isNull() && m_ean_isValid;

    m_mpn_isValid = ::OpenAPI::fromJsonValue(m_mpn, json[QString("mpn")]);
    m_mpn_isSet = !json[QString("mpn")].isNull() && m_mpn_isValid;

    m_gtin_isValid = ::OpenAPI::fromJsonValue(m_gtin, json[QString("gtin")]);
    m_gtin_isSet = !json[QString("gtin")].isNull() && m_gtin_isValid;

    m_isbn_isValid = ::OpenAPI::fromJsonValue(m_isbn, json[QString("isbn")]);
    m_isbn_isSet = !json[QString("isbn")].isNull() && m_isbn_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_seo_url_isValid = ::OpenAPI::fromJsonValue(m_seo_url, json[QString("seo_url")]);
    m_seo_url_isSet = !json[QString("seo_url")].isNull() && m_seo_url_isValid;

    m_sort_order_isValid = ::OpenAPI::fromJsonValue(m_sort_order, json[QString("sort_order")]);
    m_sort_order_isSet = !json[QString("sort_order")].isNull() && m_sort_order_isValid;

    m_created_time_isValid = ::OpenAPI::fromJsonValue(m_created_time, json[QString("created_time")]);
    m_created_time_isSet = !json[QString("created_time")].isNull() && m_created_time_isValid;

    m_modified_time_isValid = ::OpenAPI::fromJsonValue(m_modified_time, json[QString("modified_time")]);
    m_modified_time_isSet = !json[QString("modified_time")].isNull() && m_modified_time_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_short_description_isValid = ::OpenAPI::fromJsonValue(m_short_description, json[QString("short_description")]);
    m_short_description_isSet = !json[QString("short_description")].isNull() && m_short_description_isValid;

    m_full_description_isValid = ::OpenAPI::fromJsonValue(m_full_description, json[QString("full_description")]);
    m_full_description_isSet = !json[QString("full_description")].isNull() && m_full_description_isValid;

    m_images_isValid = ::OpenAPI::fromJsonValue(m_images, json[QString("images")]);
    m_images_isSet = !json[QString("images")].isNull() && m_images_isValid;

    m_combination_isValid = ::OpenAPI::fromJsonValue(m_combination, json[QString("combination")]);
    m_combination_isSet = !json[QString("combination")].isNull() && m_combination_isValid;

    m_default_price_isValid = ::OpenAPI::fromJsonValue(m_default_price, json[QString("default_price")]);
    m_default_price_isSet = !json[QString("default_price")].isNull() && m_default_price_isValid;

    m_cost_price_isValid = ::OpenAPI::fromJsonValue(m_cost_price, json[QString("cost_price")]);
    m_cost_price_isSet = !json[QString("cost_price")].isNull() && m_cost_price_isValid;

    m_list_price_isValid = ::OpenAPI::fromJsonValue(m_list_price, json[QString("list_price")]);
    m_list_price_isSet = !json[QString("list_price")].isNull() && m_list_price_isValid;

    m_wholesale_price_isValid = ::OpenAPI::fromJsonValue(m_wholesale_price, json[QString("wholesale_price")]);
    m_wholesale_price_isSet = !json[QString("wholesale_price")].isNull() && m_wholesale_price_isValid;

    m_advanced_price_isValid = ::OpenAPI::fromJsonValue(m_advanced_price, json[QString("advanced_price")]);
    m_advanced_price_isSet = !json[QString("advanced_price")].isNull() && m_advanced_price_isValid;

    m_tax_class_id_isValid = ::OpenAPI::fromJsonValue(m_tax_class_id, json[QString("tax_class_id")]);
    m_tax_class_id_isSet = !json[QString("tax_class_id")].isNull() && m_tax_class_id_isValid;

    m_avail_for_sale_isValid = ::OpenAPI::fromJsonValue(m_avail_for_sale, json[QString("avail_for_sale")]);
    m_avail_for_sale_isSet = !json[QString("avail_for_sale")].isNull() && m_avail_for_sale_isValid;

    m_allow_backorders_isValid = ::OpenAPI::fromJsonValue(m_allow_backorders, json[QString("allow_backorders")]);
    m_allow_backorders_isSet = !json[QString("allow_backorders")].isNull() && m_allow_backorders_isValid;

    m_in_stock_isValid = ::OpenAPI::fromJsonValue(m_in_stock, json[QString("in_stock")]);
    m_in_stock_isSet = !json[QString("in_stock")].isNull() && m_in_stock_isValid;

    m_manage_stock_isValid = ::OpenAPI::fromJsonValue(m_manage_stock, json[QString("manage_stock")]);
    m_manage_stock_isSet = !json[QString("manage_stock")].isNull() && m_manage_stock_isValid;

    m_inventory_level_isValid = ::OpenAPI::fromJsonValue(m_inventory_level, json[QString("inventory_level")]);
    m_inventory_level_isSet = !json[QString("inventory_level")].isNull() && m_inventory_level_isValid;

    m_inventory_isValid = ::OpenAPI::fromJsonValue(m_inventory, json[QString("inventory")]);
    m_inventory_isSet = !json[QString("inventory")].isNull() && m_inventory_isValid;

    m_min_quantity_isValid = ::OpenAPI::fromJsonValue(m_min_quantity, json[QString("min_quantity")]);
    m_min_quantity_isSet = !json[QString("min_quantity")].isNull() && m_min_quantity_isValid;

    m_default_qty_in_pack_isValid = ::OpenAPI::fromJsonValue(m_default_qty_in_pack, json[QString("default_qty_in_pack")]);
    m_default_qty_in_pack_isSet = !json[QString("default_qty_in_pack")].isNull() && m_default_qty_in_pack_isValid;

    m_is_qty_in_pack_fixed_isValid = ::OpenAPI::fromJsonValue(m_is_qty_in_pack_fixed, json[QString("is_qty_in_pack_fixed")]);
    m_is_qty_in_pack_fixed_isSet = !json[QString("is_qty_in_pack_fixed")].isNull() && m_is_qty_in_pack_fixed_isValid;

    m_weight_unit_isValid = ::OpenAPI::fromJsonValue(m_weight_unit, json[QString("weight_unit")]);
    m_weight_unit_isSet = !json[QString("weight_unit")].isNull() && m_weight_unit_isValid;

    m_weight_isValid = ::OpenAPI::fromJsonValue(m_weight, json[QString("weight")]);
    m_weight_isSet = !json[QString("weight")].isNull() && m_weight_isValid;

    m_dimensions_unit_isValid = ::OpenAPI::fromJsonValue(m_dimensions_unit, json[QString("dimensions_unit")]);
    m_dimensions_unit_isSet = !json[QString("dimensions_unit")].isNull() && m_dimensions_unit_isValid;

    m_width_isValid = ::OpenAPI::fromJsonValue(m_width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;

    m_height_isValid = ::OpenAPI::fromJsonValue(m_height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_length_isValid = ::OpenAPI::fromJsonValue(m_length, json[QString("length")]);
    m_length_isSet = !json[QString("length")].isNull() && m_length_isValid;

    m_meta_title_isValid = ::OpenAPI::fromJsonValue(m_meta_title, json[QString("meta_title")]);
    m_meta_title_isSet = !json[QString("meta_title")].isNull() && m_meta_title_isValid;

    m_meta_description_isValid = ::OpenAPI::fromJsonValue(m_meta_description, json[QString("meta_description")]);
    m_meta_description_isSet = !json[QString("meta_description")].isNull() && m_meta_description_isValid;

    m_meta_keywords_isValid = ::OpenAPI::fromJsonValue(m_meta_keywords, json[QString("meta_keywords")]);
    m_meta_keywords_isSet = !json[QString("meta_keywords")].isNull() && m_meta_keywords_isValid;

    m_discounts_isValid = ::OpenAPI::fromJsonValue(m_discounts, json[QString("discounts")]);
    m_discounts_isSet = !json[QString("discounts")].isNull() && m_discounts_isValid;

    m_is_virtual_isValid = ::OpenAPI::fromJsonValue(m_is_virtual, json[QString("is_virtual")]);
    m_is_virtual_isSet = !json[QString("is_virtual")].isNull() && m_is_virtual_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAIChild::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChild::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_parent_id_isSet) {
        obj.insert(QString("parent_id"), ::OpenAPI::toJsonValue(m_parent_id));
    }
    if (m_sku_isSet) {
        obj.insert(QString("sku"), ::OpenAPI::toJsonValue(m_sku));
    }
    if (m_upc_isSet) {
        obj.insert(QString("upc"), ::OpenAPI::toJsonValue(m_upc));
    }
    if (m_ean_isSet) {
        obj.insert(QString("ean"), ::OpenAPI::toJsonValue(m_ean));
    }
    if (m_mpn_isSet) {
        obj.insert(QString("mpn"), ::OpenAPI::toJsonValue(m_mpn));
    }
    if (m_gtin_isSet) {
        obj.insert(QString("gtin"), ::OpenAPI::toJsonValue(m_gtin));
    }
    if (m_isbn_isSet) {
        obj.insert(QString("isbn"), ::OpenAPI::toJsonValue(m_isbn));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(m_url));
    }
    if (m_seo_url_isSet) {
        obj.insert(QString("seo_url"), ::OpenAPI::toJsonValue(m_seo_url));
    }
    if (m_sort_order_isSet) {
        obj.insert(QString("sort_order"), ::OpenAPI::toJsonValue(m_sort_order));
    }
    if (m_created_time.isSet()) {
        obj.insert(QString("created_time"), ::OpenAPI::toJsonValue(m_created_time));
    }
    if (m_modified_time.isSet()) {
        obj.insert(QString("modified_time"), ::OpenAPI::toJsonValue(m_modified_time));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_short_description_isSet) {
        obj.insert(QString("short_description"), ::OpenAPI::toJsonValue(m_short_description));
    }
    if (m_full_description_isSet) {
        obj.insert(QString("full_description"), ::OpenAPI::toJsonValue(m_full_description));
    }
    if (m_images.size() > 0) {
        obj.insert(QString("images"), ::OpenAPI::toJsonValue(m_images));
    }
    if (m_combination.size() > 0) {
        obj.insert(QString("combination"), ::OpenAPI::toJsonValue(m_combination));
    }
    if (m_default_price_isSet) {
        obj.insert(QString("default_price"), ::OpenAPI::toJsonValue(m_default_price));
    }
    if (m_cost_price_isSet) {
        obj.insert(QString("cost_price"), ::OpenAPI::toJsonValue(m_cost_price));
    }
    if (m_list_price_isSet) {
        obj.insert(QString("list_price"), ::OpenAPI::toJsonValue(m_list_price));
    }
    if (m_wholesale_price_isSet) {
        obj.insert(QString("wholesale_price"), ::OpenAPI::toJsonValue(m_wholesale_price));
    }
    if (m_advanced_price.size() > 0) {
        obj.insert(QString("advanced_price"), ::OpenAPI::toJsonValue(m_advanced_price));
    }
    if (m_tax_class_id_isSet) {
        obj.insert(QString("tax_class_id"), ::OpenAPI::toJsonValue(m_tax_class_id));
    }
    if (m_avail_for_sale_isSet) {
        obj.insert(QString("avail_for_sale"), ::OpenAPI::toJsonValue(m_avail_for_sale));
    }
    if (m_allow_backorders_isSet) {
        obj.insert(QString("allow_backorders"), ::OpenAPI::toJsonValue(m_allow_backorders));
    }
    if (m_in_stock_isSet) {
        obj.insert(QString("in_stock"), ::OpenAPI::toJsonValue(m_in_stock));
    }
    if (m_manage_stock_isSet) {
        obj.insert(QString("manage_stock"), ::OpenAPI::toJsonValue(m_manage_stock));
    }
    if (m_inventory_level_isSet) {
        obj.insert(QString("inventory_level"), ::OpenAPI::toJsonValue(m_inventory_level));
    }
    if (m_inventory.size() > 0) {
        obj.insert(QString("inventory"), ::OpenAPI::toJsonValue(m_inventory));
    }
    if (m_min_quantity_isSet) {
        obj.insert(QString("min_quantity"), ::OpenAPI::toJsonValue(m_min_quantity));
    }
    if (m_default_qty_in_pack_isSet) {
        obj.insert(QString("default_qty_in_pack"), ::OpenAPI::toJsonValue(m_default_qty_in_pack));
    }
    if (m_is_qty_in_pack_fixed_isSet) {
        obj.insert(QString("is_qty_in_pack_fixed"), ::OpenAPI::toJsonValue(m_is_qty_in_pack_fixed));
    }
    if (m_weight_unit_isSet) {
        obj.insert(QString("weight_unit"), ::OpenAPI::toJsonValue(m_weight_unit));
    }
    if (m_weight_isSet) {
        obj.insert(QString("weight"), ::OpenAPI::toJsonValue(m_weight));
    }
    if (m_dimensions_unit_isSet) {
        obj.insert(QString("dimensions_unit"), ::OpenAPI::toJsonValue(m_dimensions_unit));
    }
    if (m_width_isSet) {
        obj.insert(QString("width"), ::OpenAPI::toJsonValue(m_width));
    }
    if (m_height_isSet) {
        obj.insert(QString("height"), ::OpenAPI::toJsonValue(m_height));
    }
    if (m_length_isSet) {
        obj.insert(QString("length"), ::OpenAPI::toJsonValue(m_length));
    }
    if (m_meta_title_isSet) {
        obj.insert(QString("meta_title"), ::OpenAPI::toJsonValue(m_meta_title));
    }
    if (m_meta_description_isSet) {
        obj.insert(QString("meta_description"), ::OpenAPI::toJsonValue(m_meta_description));
    }
    if (m_meta_keywords_isSet) {
        obj.insert(QString("meta_keywords"), ::OpenAPI::toJsonValue(m_meta_keywords));
    }
    if (m_discounts.size() > 0) {
        obj.insert(QString("discounts"), ::OpenAPI::toJsonValue(m_discounts));
    }
    if (m_is_virtual_isSet) {
        obj.insert(QString("is_virtual"), ::OpenAPI::toJsonValue(m_is_virtual));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAIChild::getId() const {
    return m_id;
}
void OAIChild::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIChild::is_id_Set() const{
    return m_id_isSet;
}

bool OAIChild::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIChild::getParentId() const {
    return m_parent_id;
}
void OAIChild::setParentId(const QString &parent_id) {
    m_parent_id = parent_id;
    m_parent_id_isSet = true;
}

bool OAIChild::is_parent_id_Set() const{
    return m_parent_id_isSet;
}

bool OAIChild::is_parent_id_Valid() const{
    return m_parent_id_isValid;
}

QString OAIChild::getSku() const {
    return m_sku;
}
void OAIChild::setSku(const QString &sku) {
    m_sku = sku;
    m_sku_isSet = true;
}

bool OAIChild::is_sku_Set() const{
    return m_sku_isSet;
}

bool OAIChild::is_sku_Valid() const{
    return m_sku_isValid;
}

QString OAIChild::getUpc() const {
    return m_upc;
}
void OAIChild::setUpc(const QString &upc) {
    m_upc = upc;
    m_upc_isSet = true;
}

bool OAIChild::is_upc_Set() const{
    return m_upc_isSet;
}

bool OAIChild::is_upc_Valid() const{
    return m_upc_isValid;
}

QString OAIChild::getEan() const {
    return m_ean;
}
void OAIChild::setEan(const QString &ean) {
    m_ean = ean;
    m_ean_isSet = true;
}

bool OAIChild::is_ean_Set() const{
    return m_ean_isSet;
}

bool OAIChild::is_ean_Valid() const{
    return m_ean_isValid;
}

QString OAIChild::getMpn() const {
    return m_mpn;
}
void OAIChild::setMpn(const QString &mpn) {
    m_mpn = mpn;
    m_mpn_isSet = true;
}

bool OAIChild::is_mpn_Set() const{
    return m_mpn_isSet;
}

bool OAIChild::is_mpn_Valid() const{
    return m_mpn_isValid;
}

QString OAIChild::getGtin() const {
    return m_gtin;
}
void OAIChild::setGtin(const QString &gtin) {
    m_gtin = gtin;
    m_gtin_isSet = true;
}

bool OAIChild::is_gtin_Set() const{
    return m_gtin_isSet;
}

bool OAIChild::is_gtin_Valid() const{
    return m_gtin_isValid;
}

QString OAIChild::getIsbn() const {
    return m_isbn;
}
void OAIChild::setIsbn(const QString &isbn) {
    m_isbn = isbn;
    m_isbn_isSet = true;
}

bool OAIChild::is_isbn_Set() const{
    return m_isbn_isSet;
}

bool OAIChild::is_isbn_Valid() const{
    return m_isbn_isValid;
}

QString OAIChild::getUrl() const {
    return m_url;
}
void OAIChild::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIChild::is_url_Set() const{
    return m_url_isSet;
}

bool OAIChild::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIChild::getSeoUrl() const {
    return m_seo_url;
}
void OAIChild::setSeoUrl(const QString &seo_url) {
    m_seo_url = seo_url;
    m_seo_url_isSet = true;
}

bool OAIChild::is_seo_url_Set() const{
    return m_seo_url_isSet;
}

bool OAIChild::is_seo_url_Valid() const{
    return m_seo_url_isValid;
}

qint32 OAIChild::getSortOrder() const {
    return m_sort_order;
}
void OAIChild::setSortOrder(const qint32 &sort_order) {
    m_sort_order = sort_order;
    m_sort_order_isSet = true;
}

bool OAIChild::is_sort_order_Set() const{
    return m_sort_order_isSet;
}

bool OAIChild::is_sort_order_Valid() const{
    return m_sort_order_isValid;
}

OAIA2CDateTime OAIChild::getCreatedTime() const {
    return m_created_time;
}
void OAIChild::setCreatedTime(const OAIA2CDateTime &created_time) {
    m_created_time = created_time;
    m_created_time_isSet = true;
}

bool OAIChild::is_created_time_Set() const{
    return m_created_time_isSet;
}

bool OAIChild::is_created_time_Valid() const{
    return m_created_time_isValid;
}

OAIA2CDateTime OAIChild::getModifiedTime() const {
    return m_modified_time;
}
void OAIChild::setModifiedTime(const OAIA2CDateTime &modified_time) {
    m_modified_time = modified_time;
    m_modified_time_isSet = true;
}

bool OAIChild::is_modified_time_Set() const{
    return m_modified_time_isSet;
}

bool OAIChild::is_modified_time_Valid() const{
    return m_modified_time_isValid;
}

QString OAIChild::getName() const {
    return m_name;
}
void OAIChild::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIChild::is_name_Set() const{
    return m_name_isSet;
}

bool OAIChild::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIChild::getShortDescription() const {
    return m_short_description;
}
void OAIChild::setShortDescription(const QString &short_description) {
    m_short_description = short_description;
    m_short_description_isSet = true;
}

bool OAIChild::is_short_description_Set() const{
    return m_short_description_isSet;
}

bool OAIChild::is_short_description_Valid() const{
    return m_short_description_isValid;
}

QString OAIChild::getFullDescription() const {
    return m_full_description;
}
void OAIChild::setFullDescription(const QString &full_description) {
    m_full_description = full_description;
    m_full_description_isSet = true;
}

bool OAIChild::is_full_description_Set() const{
    return m_full_description_isSet;
}

bool OAIChild::is_full_description_Valid() const{
    return m_full_description_isValid;
}

QList<OAIImage> OAIChild::getImages() const {
    return m_images;
}
void OAIChild::setImages(const QList<OAIImage> &images) {
    m_images = images;
    m_images_isSet = true;
}

bool OAIChild::is_images_Set() const{
    return m_images_isSet;
}

bool OAIChild::is_images_Valid() const{
    return m_images_isValid;
}

QList<OAIProduct_ChildItem_Combination> OAIChild::getCombination() const {
    return m_combination;
}
void OAIChild::setCombination(const QList<OAIProduct_ChildItem_Combination> &combination) {
    m_combination = combination;
    m_combination_isSet = true;
}

bool OAIChild::is_combination_Set() const{
    return m_combination_isSet;
}

bool OAIChild::is_combination_Valid() const{
    return m_combination_isValid;
}

double OAIChild::getDefaultPrice() const {
    return m_default_price;
}
void OAIChild::setDefaultPrice(const double &default_price) {
    m_default_price = default_price;
    m_default_price_isSet = true;
}

bool OAIChild::is_default_price_Set() const{
    return m_default_price_isSet;
}

bool OAIChild::is_default_price_Valid() const{
    return m_default_price_isValid;
}

double OAIChild::getCostPrice() const {
    return m_cost_price;
}
void OAIChild::setCostPrice(const double &cost_price) {
    m_cost_price = cost_price;
    m_cost_price_isSet = true;
}

bool OAIChild::is_cost_price_Set() const{
    return m_cost_price_isSet;
}

bool OAIChild::is_cost_price_Valid() const{
    return m_cost_price_isValid;
}

double OAIChild::getListPrice() const {
    return m_list_price;
}
void OAIChild::setListPrice(const double &list_price) {
    m_list_price = list_price;
    m_list_price_isSet = true;
}

bool OAIChild::is_list_price_Set() const{
    return m_list_price_isSet;
}

bool OAIChild::is_list_price_Valid() const{
    return m_list_price_isValid;
}

double OAIChild::getWholesalePrice() const {
    return m_wholesale_price;
}
void OAIChild::setWholesalePrice(const double &wholesale_price) {
    m_wholesale_price = wholesale_price;
    m_wholesale_price_isSet = true;
}

bool OAIChild::is_wholesale_price_Set() const{
    return m_wholesale_price_isSet;
}

bool OAIChild::is_wholesale_price_Valid() const{
    return m_wholesale_price_isValid;
}

QList<OAIProduct_AdvancedPrice> OAIChild::getAdvancedPrice() const {
    return m_advanced_price;
}
void OAIChild::setAdvancedPrice(const QList<OAIProduct_AdvancedPrice> &advanced_price) {
    m_advanced_price = advanced_price;
    m_advanced_price_isSet = true;
}

bool OAIChild::is_advanced_price_Set() const{
    return m_advanced_price_isSet;
}

bool OAIChild::is_advanced_price_Valid() const{
    return m_advanced_price_isValid;
}

QString OAIChild::getTaxClassId() const {
    return m_tax_class_id;
}
void OAIChild::setTaxClassId(const QString &tax_class_id) {
    m_tax_class_id = tax_class_id;
    m_tax_class_id_isSet = true;
}

bool OAIChild::is_tax_class_id_Set() const{
    return m_tax_class_id_isSet;
}

bool OAIChild::is_tax_class_id_Valid() const{
    return m_tax_class_id_isValid;
}

bool OAIChild::isAvailForSale() const {
    return m_avail_for_sale;
}
void OAIChild::setAvailForSale(const bool &avail_for_sale) {
    m_avail_for_sale = avail_for_sale;
    m_avail_for_sale_isSet = true;
}

bool OAIChild::is_avail_for_sale_Set() const{
    return m_avail_for_sale_isSet;
}

bool OAIChild::is_avail_for_sale_Valid() const{
    return m_avail_for_sale_isValid;
}

bool OAIChild::isAllowBackorders() const {
    return m_allow_backorders;
}
void OAIChild::setAllowBackorders(const bool &allow_backorders) {
    m_allow_backorders = allow_backorders;
    m_allow_backorders_isSet = true;
}

bool OAIChild::is_allow_backorders_Set() const{
    return m_allow_backorders_isSet;
}

bool OAIChild::is_allow_backorders_Valid() const{
    return m_allow_backorders_isValid;
}

bool OAIChild::isInStock() const {
    return m_in_stock;
}
void OAIChild::setInStock(const bool &in_stock) {
    m_in_stock = in_stock;
    m_in_stock_isSet = true;
}

bool OAIChild::is_in_stock_Set() const{
    return m_in_stock_isSet;
}

bool OAIChild::is_in_stock_Valid() const{
    return m_in_stock_isValid;
}

bool OAIChild::isManageStock() const {
    return m_manage_stock;
}
void OAIChild::setManageStock(const bool &manage_stock) {
    m_manage_stock = manage_stock;
    m_manage_stock_isSet = true;
}

bool OAIChild::is_manage_stock_Set() const{
    return m_manage_stock_isSet;
}

bool OAIChild::is_manage_stock_Valid() const{
    return m_manage_stock_isValid;
}

double OAIChild::getInventoryLevel() const {
    return m_inventory_level;
}
void OAIChild::setInventoryLevel(const double &inventory_level) {
    m_inventory_level = inventory_level;
    m_inventory_level_isSet = true;
}

bool OAIChild::is_inventory_level_Set() const{
    return m_inventory_level_isSet;
}

bool OAIChild::is_inventory_level_Valid() const{
    return m_inventory_level_isValid;
}

QList<OAIProduct_Inventory> OAIChild::getInventory() const {
    return m_inventory;
}
void OAIChild::setInventory(const QList<OAIProduct_Inventory> &inventory) {
    m_inventory = inventory;
    m_inventory_isSet = true;
}

bool OAIChild::is_inventory_Set() const{
    return m_inventory_isSet;
}

bool OAIChild::is_inventory_Valid() const{
    return m_inventory_isValid;
}

double OAIChild::getMinQuantity() const {
    return m_min_quantity;
}
void OAIChild::setMinQuantity(const double &min_quantity) {
    m_min_quantity = min_quantity;
    m_min_quantity_isSet = true;
}

bool OAIChild::is_min_quantity_Set() const{
    return m_min_quantity_isSet;
}

bool OAIChild::is_min_quantity_Valid() const{
    return m_min_quantity_isValid;
}

double OAIChild::getDefaultQtyInPack() const {
    return m_default_qty_in_pack;
}
void OAIChild::setDefaultQtyInPack(const double &default_qty_in_pack) {
    m_default_qty_in_pack = default_qty_in_pack;
    m_default_qty_in_pack_isSet = true;
}

bool OAIChild::is_default_qty_in_pack_Set() const{
    return m_default_qty_in_pack_isSet;
}

bool OAIChild::is_default_qty_in_pack_Valid() const{
    return m_default_qty_in_pack_isValid;
}

bool OAIChild::isIsQtyInPackFixed() const {
    return m_is_qty_in_pack_fixed;
}
void OAIChild::setIsQtyInPackFixed(const bool &is_qty_in_pack_fixed) {
    m_is_qty_in_pack_fixed = is_qty_in_pack_fixed;
    m_is_qty_in_pack_fixed_isSet = true;
}

bool OAIChild::is_is_qty_in_pack_fixed_Set() const{
    return m_is_qty_in_pack_fixed_isSet;
}

bool OAIChild::is_is_qty_in_pack_fixed_Valid() const{
    return m_is_qty_in_pack_fixed_isValid;
}

QString OAIChild::getWeightUnit() const {
    return m_weight_unit;
}
void OAIChild::setWeightUnit(const QString &weight_unit) {
    m_weight_unit = weight_unit;
    m_weight_unit_isSet = true;
}

bool OAIChild::is_weight_unit_Set() const{
    return m_weight_unit_isSet;
}

bool OAIChild::is_weight_unit_Valid() const{
    return m_weight_unit_isValid;
}

double OAIChild::getWeight() const {
    return m_weight;
}
void OAIChild::setWeight(const double &weight) {
    m_weight = weight;
    m_weight_isSet = true;
}

bool OAIChild::is_weight_Set() const{
    return m_weight_isSet;
}

bool OAIChild::is_weight_Valid() const{
    return m_weight_isValid;
}

QString OAIChild::getDimensionsUnit() const {
    return m_dimensions_unit;
}
void OAIChild::setDimensionsUnit(const QString &dimensions_unit) {
    m_dimensions_unit = dimensions_unit;
    m_dimensions_unit_isSet = true;
}

bool OAIChild::is_dimensions_unit_Set() const{
    return m_dimensions_unit_isSet;
}

bool OAIChild::is_dimensions_unit_Valid() const{
    return m_dimensions_unit_isValid;
}

double OAIChild::getWidth() const {
    return m_width;
}
void OAIChild::setWidth(const double &width) {
    m_width = width;
    m_width_isSet = true;
}

bool OAIChild::is_width_Set() const{
    return m_width_isSet;
}

bool OAIChild::is_width_Valid() const{
    return m_width_isValid;
}

double OAIChild::getHeight() const {
    return m_height;
}
void OAIChild::setHeight(const double &height) {
    m_height = height;
    m_height_isSet = true;
}

bool OAIChild::is_height_Set() const{
    return m_height_isSet;
}

bool OAIChild::is_height_Valid() const{
    return m_height_isValid;
}

double OAIChild::getLength() const {
    return m_length;
}
void OAIChild::setLength(const double &length) {
    m_length = length;
    m_length_isSet = true;
}

bool OAIChild::is_length_Set() const{
    return m_length_isSet;
}

bool OAIChild::is_length_Valid() const{
    return m_length_isValid;
}

QString OAIChild::getMetaTitle() const {
    return m_meta_title;
}
void OAIChild::setMetaTitle(const QString &meta_title) {
    m_meta_title = meta_title;
    m_meta_title_isSet = true;
}

bool OAIChild::is_meta_title_Set() const{
    return m_meta_title_isSet;
}

bool OAIChild::is_meta_title_Valid() const{
    return m_meta_title_isValid;
}

QString OAIChild::getMetaDescription() const {
    return m_meta_description;
}
void OAIChild::setMetaDescription(const QString &meta_description) {
    m_meta_description = meta_description;
    m_meta_description_isSet = true;
}

bool OAIChild::is_meta_description_Set() const{
    return m_meta_description_isSet;
}

bool OAIChild::is_meta_description_Valid() const{
    return m_meta_description_isValid;
}

QString OAIChild::getMetaKeywords() const {
    return m_meta_keywords;
}
void OAIChild::setMetaKeywords(const QString &meta_keywords) {
    m_meta_keywords = meta_keywords;
    m_meta_keywords_isSet = true;
}

bool OAIChild::is_meta_keywords_Set() const{
    return m_meta_keywords_isSet;
}

bool OAIChild::is_meta_keywords_Valid() const{
    return m_meta_keywords_isValid;
}

QList<OAIDiscount> OAIChild::getDiscounts() const {
    return m_discounts;
}
void OAIChild::setDiscounts(const QList<OAIDiscount> &discounts) {
    m_discounts = discounts;
    m_discounts_isSet = true;
}

bool OAIChild::is_discounts_Set() const{
    return m_discounts_isSet;
}

bool OAIChild::is_discounts_Valid() const{
    return m_discounts_isValid;
}

bool OAIChild::isIsVirtual() const {
    return m_is_virtual;
}
void OAIChild::setIsVirtual(const bool &is_virtual) {
    m_is_virtual = is_virtual;
    m_is_virtual_isSet = true;
}

bool OAIChild::is_is_virtual_Set() const{
    return m_is_virtual_isSet;
}

bool OAIChild::is_is_virtual_Valid() const{
    return m_is_virtual_isValid;
}

OAIObject OAIChild::getAdditionalFields() const {
    return m_additional_fields;
}
void OAIChild::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAIChild::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAIChild::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAIChild::getCustomFields() const {
    return m_custom_fields;
}
void OAIChild::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAIChild::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAIChild::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAIChild::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_parent_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sku_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_upc_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ean_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mpn_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gtin_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_isbn_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_seo_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sort_order_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_time.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_modified_time.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_short_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_full_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_images.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_combination.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_price_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cost_price_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_list_price_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_wholesale_price_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_advanced_price.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_tax_class_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avail_for_sale_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_backorders_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_in_stock_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_manage_stock_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_inventory_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_inventory.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_min_quantity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_qty_in_pack_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_qty_in_pack_fixed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_weight_unit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_weight_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dimensions_unit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_length_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_meta_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_meta_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_meta_keywords_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_discounts.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_virtual_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_additional_fields_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_fields_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChild::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
