#ifndef __DOG_H__
#define __DOG_H__

#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

class Dog : public Animal {
public:
    Dog(string name, double weight, int age);
    void bark();
    double top_speed() override;
};

#endif //__DOG_H__