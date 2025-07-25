cmake_minimum_required(VERSION 3.5)

project(QtOpenAPIClient)

set(CMAKE_AUTOMOC ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Network Gui)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network Gui)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

add_library(${PROJECT_NAME}
  OAIA2CDateTime.h
  OAIAccountCartAdd.h
  OAIAccountCartAdd_200_response.h
  OAIAccountCartAdd_200_response_result.h
  OAIAccountCartAdd_hybris_websites_inner.h
  OAIAccountCartList_200_response.h
  OAIAccountCartList_200_response_result.h
  OAIAccountCartList_200_response_result_carts_inner.h
  OAIAccountConfigUpdate_200_response.h
  OAIAccountConfigUpdate_200_response_result.h
  OAIAccountFailedWebhooks_200_response.h
  OAIAccountFailedWebhooks_200_response_result.h
  OAIAccountFailedWebhooks_200_response_result_webhook_inner.h
  OAIAccountSupportedPlatforms_200_response.h
  OAIAccountSupportedPlatforms_200_response_result.h
  OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner.h
  OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params.h
  OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params_required_inner_inner.h
  OAIAttributeAdd_200_response.h
  OAIAttributeAdd_200_response_result.h
  OAIAttributeAssignGroup_200_response.h
  OAIAttributeAssignGroup_200_response_result.h
  OAIAttributeCount_200_response.h
  OAIAttributeCount_200_response_result.h
  OAIAttributeDelete_200_response.h
  OAIAttributeDelete_200_response_result.h
  OAIAttributeInfo_200_response.h
  OAIAttributeTypeList_200_response.h
  OAIAttributeTypeList_200_response_result.h
  OAIAttributeUnassignGroup_200_response.h
  OAIAttributeUnassignGroup_200_response_result.h
  OAIAttributeUpdate_200_response.h
  OAIAttributeUpdate_200_response_result.h
  OAIAttributeValueDelete_200_response.h
  OAIAttributeValueDelete_200_response_result.h
  OAIBaseCustomer.h
  OAIBasket.h
  OAIBasketInfo_200_response.h
  OAIBasketItemAdd_200_response.h
  OAIBasketItemAdd_200_response_result.h
  OAIBasketLiveShippingServiceCreate_200_response.h
  OAIBasketLiveShippingServiceCreate_200_response_result.h
  OAIBasketLiveShippingServiceDelete_200_response.h
  OAIBasketLiveShippingServiceDelete_200_response_result.h
  OAIBasketLiveShippingServiceList_200_response.h
  OAIBasketLiveShippingServiceList_200_response_result.h
  OAIBasket_Item.h
  OAIBasket_Item_Option.h
  OAIBasket_LiveShippingService.h
  OAIBatch_Job.h
  OAIBatch_Job_Result.h
  OAIBatch_Job_Result_Item.h
  OAIBrand.h
  OAICarrier.h
  OAICart.h
  OAICartCatalogPriceRulesCount_200_response.h
  OAICartCatalogPriceRulesCount_200_response_result.h
  OAICartCouponAdd.h
  OAICartCouponAdd_200_response.h
  OAICartCouponAdd_200_response_result.h
  OAICartCouponCount_200_response.h
  OAICartCouponCount_200_response_result.h
  OAICartDelete_200_response.h
  OAICartDelete_200_response_result.h
  OAICartGiftcardAdd_200_response.h
  OAICartGiftcardAdd_200_response_result.h
  OAICartGiftcardCount_200_response.h
  OAICartGiftcardCount_200_response_result.h
  OAICartInfo_200_response.h
  OAICartMethods_200_response.h
  OAICartMethods_200_response_result.h
  OAICartPluginList_200_response.h
  OAICartPluginList_200_response_result.h
  OAICartScriptAdd_200_response.h
  OAICartScriptAdd_200_response_result.h
  OAICartValidate_200_response.h
  OAICartValidate_200_response_result.h
  OAICart_Channel.h
  OAICart_MetaData.h
  OAICart_ShippingMethod.h
  OAICart_ShippingMethod_Rate.h
  OAICart_ShippingZone.h
  OAICart_ShippingZone2.h
  OAICart_StoreInfo.h
  OAICart_Warehouse.h
  OAICatalogPriceRule.h
  OAICatalogPriceRule_Action.h
  OAICategory.h
  OAICategoryAddBatch.h
  OAICategoryAddBatch_200_response.h
  OAICategoryAddBatch_200_response_result.h
  OAICategoryAddBatch_payload_inner.h
  OAICategoryAddBatch_payload_inner_images_inner.h
  OAICategoryAdd_200_response.h
  OAICategoryAdd_200_response_result.h
  OAICategoryAssign_200_response.h
  OAICategoryCount_200_response.h
  OAICategoryCount_200_response_result.h
  OAICategoryDelete_200_response.h
  OAICategoryDelete_200_response_result.h
  OAICategoryFind_200_response.h
  OAICategoryFind_200_response_result.h
  OAICategoryFind_200_response_result_category_inner.h
  OAICategoryImageAdd_200_response.h
  OAICategoryImageAdd_200_response_result.h
  OAICategoryInfo_200_response.h
  OAIChild.h
  OAICountry.h
  OAICoupon.h
  OAICoupon_Action.h
  OAICoupon_Code.h
  OAICoupon_Condition.h
  OAICoupon_History.h
  OAICurrency.h
  OAICustomer.h
  OAICustomerAdd.h
  OAICustomerAdd_200_response.h
  OAICustomerAdd_200_response_result.h
  OAICustomerAdd_address_inner.h
  OAICustomerAdd_consents_inner.h
  OAICustomerAddressAdd.h
  OAICustomerCount_200_response.h
  OAICustomerCount_200_response_result.h
  OAICustomerDelete_200_response.h
  OAICustomerDelete_200_response_result.h
  OAICustomerFind_200_response.h
  OAICustomerFind_200_response_result.h
  OAICustomerGroupAdd_200_response.h
  OAICustomerGroupAdd_200_response_result.h
  OAICustomerInfo_200_response.h
  OAICustomerUpdate.h
  OAICustomerUpdate_address_inner.h
  OAICustomer_Address.h
  OAICustomer_Attribute.h
  OAICustomer_Attribute_Value.h
  OAICustomer_Consent.h
  OAICustomer_Group.h
  OAICustomer_WishList.h
  OAICustomer_WishList_Item.h
  OAIDiscount.h
  OAIGiftCard.h
  OAIImage.h
  OAIInfo.h
  OAILanguage.h
  OAIMarketplace_Product.h
  OAIMedia.h
  OAIModel_Response_Attribute_Attributeset_List.h
  OAIModel_Response_Attribute_Group_List.h
  OAIModel_Response_Attribute_List.h
  OAIModel_Response_Batch_Job_List.h
  OAIModel_Response_Cart_Catalog_PriceRules_List.h
  OAIModel_Response_Cart_Coupon_List.h
  OAIModel_Response_Cart_GiftCard_List.h
  OAIModel_Response_Cart_MetaData_List.h
  OAIModel_Response_Cart_Script_List.h
  OAIModel_Response_Cart_ShippingZones_List.h
  OAIModel_Response_Category_List.h
  OAIModel_Response_Customer_Attribute_List.h
  OAIModel_Response_Customer_Group_List.h
  OAIModel_Response_Customer_List.h
  OAIModel_Response_Customer_Wishlist_List.h
  OAIModel_Response_Marketplace_Product_Find.h
  OAIModel_Response_Order_Abandoned_List.h
  OAIModel_Response_Order_List.h
  OAIModel_Response_Order_PreestimateShipping_List.h
  OAIModel_Response_Order_Shipment_List.h
  OAIModel_Response_Order_Status_List.h
  OAIModel_Response_Order_Transaction_List.h
  OAIModel_Response_Product_Attribute_List.h
  OAIModel_Response_Product_Brand_List.h
  OAIModel_Response_Product_ChildItem_List.h
  OAIModel_Response_Product_Currency_List.h
  OAIModel_Response_Product_List.h
  OAIModel_Response_Product_Option_List.h
  OAIModel_Response_Product_Review_List.h
  OAIModel_Response_Return_List.h
  OAIModel_Response_Subscriber_List.h
  OAIModel_Response_Tax_Class_Info.h
  OAIModel_Response_Tax_Class_List.h
  OAIOrder.h
  OAIOrderAbandoned.h
  OAIOrderAdd.h
  OAIOrderAdd_200_response.h
  OAIOrderAdd_200_response_result.h
  OAIOrderAdd_note_attributes_inner.h
  OAIOrderAdd_order_item_inner.h
  OAIOrderAdd_order_item_inner_order_item_option_inner.h
  OAIOrderAdd_order_item_inner_order_item_property_inner.h
  OAIOrderCount_200_response.h
  OAIOrderCount_200_response_result.h
  OAIOrderFinancialStatusList_200_response.h
  OAIOrderFinancialStatusList_200_response_result.h
  OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner.h
  OAIOrderFulfillmentStatusList_200_response.h
  OAIOrderFulfillmentStatusList_200_response_result.h
  OAIOrderInfo_200_response.h
  OAIOrderPreestimateShippingList.h
  OAIOrderPreestimateShippingList_order_item_inner.h
  OAIOrderPreestimateShippingList_order_item_inner_order_item_option_inner.h
  OAIOrderRefundAdd.h
  OAIOrderRefundAdd_200_response.h
  OAIOrderRefundAdd_200_response_result.h
  OAIOrderRefundAdd_items_inner.h
  OAIOrderReturnAdd.h
  OAIOrderReturnAdd_200_response.h
  OAIOrderReturnAdd_200_response_result.h
  OAIOrderReturnAdd_order_products_inner.h
  OAIOrderReturnUpdate.h
  OAIOrderReturnUpdate_order_products_inner.h
  OAIOrderShipmentAdd.h
  OAIOrderShipmentAddBatch.h
  OAIOrderShipmentAddBatch_payload_inner.h
  OAIOrderShipmentAddBatch_payload_inner_items_inner.h
  OAIOrderShipmentAdd_200_response.h
  OAIOrderShipmentAdd_200_response_result.h
  OAIOrderShipmentAdd_items_inner.h
  OAIOrderShipmentAdd_tracking_numbers_inner.h
  OAIOrderShipmentDelete_200_response.h
  OAIOrderShipmentDelete_200_response_result.h
  OAIOrderShipmentInfo_200_response.h
  OAIOrderShipmentTrackingAdd.h
  OAIOrderShipmentTrackingAdd_200_response.h
  OAIOrderShipmentTrackingAdd_200_response_result.h
  OAIOrderShipmentUpdate.h
  OAIOrder_Item.h
  OAIOrder_Item_Option.h
  OAIOrder_PaymentMethod.h
  OAIOrder_PreestimateShipping.h
  OAIOrder_Refund.h
  OAIOrder_ShippingMethod.h
  OAIOrder_Status.h
  OAIOrder_Status_HistoryItem.h
  OAIOrder_Status_Refund.h
  OAIOrder_Status_Refund_Item.h
  OAIOrder_Total.h
  OAIOrder_Totals.h
  OAIOrder_Totals_NewDiscount.h
  OAIOrder_Transaction.h
  OAIPagination.h
  OAIPlugin.h
  OAIPluginList.h
  OAIProduct.h
  OAIProductAdd.h
  OAIProductAddBatch.h
  OAIProductAddBatch_payload_inner.h
  OAIProductAddBatch_payload_inner_advanced_prices_inner.h
  OAIProductAddBatch_payload_inner_images_inner.h
  OAIProductAdd_200_response.h
  OAIProductAdd_200_response_result.h
  OAIProductAdd_best_offer.h
  OAIProductAdd_certifications_inner.h
  OAIProductAdd_certifications_inner_files_inner.h
  OAIProductAdd_certifications_inner_images_inner.h
  OAIProductAdd_files_inner.h
  OAIProductAdd_group_prices_inner.h
  OAIProductAdd_logistic_info_inner.h
  OAIProductAdd_manufacturer_info.h
  OAIProductAdd_package_details.h
  OAIProductAdd_personalization_details.h
  OAIProductAdd_sales_tax.h
  OAIProductAdd_seller_profiles.h
  OAIProductAdd_shipping_details_inner.h
  OAIProductAdd_size_chart.h
  OAIProductAdd_specifics_inner.h
  OAIProductAdd_specifics_inner_booking_details.h
  OAIProductAdd_specifics_inner_booking_details_availabilities_inner.h
  OAIProductAdd_specifics_inner_booking_details_availabilities_inner_times_inner.h
  OAIProductAdd_specifics_inner_booking_details_overrides_inner.h
  OAIProductAdd_specifics_inner_food_details.h
  OAIProductAdd_specifics_inner_group_products_details_inner.h
  OAIProductAdd_tier_prices_inner.h
  OAIProductAttributeValueSet_200_response.h
  OAIProductAttributeValueSet_200_response_result.h
  OAIProductAttributeValueUnset_200_response.h
  OAIProductAttributeValueUnset_200_response_result.h
  OAIProductChildItemFind_200_response.h
  OAIProductChildItemFind_200_response_result.h
  OAIProductChildItemInfo_200_response.h
  OAIProductCount_200_response.h
  OAIProductCount_200_response_result.h
  OAIProductCurrencyAdd_200_response.h
  OAIProductCurrencyAdd_200_response_result.h
  OAIProductDeleteBatch.h
  OAIProductDeleteBatch_payload_inner.h
  OAIProductFind_200_response.h
  OAIProductFind_200_response_result.h
  OAIProductFind_200_response_result_product_inner.h
  OAIProductImageAdd.h
  OAIProductImageAdd_200_response.h
  OAIProductImageAdd_200_response_result.h
  OAIProductImageUpdate_200_response.h
  OAIProductImageUpdate_200_response_result.h
  OAIProductInfo_200_response.h
  OAIProductManufacturerAdd_200_response.h
  OAIProductManufacturerAdd_200_response_result.h
  OAIProductOptionAdd.h
  OAIProductOptionAdd_200_response.h
  OAIProductOptionAdd_200_response_result.h
  OAIProductOptionAdd_values_inner.h
  OAIProductOptionAssign_200_response.h
  OAIProductOptionAssign_200_response_result.h
  OAIProductOptionValueAdd_200_response.h
  OAIProductOptionValueAdd_200_response_result.h
  OAIProductOptionValueAssign_200_response.h
  OAIProductOptionValueAssign_200_response_result.h
  OAIProductPriceAdd.h
  OAIProductPriceUpdate.h
  OAIProductPriceUpdate_group_prices_inner.h
  OAIProductTaxAdd.h
  OAIProductTaxAdd_200_response.h
  OAIProductTaxAdd_200_response_result.h
  OAIProductTaxAdd_tax_rates_inner.h
  OAIProductUpdate.h
  OAIProductUpdateBatch.h
  OAIProductUpdateBatch_payload_inner.h
  OAIProductUpdateBatch_payload_inner_advanced_prices_inner.h
  OAIProductUpdateBatch_payload_inner_images_inner.h
  OAIProductVariantAdd.h
  OAIProductVariantAddBatch.h
  OAIProductVariantAddBatch_payload_inner.h
  OAIProductVariantAddBatch_payload_inner_combination_inner.h
  OAIProductVariantAdd_200_response.h
  OAIProductVariantAdd_200_response_result.h
  OAIProductVariantAdd_attributes_inner.h
  OAIProductVariantDeleteBatch.h
  OAIProductVariantDeleteBatch_payload_inner.h
  OAIProductVariantImageAdd.h
  OAIProductVariantImageAdd_200_response.h
  OAIProductVariantImageAdd_200_response_result.h
  OAIProductVariantPriceAdd.h
  OAIProductVariantPriceUpdate.h
  OAIProductVariantUpdate.h
  OAIProductVariantUpdateBatch.h
  OAIProductVariantUpdateBatch_payload_inner.h
  OAIProductVariantUpdate_options_inner.h
  OAIProduct_AdvancedPrice.h
  OAIProduct_Attribute.h
  OAIProduct_ChildItem_Combination.h
  OAIProduct_GroupItem.h
  OAIProduct_GroupPrice.h
  OAIProduct_Inventory.h
  OAIProduct_Option.h
  OAIProduct_Option_Item.h
  OAIProduct_Review.h
  OAIProduct_Review_Rating.h
  OAIProduct_TierPrice.h
  OAIResponse_Attribute_Attributeset_List_Result.h
  OAIResponse_Attribute_Group_List_Result.h
  OAIResponse_Attribute_List_Result.h
  OAIResponse_Batch_Job_List_Result.h
  OAIResponse_Batch_Job_Result.h
  OAIResponse_Cart_CatalogPriceRules_List_Result.h
  OAIResponse_Cart_Coupon_List_Result.h
  OAIResponse_Cart_Giftcard_List_Result.h
  OAIResponse_Cart_MetaData_List_Result.h
  OAIResponse_Cart_Script_List_Result.h
  OAIResponse_Cart_ShippingZones_List_Result.h
  OAIResponse_Category_List_Result.h
  OAIResponse_Customer_Attribute_List_Result.h
  OAIResponse_Customer_Group_List_Result.h
  OAIResponse_Customer_List_Result.h
  OAIResponse_Customer_Wishlist_List_Result.h
  OAIResponse_Marketplace_Product_Find_Result.h
  OAIResponse_Order_Abandoned_List_Result.h
  OAIResponse_Order_List_Result.h
  OAIResponse_Order_PreestimateShipping_List_Result.h
  OAIResponse_Order_Shipment_List_Result.h
  OAIResponse_Order_Status_List_Result.h
  OAIResponse_Order_Transaction_List_Result.h
  OAIResponse_Product_Attribute_List_Result.h
  OAIResponse_Product_Brand_List_Result.h
  OAIResponse_Product_ChildItem_List_Result.h
  OAIResponse_Product_Currency_List_Result.h
  OAIResponse_Product_List_Result.h
  OAIResponse_Product_Option_List_Result.h
  OAIResponse_Product_Review_List_Result.h
  OAIResponse_Return_List_Result.h
  OAIResponse_Subscriber_List_Result.h
  OAIResponse_Tax_Class_Info_Result.h
  OAIResponse_Tax_Class_List_Result.h
  OAIReturn.h
  OAIReturnActionList_200_response.h
  OAIReturnActionList_200_response_result.h
  OAIReturnCount_200_response.h
  OAIReturnCount_200_response_result.h
  OAIReturnInfo_200_response.h
  OAIReturnReasonList_200_response.h
  OAIReturnReasonList_200_response_result.h
  OAIReturnStatusList_200_response.h
  OAIReturnStatusList_200_response_result.h
  OAIReturn_Action.h
  OAIReturn_OrderProduct.h
  OAIReturn_Reason.h
  OAIReturn_Status.h
  OAIScript.h
  OAIShipment.h
  OAIShipment_Item.h
  OAIShipment_TrackingNumber.h
  OAISpecialPrice.h
  OAIState.h
  OAIStatus.h
  OAIStoreAttribute.h
  OAIStoreAttribute_AttributeSet.h
  OAIStoreAttribute_Group.h
  OAISubscriber.h
  OAITaxClass.h
  OAITaxClass_Countries.h
  OAITaxClass_Rate.h
  OAITaxClass_States.h
  OAITaxClass_ZipCodes.h
  OAITaxClass_ZipCodes_Range.h
  OAIWebhook.h
  OAIWebhookCount_200_response.h
  OAIWebhookCount_200_response_result.h
  OAIWebhookEvents_200_response.h
  OAIWebhookEvents_200_response_result.h
  OAIWebhookEvents_200_response_result_events_inner.h
  OAIWebhookList_200_response.h
  OAIWebhookList_200_response_result.h
  OAIAccountApi.h
  OAIAttributeApi.h
  OAIBasketApi.h
  OAIBatchApi.h
  OAIBridgeApi.h
  OAICartApi.h
  OAICategoryApi.h
  OAICustomerApi.h
  OAIMarketplaceApi.h
  OAIOrderApi.h
  OAIProductApi.h
  OAIReturnApi.h
  OAISubscriberApi.h
  OAITaxApi.h
  OAIWebhookApi.h
  OAIHelpers.h
  OAIHttpRequest.h
  OAIObject.h
  OAIEnum.h
  OAIHttpFileElement.h
  OAIServerConfiguration.h
  OAIServerVariable.h
  OAIOauth.h
  OAIA2CDateTime.cpp
  OAIAccountCartAdd.cpp
  OAIAccountCartAdd_200_response.cpp
  OAIAccountCartAdd_200_response_result.cpp
  OAIAccountCartAdd_hybris_websites_inner.cpp
  OAIAccountCartList_200_response.cpp
  OAIAccountCartList_200_response_result.cpp
  OAIAccountCartList_200_response_result_carts_inner.cpp
  OAIAccountConfigUpdate_200_response.cpp
  OAIAccountConfigUpdate_200_response_result.cpp
  OAIAccountFailedWebhooks_200_response.cpp
  OAIAccountFailedWebhooks_200_response_result.cpp
  OAIAccountFailedWebhooks_200_response_result_webhook_inner.cpp
  OAIAccountSupportedPlatforms_200_response.cpp
  OAIAccountSupportedPlatforms_200_response_result.cpp
  OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner.cpp
  OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params.cpp
  OAIAccountSupportedPlatforms_200_response_result_supported_platforms_inner_params_required_inner_inner.cpp
  OAIAttributeAdd_200_response.cpp
  OAIAttributeAdd_200_response_result.cpp
  OAIAttributeAssignGroup_200_response.cpp
  OAIAttributeAssignGroup_200_response_result.cpp
  OAIAttributeCount_200_response.cpp
  OAIAttributeCount_200_response_result.cpp
  OAIAttributeDelete_200_response.cpp
  OAIAttributeDelete_200_response_result.cpp
  OAIAttributeInfo_200_response.cpp
  OAIAttributeTypeList_200_response.cpp
  OAIAttributeTypeList_200_response_result.cpp
  OAIAttributeUnassignGroup_200_response.cpp
  OAIAttributeUnassignGroup_200_response_result.cpp
  OAIAttributeUpdate_200_response.cpp
  OAIAttributeUpdate_200_response_result.cpp
  OAIAttributeValueDelete_200_response.cpp
  OAIAttributeValueDelete_200_response_result.cpp
  OAIBaseCustomer.cpp
  OAIBasket.cpp
  OAIBasketInfo_200_response.cpp
  OAIBasketItemAdd_200_response.cpp
  OAIBasketItemAdd_200_response_result.cpp
  OAIBasketLiveShippingServiceCreate_200_response.cpp
  OAIBasketLiveShippingServiceCreate_200_response_result.cpp
  OAIBasketLiveShippingServiceDelete_200_response.cpp
  OAIBasketLiveShippingServiceDelete_200_response_result.cpp
  OAIBasketLiveShippingServiceList_200_response.cpp
  OAIBasketLiveShippingServiceList_200_response_result.cpp
  OAIBasket_Item.cpp
  OAIBasket_Item_Option.cpp
  OAIBasket_LiveShippingService.cpp
  OAIBatch_Job.cpp
  OAIBatch_Job_Result.cpp
  OAIBatch_Job_Result_Item.cpp
  OAIBrand.cpp
  OAICarrier.cpp
  OAICart.cpp
  OAICartCatalogPriceRulesCount_200_response.cpp
  OAICartCatalogPriceRulesCount_200_response_result.cpp
  OAICartCouponAdd.cpp
  OAICartCouponAdd_200_response.cpp
  OAICartCouponAdd_200_response_result.cpp
  OAICartCouponCount_200_response.cpp
  OAICartCouponCount_200_response_result.cpp
  OAICartDelete_200_response.cpp
  OAICartDelete_200_response_result.cpp
  OAICartGiftcardAdd_200_response.cpp
  OAICartGiftcardAdd_200_response_result.cpp
  OAICartGiftcardCount_200_response.cpp
  OAICartGiftcardCount_200_response_result.cpp
  OAICartInfo_200_response.cpp
  OAICartMethods_200_response.cpp
  OAICartMethods_200_response_result.cpp
  OAICartPluginList_200_response.cpp
  OAICartPluginList_200_response_result.cpp
  OAICartScriptAdd_200_response.cpp
  OAICartScriptAdd_200_response_result.cpp
  OAICartValidate_200_response.cpp
  OAICartValidate_200_response_result.cpp
  OAICart_Channel.cpp
  OAICart_MetaData.cpp
  OAICart_ShippingMethod.cpp
  OAICart_ShippingMethod_Rate.cpp
  OAICart_ShippingZone.cpp
  OAICart_ShippingZone2.cpp
  OAICart_StoreInfo.cpp
  OAICart_Warehouse.cpp
  OAICatalogPriceRule.cpp
  OAICatalogPriceRule_Action.cpp
  OAICategory.cpp
  OAICategoryAddBatch.cpp
  OAICategoryAddBatch_200_response.cpp
  OAICategoryAddBatch_200_response_result.cpp
  OAICategoryAddBatch_payload_inner.cpp
  OAICategoryAddBatch_payload_inner_images_inner.cpp
  OAICategoryAdd_200_response.cpp
  OAICategoryAdd_200_response_result.cpp
  OAICategoryAssign_200_response.cpp
  OAICategoryCount_200_response.cpp
  OAICategoryCount_200_response_result.cpp
  OAICategoryDelete_200_response.cpp
  OAICategoryDelete_200_response_result.cpp
  OAICategoryFind_200_response.cpp
  OAICategoryFind_200_response_result.cpp
  OAICategoryFind_200_response_result_category_inner.cpp
  OAICategoryImageAdd_200_response.cpp
  OAICategoryImageAdd_200_response_result.cpp
  OAICategoryInfo_200_response.cpp
  OAIChild.cpp
  OAICountry.cpp
  OAICoupon.cpp
  OAICoupon_Action.cpp
  OAICoupon_Code.cpp
  OAICoupon_Condition.cpp
  OAICoupon_History.cpp
  OAICurrency.cpp
  OAICustomer.cpp
  OAICustomerAdd.cpp
  OAICustomerAdd_200_response.cpp
  OAICustomerAdd_200_response_result.cpp
  OAICustomerAdd_address_inner.cpp
  OAICustomerAdd_consents_inner.cpp
  OAICustomerAddressAdd.cpp
  OAICustomerCount_200_response.cpp
  OAICustomerCount_200_response_result.cpp
  OAICustomerDelete_200_response.cpp
  OAICustomerDelete_200_response_result.cpp
  OAICustomerFind_200_response.cpp
  OAICustomerFind_200_response_result.cpp
  OAICustomerGroupAdd_200_response.cpp
  OAICustomerGroupAdd_200_response_result.cpp
  OAICustomerInfo_200_response.cpp
  OAICustomerUpdate.cpp
  OAICustomerUpdate_address_inner.cpp
  OAICustomer_Address.cpp
  OAICustomer_Attribute.cpp
  OAICustomer_Attribute_Value.cpp
  OAICustomer_Consent.cpp
  OAICustomer_Group.cpp
  OAICustomer_WishList.cpp
  OAICustomer_WishList_Item.cpp
  OAIDiscount.cpp
  OAIGiftCard.cpp
  OAIImage.cpp
  OAIInfo.cpp
  OAILanguage.cpp
  OAIMarketplace_Product.cpp
  OAIMedia.cpp
  OAIModel_Response_Attribute_Attributeset_List.cpp
  OAIModel_Response_Attribute_Group_List.cpp
  OAIModel_Response_Attribute_List.cpp
  OAIModel_Response_Batch_Job_List.cpp
  OAIModel_Response_Cart_Catalog_PriceRules_List.cpp
  OAIModel_Response_Cart_Coupon_List.cpp
  OAIModel_Response_Cart_GiftCard_List.cpp
  OAIModel_Response_Cart_MetaData_List.cpp
  OAIModel_Response_Cart_Script_List.cpp
  OAIModel_Response_Cart_ShippingZones_List.cpp
  OAIModel_Response_Category_List.cpp
  OAIModel_Response_Customer_Attribute_List.cpp
  OAIModel_Response_Customer_Group_List.cpp
  OAIModel_Response_Customer_List.cpp
  OAIModel_Response_Customer_Wishlist_List.cpp
  OAIModel_Response_Marketplace_Product_Find.cpp
  OAIModel_Response_Order_Abandoned_List.cpp
  OAIModel_Response_Order_List.cpp
  OAIModel_Response_Order_PreestimateShipping_List.cpp
  OAIModel_Response_Order_Shipment_List.cpp
  OAIModel_Response_Order_Status_List.cpp
  OAIModel_Response_Order_Transaction_List.cpp
  OAIModel_Response_Product_Attribute_List.cpp
  OAIModel_Response_Product_Brand_List.cpp
  OAIModel_Response_Product_ChildItem_List.cpp
  OAIModel_Response_Product_Currency_List.cpp
  OAIModel_Response_Product_List.cpp
  OAIModel_Response_Product_Option_List.cpp
  OAIModel_Response_Product_Review_List.cpp
  OAIModel_Response_Return_List.cpp
  OAIModel_Response_Subscriber_List.cpp
  OAIModel_Response_Tax_Class_Info.cpp
  OAIModel_Response_Tax_Class_List.cpp
  OAIOrder.cpp
  OAIOrderAbandoned.cpp
  OAIOrderAdd.cpp
  OAIOrderAdd_200_response.cpp
  OAIOrderAdd_200_response_result.cpp
  OAIOrderAdd_note_attributes_inner.cpp
  OAIOrderAdd_order_item_inner.cpp
  OAIOrderAdd_order_item_inner_order_item_option_inner.cpp
  OAIOrderAdd_order_item_inner_order_item_property_inner.cpp
  OAIOrderCount_200_response.cpp
  OAIOrderCount_200_response_result.cpp
  OAIOrderFinancialStatusList_200_response.cpp
  OAIOrderFinancialStatusList_200_response_result.cpp
  OAIOrderFinancialStatusList_200_response_result_order_financial_statuses_inner.cpp
  OAIOrderFulfillmentStatusList_200_response.cpp
  OAIOrderFulfillmentStatusList_200_response_result.cpp
  OAIOrderInfo_200_response.cpp
  OAIOrderPreestimateShippingList.cpp
  OAIOrderPreestimateShippingList_order_item_inner.cpp
  OAIOrderPreestimateShippingList_order_item_inner_order_item_option_inner.cpp
  OAIOrderRefundAdd.cpp
  OAIOrderRefundAdd_200_response.cpp
  OAIOrderRefundAdd_200_response_result.cpp
  OAIOrderRefundAdd_items_inner.cpp
  OAIOrderReturnAdd.cpp
  OAIOrderReturnAdd_200_response.cpp
  OAIOrderReturnAdd_200_response_result.cpp
  OAIOrderReturnAdd_order_products_inner.cpp
  OAIOrderReturnUpdate.cpp
  OAIOrderReturnUpdate_order_products_inner.cpp
  OAIOrderShipmentAdd.cpp
  OAIOrderShipmentAddBatch.cpp
  OAIOrderShipmentAddBatch_payload_inner.cpp
  OAIOrderShipmentAddBatch_payload_inner_items_inner.cpp
  OAIOrderShipmentAdd_200_response.cpp
  OAIOrderShipmentAdd_200_response_result.cpp
  OAIOrderShipmentAdd_items_inner.cpp
  OAIOrderShipmentAdd_tracking_numbers_inner.cpp
  OAIOrderShipmentDelete_200_response.cpp
  OAIOrderShipmentDelete_200_response_result.cpp
  OAIOrderShipmentInfo_200_response.cpp
  OAIOrderShipmentTrackingAdd.cpp
  OAIOrderShipmentTrackingAdd_200_response.cpp
  OAIOrderShipmentTrackingAdd_200_response_result.cpp
  OAIOrderShipmentUpdate.cpp
  OAIOrder_Item.cpp
  OAIOrder_Item_Option.cpp
  OAIOrder_PaymentMethod.cpp
  OAIOrder_PreestimateShipping.cpp
  OAIOrder_Refund.cpp
  OAIOrder_ShippingMethod.cpp
  OAIOrder_Status.cpp
  OAIOrder_Status_HistoryItem.cpp
  OAIOrder_Status_Refund.cpp
  OAIOrder_Status_Refund_Item.cpp
  OAIOrder_Total.cpp
  OAIOrder_Totals.cpp
  OAIOrder_Totals_NewDiscount.cpp
  OAIOrder_Transaction.cpp
  OAIPagination.cpp
  OAIPlugin.cpp
  OAIPluginList.cpp
  OAIProduct.cpp
  OAIProductAdd.cpp
  OAIProductAddBatch.cpp
  OAIProductAddBatch_payload_inner.cpp
  OAIProductAddBatch_payload_inner_advanced_prices_inner.cpp
  OAIProductAddBatch_payload_inner_images_inner.cpp
  OAIProductAdd_200_response.cpp
  OAIProductAdd_200_response_result.cpp
  OAIProductAdd_best_offer.cpp
  OAIProductAdd_certifications_inner.cpp
  OAIProductAdd_certifications_inner_files_inner.cpp
  OAIProductAdd_certifications_inner_images_inner.cpp
  OAIProductAdd_files_inner.cpp
  OAIProductAdd_group_prices_inner.cpp
  OAIProductAdd_logistic_info_inner.cpp
  OAIProductAdd_manufacturer_info.cpp
  OAIProductAdd_package_details.cpp
  OAIProductAdd_personalization_details.cpp
  OAIProductAdd_sales_tax.cpp
  OAIProductAdd_seller_profiles.cpp
  OAIProductAdd_shipping_details_inner.cpp
  OAIProductAdd_size_chart.cpp
  OAIProductAdd_specifics_inner.cpp
  OAIProductAdd_specifics_inner_booking_details.cpp
  OAIProductAdd_specifics_inner_booking_details_availabilities_inner.cpp
  OAIProductAdd_specifics_inner_booking_details_availabilities_inner_times_inner.cpp
  OAIProductAdd_specifics_inner_booking_details_overrides_inner.cpp
  OAIProductAdd_specifics_inner_food_details.cpp
  OAIProductAdd_specifics_inner_group_products_details_inner.cpp
  OAIProductAdd_tier_prices_inner.cpp
  OAIProductAttributeValueSet_200_response.cpp
  OAIProductAttributeValueSet_200_response_result.cpp
  OAIProductAttributeValueUnset_200_response.cpp
  OAIProductAttributeValueUnset_200_response_result.cpp
  OAIProductChildItemFind_200_response.cpp
  OAIProductChildItemFind_200_response_result.cpp
  OAIProductChildItemInfo_200_response.cpp
  OAIProductCount_200_response.cpp
  OAIProductCount_200_response_result.cpp
  OAIProductCurrencyAdd_200_response.cpp
  OAIProductCurrencyAdd_200_response_result.cpp
  OAIProductDeleteBatch.cpp
  OAIProductDeleteBatch_payload_inner.cpp
  OAIProductFind_200_response.cpp
  OAIProductFind_200_response_result.cpp
  OAIProductFind_200_response_result_product_inner.cpp
  OAIProductImageAdd.cpp
  OAIProductImageAdd_200_response.cpp
  OAIProductImageAdd_200_response_result.cpp
  OAIProductImageUpdate_200_response.cpp
  OAIProductImageUpdate_200_response_result.cpp
  OAIProductInfo_200_response.cpp
  OAIProductManufacturerAdd_200_response.cpp
  OAIProductManufacturerAdd_200_response_result.cpp
  OAIProductOptionAdd.cpp
  OAIProductOptionAdd_200_response.cpp
  OAIProductOptionAdd_200_response_result.cpp
  OAIProductOptionAdd_values_inner.cpp
  OAIProductOptionAssign_200_response.cpp
  OAIProductOptionAssign_200_response_result.cpp
  OAIProductOptionValueAdd_200_response.cpp
  OAIProductOptionValueAdd_200_response_result.cpp
  OAIProductOptionValueAssign_200_response.cpp
  OAIProductOptionValueAssign_200_response_result.cpp
  OAIProductPriceAdd.cpp
  OAIProductPriceUpdate.cpp
  OAIProductPriceUpdate_group_prices_inner.cpp
  OAIProductTaxAdd.cpp
  OAIProductTaxAdd_200_response.cpp
  OAIProductTaxAdd_200_response_result.cpp
  OAIProductTaxAdd_tax_rates_inner.cpp
  OAIProductUpdate.cpp
  OAIProductUpdateBatch.cpp
  OAIProductUpdateBatch_payload_inner.cpp
  OAIProductUpdateBatch_payload_inner_advanced_prices_inner.cpp
  OAIProductUpdateBatch_payload_inner_images_inner.cpp
  OAIProductVariantAdd.cpp
  OAIProductVariantAddBatch.cpp
  OAIProductVariantAddBatch_payload_inner.cpp
  OAIProductVariantAddBatch_payload_inner_combination_inner.cpp
  OAIProductVariantAdd_200_response.cpp
  OAIProductVariantAdd_200_response_result.cpp
  OAIProductVariantAdd_attributes_inner.cpp
  OAIProductVariantDeleteBatch.cpp
  OAIProductVariantDeleteBatch_payload_inner.cpp
  OAIProductVariantImageAdd.cpp
  OAIProductVariantImageAdd_200_response.cpp
  OAIProductVariantImageAdd_200_response_result.cpp
  OAIProductVariantPriceAdd.cpp
  OAIProductVariantPriceUpdate.cpp
  OAIProductVariantUpdate.cpp
  OAIProductVariantUpdateBatch.cpp
  OAIProductVariantUpdateBatch_payload_inner.cpp
  OAIProductVariantUpdate_options_inner.cpp
  OAIProduct_AdvancedPrice.cpp
  OAIProduct_Attribute.cpp
  OAIProduct_ChildItem_Combination.cpp
  OAIProduct_GroupItem.cpp
  OAIProduct_GroupPrice.cpp
  OAIProduct_Inventory.cpp
  OAIProduct_Option.cpp
  OAIProduct_Option_Item.cpp
  OAIProduct_Review.cpp
  OAIProduct_Review_Rating.cpp
  OAIProduct_TierPrice.cpp
  OAIResponse_Attribute_Attributeset_List_Result.cpp
  OAIResponse_Attribute_Group_List_Result.cpp
  OAIResponse_Attribute_List_Result.cpp
  OAIResponse_Batch_Job_List_Result.cpp
  OAIResponse_Batch_Job_Result.cpp
  OAIResponse_Cart_CatalogPriceRules_List_Result.cpp
  OAIResponse_Cart_Coupon_List_Result.cpp
  OAIResponse_Cart_Giftcard_List_Result.cpp
  OAIResponse_Cart_MetaData_List_Result.cpp
  OAIResponse_Cart_Script_List_Result.cpp
  OAIResponse_Cart_ShippingZones_List_Result.cpp
  OAIResponse_Category_List_Result.cpp
  OAIResponse_Customer_Attribute_List_Result.cpp
  OAIResponse_Customer_Group_List_Result.cpp
  OAIResponse_Customer_List_Result.cpp
  OAIResponse_Customer_Wishlist_List_Result.cpp
  OAIResponse_Marketplace_Product_Find_Result.cpp
  OAIResponse_Order_Abandoned_List_Result.cpp
  OAIResponse_Order_List_Result.cpp
  OAIResponse_Order_PreestimateShipping_List_Result.cpp
  OAIResponse_Order_Shipment_List_Result.cpp
  OAIResponse_Order_Status_List_Result.cpp
  OAIResponse_Order_Transaction_List_Result.cpp
  OAIResponse_Product_Attribute_List_Result.cpp
  OAIResponse_Product_Brand_List_Result.cpp
  OAIResponse_Product_ChildItem_List_Result.cpp
  OAIResponse_Product_Currency_List_Result.cpp
  OAIResponse_Product_List_Result.cpp
  OAIResponse_Product_Option_List_Result.cpp
  OAIResponse_Product_Review_List_Result.cpp
  OAIResponse_Return_List_Result.cpp
  OAIResponse_Subscriber_List_Result.cpp
  OAIResponse_Tax_Class_Info_Result.cpp
  OAIResponse_Tax_Class_List_Result.cpp
  OAIReturn.cpp
  OAIReturnActionList_200_response.cpp
  OAIReturnActionList_200_response_result.cpp
  OAIReturnCount_200_response.cpp
  OAIReturnCount_200_response_result.cpp
  OAIReturnInfo_200_response.cpp
  OAIReturnReasonList_200_response.cpp
  OAIReturnReasonList_200_response_result.cpp
  OAIReturnStatusList_200_response.cpp
  OAIReturnStatusList_200_response_result.cpp
  OAIReturn_Action.cpp
  OAIReturn_OrderProduct.cpp
  OAIReturn_Reason.cpp
  OAIReturn_Status.cpp
  OAIScript.cpp
  OAIShipment.cpp
  OAIShipment_Item.cpp
  OAIShipment_TrackingNumber.cpp
  OAISpecialPrice.cpp
  OAIState.cpp
  OAIStatus.cpp
  OAIStoreAttribute.cpp
  OAIStoreAttribute_AttributeSet.cpp
  OAIStoreAttribute_Group.cpp
  OAISubscriber.cpp
  OAITaxClass.cpp
  OAITaxClass_Countries.cpp
  OAITaxClass_Rate.cpp
  OAITaxClass_States.cpp
  OAITaxClass_ZipCodes.cpp
  OAITaxClass_ZipCodes_Range.cpp
  OAIWebhook.cpp
  OAIWebhookCount_200_response.cpp
  OAIWebhookCount_200_response_result.cpp
  OAIWebhookEvents_200_response.cpp
  OAIWebhookEvents_200_response_result.cpp
  OAIWebhookEvents_200_response_result_events_inner.cpp
  OAIWebhookList_200_response.cpp
  OAIWebhookList_200_response_result.cpp
  OAIAccountApi.cpp
  OAIAttributeApi.cpp
  OAIBasketApi.cpp
  OAIBatchApi.cpp
  OAIBridgeApi.cpp
  OAICartApi.cpp
  OAICategoryApi.cpp
  OAICustomerApi.cpp
  OAIMarketplaceApi.cpp
  OAIOrderApi.cpp
  OAIProductApi.cpp
  OAIReturnApi.cpp
  OAISubscriberApi.cpp
  OAITaxApi.cpp
  OAIWebhookApi.cpp
  OAIHelpers.cpp
  OAIHttpRequest.cpp
  OAIHttpFileElement.cpp
  OAIOauth.cpp
  )

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        Qt${QT_VERSION_MAJOR}::Core
        Qt${QT_VERSION_MAJOR}::Network
        Qt${QT_VERSION_MAJOR}::Gui

)

configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
    INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}"
)

install(
    TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}Targets
    LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
    INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}"
)

install(
    FILES ${HEADER_FILES}
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}
)

install(
    FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

install(
    EXPORT ${PROJECT_NAME}Targets
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)
