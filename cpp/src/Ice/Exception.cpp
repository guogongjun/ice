// **********************************************************************
//
// Copyright (c) 2001
// MutableRealms, Inc.
// Huntsville, AL, USA
//
// All Rights Reserved
//
// **********************************************************************

#include <Ice/Exception.h>
#include <Ice/Network.h>

using namespace std;
using namespace Ice;
using namespace IceInternal;

Ice::LocalException::LocalException(const char* file, int line) :
    Exception(file, line)
{
}

void
Ice::UnknownLocalException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nunknown local exception";
}

void
Ice::UnknownUserException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nunknown user exception";
}

void
Ice::UnknownException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nunknown C++ exception";
}

void
Ice::VersionMismatchException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nIce library version mismatch";
}

void
Ice::CommunicatorDestroyedException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\ncommunicator object destroyed";
}

void
Ice::ObjectAdapterDeactivatedException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nobject adapter deactivated";
}

void
Ice::NoEndpointException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nno suitable endpoint available";
}

void
Ice::EndpointParseException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nerror while parsing endpoint";
}

void
Ice::ReferenceParseException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nerror while parsing reference";
}

void
Ice::ReferenceIdentityException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nreference identity mismatch in location forward";
}

void
Ice::ObjectNotExistException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nobject does not exist";
}

void
Ice::FacetNotExistException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nfacet does not exist";
}

void
Ice::OperationNotExistException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\noperation does not exist";
}

void
Ice::SystemException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nsystem exception: " << errorToString(error);
}

void
Ice::SocketException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nsocket exception: " << errorToString(error);
}

void
Ice::ConnectFailedException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nconnect failed: " << errorToString(error);
}

void
Ice::ConnectionLostException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nconnection lost: ";
    if (error == 0)
    {
	out << "recv() returned zero";
    }
    else
    {
	out << errorToString(error);
    }
}

void
Ice::DNSException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nDNS error: " << errorToStringDNS(error);
}

void
Ice::TimeoutException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\ntimeout while sending or receiving data";
}

void
Ice::ConnectTimeoutException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\ntimeout while establishing a connection";
}

void
Ice::ProtocolException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nunknown protocol exception";
}

void
Ice::UnmarshalOutOfBoundsException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: out of bounds during unmarshaling";
}

void
Ice::NoObjectFactoryException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: no suitable object factory found";
}

void
Ice::NoUserExceptionFactoryException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: no suitable user exception factory found";
}

void
Ice::ProxyUnmarshalException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: inconsistent proxy data during unmarshaling";
}

void
Ice::IllegalIndirectionException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: encountered illegal protocol indirection";
}

void
Ice::MemoryLimitException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: memory limit exceeded";
}

void
Ice::EncapsulationException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: illegal encapsulation";
}

void
Ice::UnsupportedProtocolException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: unsupported protocol version";
}

void
Ice::UnsupportedEncodingException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: unsupported encoding version";
}

void
Ice::UnknownMessageException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: unknown message type";
}

void
Ice::UnknownRequestIdException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: unknown request id";
}

void
Ice::UnknownReplyStatusException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: unknown reply status";
}

void
Ice::CloseConnectionException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: connection closed";
}

void
Ice::AbortBatchRequestException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: batch request was aborted";
}

void
Ice::IllegalMessageSizeException::ice_print(ostream& out) const
{
    Exception::ice_print(out);
    out << ":\nprotocol error: illegal message size";
}
