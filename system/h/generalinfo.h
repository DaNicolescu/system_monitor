#ifndef GENERALINFO_H
#define GENERALINFO_H

#include <string>

class GeneralInfo
{
    std::string linuxDistribution;
    std::string cpu;
    std::string totalMemory;

public:
    explicit GeneralInfo();
    ~GeneralInfo();

    std::string getLinuxDistribution();
    std::string getCpu();
    std::string getTotalMemory();
};

#endif