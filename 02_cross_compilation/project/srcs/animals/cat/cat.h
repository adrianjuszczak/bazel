#ifndef __CAT_H__
#define __CAT_H__

#include <iostream>
#include <string>
#include "project/libs/hdrs/animal.h"

using namespace std;

class Cat : public Animal {
public:
    Cat(string name, double weight, int age);
    void meow();
    double top_speed() override;
};

#endif //__CAT_H__