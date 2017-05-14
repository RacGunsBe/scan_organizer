#include "documentserver.h"

DocumentServer::DocumentServer()
{

}

std::string DocumentServer::storagePath() const
{
    return storagePath_;
}

void DocumentServer::setStoragePath(const std::string& storagePath)
{
    storagePath_ = storagePath;
}
