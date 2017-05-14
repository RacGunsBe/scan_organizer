#include "clientinfo.h"

ClientInfo::ClientInfo()
{

}

std::string ClientInfo::ipAddress() const
{
    return ipAddress_;
}

void ClientInfo::setIpAddress(const std::string& ipAddress)
{
    ipAddress_ = ipAddress;
}

std::string ClientInfo::info() const
{
    return info_;
}

void ClientInfo::setInfo(const std::string& info)
{
    info_ = info;
}
