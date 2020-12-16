#include "bite.h"

class BiteData : public QSharedData
{
public:

};

Bite::Bite() : data(new BiteData)
{

}

Bite::Bite(const Bite &rhs) : data(rhs.data)
{

}

Bite &Bite::operator=(const Bite &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

Bite::~Bite()
{

}
