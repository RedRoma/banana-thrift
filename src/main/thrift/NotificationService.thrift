namespace java  tech.aroma.banana.thrift.notification.service
namespace cocoa NotificationService_
namespace cpp   aroma.banana.thrift.notification.service

/*
 * Defined in this File is the Notification Service API.
 * This Service is responsible for storing Events and notifications,
 * and actually sending Notifications to the right channels.
 */

include "Authentication.thrift"
include "Banana.thrift"
include "Endpoint.thrift"
include "Exceptions.thrift"
include "Notification.thrift"

/*
 * These Typedefs are like import statements
 * so  we don't have to type as much.
 */

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;

//Struct Typedefs
typedef Authentication.ApplicationToken ApplicationToken
typedef Banana.Application Application
typedef Banana.Urgency Urgency
typedef Notification.Notification Notification

//Exception Typedefs
typedef Exceptions.AccountAlreadyExistsException AccountAlreadyExistsException
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidCredentialsException InvalidCredentialsException
typedef Exceptions.InvalidTokenException InvalidTokenException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.ApplicationAlreadyRegisteredException ApplicationAlreadyRegisteredException
typedef Exceptions.ApplicationDoesNotExistException ApplicationDoesNotExistException
typedef Exceptions.CustomChannelUnreachableException CustomChannelUnreachableException
typedef Exceptions.ChannelDoesNotExistException ChannelDoesNotExistException
typedef Exceptions.UnauthorizedException UnauthorizedException


/** Defines the Version of the Banana Service API of this specification. */
const double API_VERSION = 1.5;

const int SERVICE_PORT = 9009;

const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "notification-srv.banana.aroma.tech", "port" : SERVICE_PORT };

const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "notification-srv.beta.banana.aroma.tech", "port" : SERVICE_PORT };


//==========================================================
// SERVICE REQUESTS

struct SendNotificationRequest
{
    
}

struct SendNotificationResponse
{
    
}


//==========================================================
// SERVICE DEFINITION
/**
 * The Notification  Service sends events and Notifications to the proper channels.
 * This includes Email, Slack, iOS Push Notification, etc.
 */
service NotificationService
{
    
    double getApiVersion()
    
    //===============================================
    // Operations for Applications
    //===============================================
    
    SendNotificationResponse sendNotification(1: SendNotificationRequest request) throws (1 : InvalidArgumentException ex1,
                                                                                          2 : OperationFailedException ex2,
                                                                                          3 : InvalidTokenException ex3);

}