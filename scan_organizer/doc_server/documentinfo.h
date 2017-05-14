#ifndef DOCUMENTINFO_H
#define DOCUMENTINFO_H

#include <string>
#include <set>

class DocumentInfo
{
    public:
        enum State { New, Updated, Deleted };
        DocumentInfo();

        std::string fileName() const;
        void setFileName(const std::string& fileName);

        void addTag(std::string tag);
        void removeTag(std::string tag);

    private:
        std::string fileName_;
        State state_;
        std::set<std::string> tags_;
        std::string description_;
};

#endif // DOCUMENTINFO_H
