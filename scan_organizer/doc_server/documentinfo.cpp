#include "documentinfo.h"

DocumentInfo::DocumentInfo()
{

}

std::string DocumentInfo::fileName() const
{
    return fileName_;
}

void DocumentInfo::setFileName(const std::string& fileName)
{
    fileName_ = fileName;
}

void DocumentInfo::addTag(std::string tag)
{

}

void DocumentInfo::removeTag(std::string tag)
{

}
