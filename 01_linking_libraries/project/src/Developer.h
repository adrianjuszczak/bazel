#ifndef DEVELOPER_H
#define DEVELOPER_H

#include <string>

#include "IHuman.h"

namespace anjk
{
    class Developer : public IHuman
    {
    public:
        Developer(std::string name);
        ~Developer();

        void printFunction() override;
    private:
        std::string m_name {};

    };
}

#endif