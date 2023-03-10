#include "dog.h"

Dog::Dog(string name, double weight, int age):
    Animal(name, weight, age)
{};

void Dog::bark(){
    cout << "woof!" << endl;
};

double Dog::top_speed() {
    return (this->weight_ < 40) ? 14.5 : (this->weight_ < 80) ? 20.0 : 15.4;
};