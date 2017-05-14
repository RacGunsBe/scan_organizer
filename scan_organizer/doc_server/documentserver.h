#ifndef DOCUMENTSERVER_H
#define DOCUMENTSERVER_H

#include "clientinfo.h"
#include "documentinfo.h"
#include <string>
#include <list>
#include <queue>

class DocumentServer
{
    public:
        DocumentServer();

        std::string storagePath() const;
        void setStoragePath(const std::string& storagePath);

    private:
        std::string storagePath_;
        std::list<ClientInfo> clients_;
        std::queue<DocumentInfo> newDocs_;
};

#endif // DOCUMENTSERVER_H
