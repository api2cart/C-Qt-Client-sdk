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

#ifndef OAI_OAIBatchApi_H
#define OAI_OAIBatchApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIModel_Response_Batch_Job_List.h"
#include "OAIResponse_Batch_Job_Result.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIBatchApi : public QObject {
    Q_OBJECT

public:
    OAIBatchApi(const int timeOut = 0);
    ~OAIBatchApi();

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
    * @param[in]  count qint32 [optional]
    * @param[in]  page_cursor QString [optional]
    * @param[in]  created_from QString [optional]
    * @param[in]  created_to QString [optional]
    * @param[in]  processed_from QString [optional]
    * @param[in]  processed_to QString [optional]
    * @param[in]  ids QString [optional]
    * @param[in]  response_fields QString [optional]
    */
    virtual void batchJobList(const ::OpenAPI::OptionalParam<qint32> &count = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &page_cursor = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &created_from = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &created_to = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &processed_from = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &processed_to = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &ids = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &response_fields = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  id QString [required]
    */
    virtual void batchJobResult(const QString &id);


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

    void batchJobListCallback(OAIHttpRequestWorker *worker);
    void batchJobResultCallback(OAIHttpRequestWorker *worker);

Q_SIGNALS:

    void batchJobListSignal(OAIModel_Response_Batch_Job_List summary);
    void batchJobResultSignal(OAIResponse_Batch_Job_Result summary);


    void batchJobListSignalFull(OAIHttpRequestWorker *worker, OAIModel_Response_Batch_Job_List summary);
    void batchJobResultSignalFull(OAIHttpRequestWorker *worker, OAIResponse_Batch_Job_Result summary);

    Q_DECL_DEPRECATED_X("Use batchJobListSignalError() instead")
    void batchJobListSignalE(OAIModel_Response_Batch_Job_List summary, QNetworkReply::NetworkError error_type, QString error_str);
    void batchJobListSignalError(OAIModel_Response_Batch_Job_List summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use batchJobResultSignalError() instead")
    void batchJobResultSignalE(OAIResponse_Batch_Job_Result summary, QNetworkReply::NetworkError error_type, QString error_str);
    void batchJobResultSignalError(OAIResponse_Batch_Job_Result summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use batchJobListSignalErrorFull() instead")
    void batchJobListSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void batchJobListSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use batchJobResultSignalErrorFull() instead")
    void batchJobResultSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void batchJobResultSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace OpenAPI
#endif
