#ifndef IHUMAN_H
#define IHUMAN_H

namespace anjk
{
    class IHuman
    {
    public:
        IHuman() = default;
        virtual ~IHuman() = default;

        virtual void printFunction() = 0;
    };
}
#endif
