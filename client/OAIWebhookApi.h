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

#ifndef OAI_OAIWebhookApi_H
#define OAI_OAIWebhookApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIAttributeDelete_200_response.h"
#include "OAIBasketLiveShippingServiceCreate_200_response.h"
#include "OAIProductImageUpdate_200_response.h"
#include "OAIWebhookCount_200_response.h"
#include "OAIWebhookEvents_200_response.h"
#include "OAIWebhookList_200_response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIWebhookApi : public QObject {
    Q_OBJECT

public:
    OAIWebhookApi(const int timeOut = 0);
    ~OAIWebhookApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  entity QString [optional]
    * @param[in]  action QString [optional]
    * @param[in]  active bool [optional]
    */
    virtual void webhookCount(const ::OpenAPI::OptionalParam<QString> &entity = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &action = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<bool> &active = ::OpenAPI::OptionalParam<bool>());

    /**
    * @param[in]  entity QString [required]
    * @param[in]  action QString [required]
    * @param[in]  callback QString [optional]
    * @param[in]  label QString [optional]
    * @param[in]  fields QString [optional]
    * @param[in]  response_fields QString [optional]
    * @param[in]  active bool [optional]
    * @param[in]  lang_id QString [optional]
    * @param[in]  store_id QString [optional]
    */
    virtual void webhookCreate(const QString &entity, const QString &action, const ::OpenAPI::OptionalParam<QString> &callback = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &label = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &fields = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &response_fields = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<bool> &active = ::OpenAPI::OptionalParam<bool>(), const ::OpenAPI::OptionalParam<QString> &lang_id = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &store_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  id QString [required]
    */
    virtual void webhookDelete(const QString &id);


    virtual void webhookEvents();

    /**
    * @param[in]  start qint32 [optional]
    * @param[in]  count qint32 [optional]
    * @param[in]  entity QString [optional]
    * @param[in]  action QString [optional]
    * @param[in]  active bool [optional]
    * @param[in]  ids QString [optional]
    * @param[in]  params QString [optional]
    */
    virtual void webhookList(const ::OpenAPI::OptionalParam<qint32> &start = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &count = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &entity = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &action = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<bool> &active = ::OpenAPI::OptionalParam<bool>(), const ::OpenAPI::OptionalParam<QString> &ids = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &params = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  id QString [required]
    * @param[in]  callback QString [optional]
    * @param[in]  label QString [optional]
    * @param[in]  fields QString [optional]
    * @param[in]  response_fields QString [optional]
    * @param[in]  active bool [optional]
    * @param[in]  lang_id QString [optional]
    */
    virtual void webhookUpdate(const QString &id, const ::OpenAPI::OptionalParam<QString> &callback = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &label = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &fields = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &response_fields = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<bool> &active = ::OpenAPI::OptionalParam<bool>(), const ::OpenAPI::OptionalParam<QString> &lang_id = ::OpenAPI::OptionalParam<QString>());


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void webhookCountCallback(OAIHttpRequestWorker *worker);
    void webhookCreateCallback(OAIHttpRequestWorker *worker);
    void webhookDeleteCallback(OAIHttpRequestWorker *worker);
    void webhookEventsCallback(OAIHttpRequestWorker *worker);
    void webhookListCallback(OAIHttpRequestWorker *worker);
    void webhookUpdateCallback(OAIHttpRequestWorker *worker);

Q_SIGNALS:

    void webhookCountSignal(OAIWebhookCount_200_response summary);
    void webhookCreateSignal(OAIBasketLiveShippingServiceCreate_200_response summary);
    void webhookDeleteSignal(OAIAttributeDelete_200_response summary);
    void webhookEventsSignal(OAIWebhookEvents_200_response summary);
    void webhookListSignal(OAIWebhookList_200_response summary);
    void webhookUpdateSignal(OAIProductImageUpdate_200_response summary);


    void webhookCountSignalFull(OAIHttpRequestWorker *worker, OAIWebhookCount_200_response summary);
    void webhookCreateSignalFull(OAIHttpRequestWorker *worker, OAIBasketLiveShippingServiceCreate_200_response summary);
    void webhookDeleteSignalFull(OAIHttpRequestWorker *worker, OAIAttributeDelete_200_response summary);
    void webhookEventsSignalFull(OAIHttpRequestWorker *worker, OAIWebhookEvents_200_response summary);
    void webhookListSignalFull(OAIHttpRequestWorker *worker, OAIWebhookList_200_response summary);
    void webhookUpdateSignalFull(OAIHttpRequestWorker *worker, OAIProductImageUpdate_200_response summary);

    Q_DECL_DEPRECATED_X("Use webhookCountSignalError() instead")
    void webhookCountSignalE(OAIWebhookCount_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookCountSignalError(OAIWebhookCount_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookCreateSignalError() instead")
    void webhookCreateSignalE(OAIBasketLiveShippingServiceCreate_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookCreateSignalError(OAIBasketLiveShippingServiceCreate_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookDeleteSignalError() instead")
    void webhookDeleteSignalE(OAIAttributeDelete_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookDeleteSignalError(OAIAttributeDelete_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookEventsSignalError() instead")
    void webhookEventsSignalE(OAIWebhookEvents_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookEventsSignalError(OAIWebhookEvents_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookListSignalError() instead")
    void webhookListSignalE(OAIWebhookList_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookListSignalError(OAIWebhookList_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookUpdateSignalError() instead")
    void webhookUpdateSignalE(OAIProductImageUpdate_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookUpdateSignalError(OAIProductImageUpdate_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use webhookCountSignalErrorFull() instead")
    void webhookCountSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookCountSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookCreateSignalErrorFull() instead")
    void webhookCreateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookCreateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookDeleteSignalErrorFull() instead")
    void webhookDeleteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookDeleteSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookEventsSignalErrorFull() instead")
    void webhookEventsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookEventsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookListSignalErrorFull() instead")
    void webhookListSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookListSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookUpdateSignalErrorFull() instead")
    void webhookUpdateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookUpdateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace OpenAPI
#endif
