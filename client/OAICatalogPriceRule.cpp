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

#include "OAICatalogPriceRule.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogPriceRule::OAICatalogPriceRule(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogPriceRule::OAICatalogPriceRule() {
    this->initializeModel();
}

OAICatalogPriceRule::~OAICatalogPriceRule() {}

void OAICatalogPriceRule::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_gid_isSet = false;
    m_gid_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_short_description_isSet = false;
    m_short_description_isValid = false;

    m_avail_isSet = false;
    m_avail_isValid = false;

    m_actions_isSet = false;
    m_actions_isValid = false;

    m_created_time_isSet = false;
    m_created_time_isValid = false;

    m_date_start_isSet = false;
    m_date_start_isValid = false;

    m_date_end_isSet = false;
    m_date_end_isValid = false;

    m_usage_count_isSet = false;
    m_usage_count_isValid = false;

    m_conditions_isSet = false;
    m_conditions_isValid = false;

    m_uses_per_order_limit_isSet = false;
    m_uses_per_order_limit_isValid = false;

    m_additional_fields_isSet = false;
    m_additional_fields_isValid = false;

    m_custom_fields_isSet = false;
    m_custom_fields_isValid = false;
}

void OAICatalogPriceRule::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogPriceRule::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_gid_isValid = ::OpenAPI::fromJsonValue(m_gid, json[QString("gid")]);
    m_gid_isSet = !json[QString("gid")].isNull() && m_gid_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_short_description_isValid = ::OpenAPI::fromJsonValue(m_short_description, json[QString("short_description")]);
    m_short_description_isSet = !json[QString("short_description")].isNull() && m_short_description_isValid;

    m_avail_isValid = ::OpenAPI::fromJsonValue(m_avail, json[QString("avail")]);
    m_avail_isSet = !json[QString("avail")].isNull() && m_avail_isValid;

    m_actions_isValid = ::OpenAPI::fromJsonValue(m_actions, json[QString("actions")]);
    m_actions_isSet = !json[QString("actions")].isNull() && m_actions_isValid;

    m_created_time_isValid = ::OpenAPI::fromJsonValue(m_created_time, json[QString("created_time")]);
    m_created_time_isSet = !json[QString("created_time")].isNull() && m_created_time_isValid;

    m_date_start_isValid = ::OpenAPI::fromJsonValue(m_date_start, json[QString("date_start")]);
    m_date_start_isSet = !json[QString("date_start")].isNull() && m_date_start_isValid;

    m_date_end_isValid = ::OpenAPI::fromJsonValue(m_date_end, json[QString("date_end")]);
    m_date_end_isSet = !json[QString("date_end")].isNull() && m_date_end_isValid;

    m_usage_count_isValid = ::OpenAPI::fromJsonValue(m_usage_count, json[QString("usage_count")]);
    m_usage_count_isSet = !json[QString("usage_count")].isNull() && m_usage_count_isValid;

    m_conditions_isValid = ::OpenAPI::fromJsonValue(m_conditions, json[QString("conditions")]);
    m_conditions_isSet = !json[QString("conditions")].isNull() && m_conditions_isValid;

    m_uses_per_order_limit_isValid = ::OpenAPI::fromJsonValue(m_uses_per_order_limit, json[QString("uses_per_order_limit")]);
    m_uses_per_order_limit_isSet = !json[QString("uses_per_order_limit")].isNull() && m_uses_per_order_limit_isValid;

    m_additional_fields_isValid = ::OpenAPI::fromJsonValue(m_additional_fields, json[QString("additional_fields")]);
    m_additional_fields_isSet = !json[QString("additional_fields")].isNull() && m_additional_fields_isValid;

    m_custom_fields_isValid = ::OpenAPI::fromJsonValue(m_custom_fields, json[QString("custom_fields")]);
    m_custom_fields_isSet = !json[QString("custom_fields")].isNull() && m_custom_fields_isValid;
}

QString OAICatalogPriceRule::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogPriceRule::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_gid_isSet) {
        obj.insert(QString("gid"), ::OpenAPI::toJsonValue(m_gid));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(m_description));
    }
    if (m_short_description_isSet) {
        obj.insert(QString("short_description"), ::OpenAPI::toJsonValue(m_short_description));
    }
    if (m_avail_isSet) {
        obj.insert(QString("avail"), ::OpenAPI::toJsonValue(m_avail));
    }
    if (m_actions.size() > 0) {
        obj.insert(QString("actions"), ::OpenAPI::toJsonValue(m_actions));
    }
    if (m_created_time.isSet()) {
        obj.insert(QString("created_time"), ::OpenAPI::toJsonValue(m_created_time));
    }
    if (m_date_start.isSet()) {
        obj.insert(QString("date_start"), ::OpenAPI::toJsonValue(m_date_start));
    }
    if (m_date_end.isSet()) {
        obj.insert(QString("date_end"), ::OpenAPI::toJsonValue(m_date_end));
    }
    if (m_usage_count_isSet) {
        obj.insert(QString("usage_count"), ::OpenAPI::toJsonValue(m_usage_count));
    }
    if (m_conditions.size() > 0) {
        obj.insert(QString("conditions"), ::OpenAPI::toJsonValue(m_conditions));
    }
    if (m_uses_per_order_limit_isSet) {
        obj.insert(QString("uses_per_order_limit"), ::OpenAPI::toJsonValue(m_uses_per_order_limit));
    }
    if (m_additional_fields_isSet) {
        obj.insert(QString("additional_fields"), ::OpenAPI::toJsonValue(m_additional_fields));
    }
    if (m_custom_fields_isSet) {
        obj.insert(QString("custom_fields"), ::OpenAPI::toJsonValue(m_custom_fields));
    }
    return obj;
}

QString OAICatalogPriceRule::getId() const {
    return m_id;
}
void OAICatalogPriceRule::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAICatalogPriceRule::is_id_Set() const{
    return m_id_isSet;
}

bool OAICatalogPriceRule::is_id_Valid() const{
    return m_id_isValid;
}

QString OAICatalogPriceRule::getGid() const {
    return m_gid;
}
void OAICatalogPriceRule::setGid(const QString &gid) {
    m_gid = gid;
    m_gid_isSet = true;
}

bool OAICatalogPriceRule::is_gid_Set() const{
    return m_gid_isSet;
}

bool OAICatalogPriceRule::is_gid_Valid() const{
    return m_gid_isValid;
}

QString OAICatalogPriceRule::getType() const {
    return m_type;
}
void OAICatalogPriceRule::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAICatalogPriceRule::is_type_Set() const{
    return m_type_isSet;
}

bool OAICatalogPriceRule::is_type_Valid() const{
    return m_type_isValid;
}

QString OAICatalogPriceRule::getName() const {
    return m_name;
}
void OAICatalogPriceRule::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICatalogPriceRule::is_name_Set() const{
    return m_name_isSet;
}

bool OAICatalogPriceRule::is_name_Valid() const{
    return m_name_isValid;
}

QString OAICatalogPriceRule::getDescription() const {
    return m_description;
}
void OAICatalogPriceRule::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAICatalogPriceRule::is_description_Set() const{
    return m_description_isSet;
}

bool OAICatalogPriceRule::is_description_Valid() const{
    return m_description_isValid;
}

QString OAICatalogPriceRule::getShortDescription() const {
    return m_short_description;
}
void OAICatalogPriceRule::setShortDescription(const QString &short_description) {
    m_short_description = short_description;
    m_short_description_isSet = true;
}

bool OAICatalogPriceRule::is_short_description_Set() const{
    return m_short_description_isSet;
}

bool OAICatalogPriceRule::is_short_description_Valid() const{
    return m_short_description_isValid;
}

bool OAICatalogPriceRule::isAvail() const {
    return m_avail;
}
void OAICatalogPriceRule::setAvail(const bool &avail) {
    m_avail = avail;
    m_avail_isSet = true;
}

bool OAICatalogPriceRule::is_avail_Set() const{
    return m_avail_isSet;
}

bool OAICatalogPriceRule::is_avail_Valid() const{
    return m_avail_isValid;
}

QList<OAICatalogPriceRule_Action> OAICatalogPriceRule::getActions() const {
    return m_actions;
}
void OAICatalogPriceRule::setActions(const QList<OAICatalogPriceRule_Action> &actions) {
    m_actions = actions;
    m_actions_isSet = true;
}

bool OAICatalogPriceRule::is_actions_Set() const{
    return m_actions_isSet;
}

bool OAICatalogPriceRule::is_actions_Valid() const{
    return m_actions_isValid;
}

OAIA2CDateTime OAICatalogPriceRule::getCreatedTime() const {
    return m_created_time;
}
void OAICatalogPriceRule::setCreatedTime(const OAIA2CDateTime &created_time) {
    m_created_time = created_time;
    m_created_time_isSet = true;
}

bool OAICatalogPriceRule::is_created_time_Set() const{
    return m_created_time_isSet;
}

bool OAICatalogPriceRule::is_created_time_Valid() const{
    return m_created_time_isValid;
}

OAIA2CDateTime OAICatalogPriceRule::getDateStart() const {
    return m_date_start;
}
void OAICatalogPriceRule::setDateStart(const OAIA2CDateTime &date_start) {
    m_date_start = date_start;
    m_date_start_isSet = true;
}

bool OAICatalogPriceRule::is_date_start_Set() const{
    return m_date_start_isSet;
}

bool OAICatalogPriceRule::is_date_start_Valid() const{
    return m_date_start_isValid;
}

OAIA2CDateTime OAICatalogPriceRule::getDateEnd() const {
    return m_date_end;
}
void OAICatalogPriceRule::setDateEnd(const OAIA2CDateTime &date_end) {
    m_date_end = date_end;
    m_date_end_isSet = true;
}

bool OAICatalogPriceRule::is_date_end_Set() const{
    return m_date_end_isSet;
}

bool OAICatalogPriceRule::is_date_end_Valid() const{
    return m_date_end_isValid;
}

double OAICatalogPriceRule::getUsageCount() const {
    return m_usage_count;
}
void OAICatalogPriceRule::setUsageCount(const double &usage_count) {
    m_usage_count = usage_count;
    m_usage_count_isSet = true;
}

bool OAICatalogPriceRule::is_usage_count_Set() const{
    return m_usage_count_isSet;
}

bool OAICatalogPriceRule::is_usage_count_Valid() const{
    return m_usage_count_isValid;
}

QList<OAICoupon_Condition> OAICatalogPriceRule::getConditions() const {
    return m_conditions;
}
void OAICatalogPriceRule::setConditions(const QList<OAICoupon_Condition> &conditions) {
    m_conditions = conditions;
    m_conditions_isSet = true;
}

bool OAICatalogPriceRule::is_conditions_Set() const{
    return m_conditions_isSet;
}

bool OAICatalogPriceRule::is_conditions_Valid() const{
    return m_conditions_isValid;
}

qint32 OAICatalogPriceRule::getUsesPerOrderLimit() const {
    return m_uses_per_order_limit;
}
void OAICatalogPriceRule::setUsesPerOrderLimit(const qint32 &uses_per_order_limit) {
    m_uses_per_order_limit = uses_per_order_limit;
    m_uses_per_order_limit_isSet = true;
}

bool OAICatalogPriceRule::is_uses_per_order_limit_Set() const{
    return m_uses_per_order_limit_isSet;
}

bool OAICatalogPriceRule::is_uses_per_order_limit_Valid() const{
    return m_uses_per_order_limit_isValid;
}

OAIObject OAICatalogPriceRule::getAdditionalFields() const {
    return m_additional_fields;
}
void OAICatalogPriceRule::setAdditionalFields(const OAIObject &additional_fields) {
    m_additional_fields = additional_fields;
    m_additional_fields_isSet = true;
}

bool OAICatalogPriceRule::is_additional_fields_Set() const{
    return m_additional_fields_isSet;
}

bool OAICatalogPriceRule::is_additional_fields_Valid() const{
    return m_additional_fields_isValid;
}

OAIObject OAICatalogPriceRule::getCustomFields() const {
    return m_custom_fields;
}
void OAICatalogPriceRule::setCustomFields(const OAIObject &custom_fields) {
    m_custom_fields = custom_fields;
    m_custom_fields_isSet = true;
}

bool OAICatalogPriceRule::is_custom_fields_Set() const{
    return m_custom_fields_isSet;
}

bool OAICatalogPriceRule::is_custom_fields_Valid() const{
    return m_custom_fields_isValid;
}

bool OAICatalogPriceRule::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gid_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_short_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_actions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_time.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_start.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_end.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_usage_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_conditions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_uses_per_order_limit_isSet) {
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

bool OAICatalogPriceRule::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
