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

#include "OAIProductAdd_specifics_inner_booking_details_availabilities_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductAdd_specifics_inner_booking_details_availabilities_inner::OAIProductAdd_specifics_inner_booking_details_availabilities_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductAdd_specifics_inner_booking_details_availabilities_inner::OAIProductAdd_specifics_inner_booking_details_availabilities_inner() {
    this->initializeModel();
}

OAIProductAdd_specifics_inner_booking_details_availabilities_inner::~OAIProductAdd_specifics_inner_booking_details_availabilities_inner() {}

void OAIProductAdd_specifics_inner_booking_details_availabilities_inner::initializeModel() {

    m_day_isSet = false;
    m_day_isValid = false;

    m_is_available_isSet = false;
    m_is_available_isValid = false;

    m_times_isSet = false;
    m_times_isValid = false;
}

void OAIProductAdd_specifics_inner_booking_details_availabilities_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductAdd_specifics_inner_booking_details_availabilities_inner::fromJsonObject(QJsonObject json) {

    m_day_isValid = ::OpenAPI::fromJsonValue(m_day, json[QString("day")]);
    m_day_isSet = !json[QString("day")].isNull() && m_day_isValid;

    m_is_available_isValid = ::OpenAPI::fromJsonValue(m_is_available, json[QString("is_available")]);
    m_is_available_isSet = !json[QString("is_available")].isNull() && m_is_available_isValid;

    m_times_isValid = ::OpenAPI::fromJsonValue(m_times, json[QString("times")]);
    m_times_isSet = !json[QString("times")].isNull() && m_times_isValid;
}

QString OAIProductAdd_specifics_inner_booking_details_availabilities_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductAdd_specifics_inner_booking_details_availabilities_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_day_isSet) {
        obj.insert(QString("day"), ::OpenAPI::toJsonValue(m_day));
    }
    if (m_is_available_isSet) {
        obj.insert(QString("is_available"), ::OpenAPI::toJsonValue(m_is_available));
    }
    if (m_times.size() > 0) {
        obj.insert(QString("times"), ::OpenAPI::toJsonValue(m_times));
    }
    return obj;
}

QString OAIProductAdd_specifics_inner_booking_details_availabilities_inner::getDay() const {
    return m_day;
}
void OAIProductAdd_specifics_inner_booking_details_availabilities_inner::setDay(const QString &day) {
    m_day = day;
    m_day_isSet = true;
}

bool OAIProductAdd_specifics_inner_booking_details_availabilities_inner::is_day_Set() const{
    return m_day_isSet;
}

bool OAIProductAdd_specifics_inner_booking_details_availabilities_inner::is_day_Valid() const{
    return m_day_isValid;
}

bool OAIProductAdd_specifics_inner_booking_details_availabilities_inner::isIsAvailable() const {
    return m_is_available;
}
void OAIProductAdd_specifics_inner_booking_details_availabilities_inner::setIsAvailable(const bool &is_available) {
    m_is_available = is_available;
    m_is_available_isSet = true;
}

bool OAIProductAdd_specifics_inner_booking_details_availabilities_inner::is_is_available_Set() const{
    return m_is_available_isSet;
}

bool OAIProductAdd_specifics_inner_booking_details_availabilities_inner::is_is_available_Valid() const{
    return m_is_available_isValid;
}

QList<OAIProductAdd_specifics_inner_booking_details_availabilities_inner_times_inner> OAIProductAdd_specifics_inner_booking_details_availabilities_inner::getTimes() const {
    return m_times;
}
void OAIProductAdd_specifics_inner_booking_details_availabilities_inner::setTimes(const QList<OAIProductAdd_specifics_inner_booking_details_availabilities_inner_times_inner> &times) {
    m_times = times;
    m_times_isSet = true;
}

bool OAIProductAdd_specifics_inner_booking_details_availabilities_inner::is_times_Set() const{
    return m_times_isSet;
}

bool OAIProductAdd_specifics_inner_booking_details_availabilities_inner::is_times_Valid() const{
    return m_times_isValid;
}

bool OAIProductAdd_specifics_inner_booking_details_availabilities_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_day_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_available_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_times.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductAdd_specifics_inner_booking_details_availabilities_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_day_isValid && true;
}

} // namespace OpenAPI
