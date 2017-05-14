#ifndef CLIENTINFO_H
#define CLIENTINFO_H

#include <string>

class ClientInfo
{
    public:
        ClientInfo();

        std::string ipAddress() const;
        void setIpAddress(const std::string& ipAddress);

        std::string info() const;
        void setInfo(const std::string& info);

    private:
        std::string ipAddress_;
        std::string info_;
};

#endif // CLIENTINFO_H
