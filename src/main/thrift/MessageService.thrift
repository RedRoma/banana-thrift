namespace java  tech.aroma.banana.thrift.message.service
namespace cocoa MessageService_
namespace cpp   aroma.banana.thrift.message.service

/*
 * Defined in this File is the Message Service API.
 * This Service is responsible for storing Messages and providing Query
 * functionality.
 * This is an internal service not designed to be exposed to the Outside World.
 */

include "Authentication.thrift"
include "Aroma.thrift"
include "Channels.thrift"
include "Endpoint.thrift"
include "Events.thrift"
include "Exceptions.thrift"

include "ApplicationService.thrift"
include "BananaService.thrift"

/*
 * These Typedefs are like import statements
 * so  we don't have to type as much.
 */

typedef Aroma.int int;
typedef Aroma.long long;
typedef Aroma.timestamp timestamp;

//Struct Typedefs
typedef Authentication.ApplicationToken ApplicationToken
typedef Authentication.AuthenticationToken AuthenticationToken
typedef Authentication.UserToken UserToken
typedef Aroma.Application Application
typedef Aroma.Urgency Urgency
typedef Events.Event Event

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

//Service Requests and Responses Typedefs
typedef ApplicationService.SendMessageRequest SendMessageRequest
typedef ApplicationService.SendMessageResponse SendMessageResponse

typedef BananaService.DeleteMessageRequest DeleteMessageRequest
typedef BananaService.DeleteMessageResponse DeleteMessageResponse
typedef BananaService.DismissMessageRequest DismissMessageRequest
typedef BananaService.DismissMessageResponse DismissMessageResponse
typedef BananaService.GetApplicationMessagesRequest GetApplicationMessagesRequest
typedef BananaService.GetApplicationMessagesResponse GetApplicationMessagesResponse
typedef BananaService.GetInboxRequest GetInboxRequest
typedef BananaService.GetInboxResponse GetInboxResponse
typedef BananaService.GetFullMessageRequest GetFullMessageRequest
typedef BananaService.GetFullMessageResponse GetFullMessageResponse

const int SERVICE_PORT = 7011;

const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "message-srv.banana.aroma.tech", "port" : SERVICE_PORT };

const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "message-srv.beta.banana.aroma.tech", "port" : SERVICE_PORT };

/** The Default lifetime of a Regular Message sent to the Banana Service. */
const Aroma.LengthOfTime DEFAULT_MESSAGE_LIFETIME = { "value" : 1, "unit" : Aroma.TimeUnit.DAYS };

//==========================================================
// SERVICE DEFINITION
/**
 * The Notification  Service sends events and Notifications to the proper channels.
 * This includes Email, Slack, iOS Push Notification, etc.
 */
service MessageService
{
    
    double getApiVersion()
    

}
