#include "cat.h"

Cat::Cat(string name, double weight, int age):
    Animal(name, weight, age)
{};

void Cat::meow(){
    cout << "meowwww!" << endl;
};

double Cat::top_speed() {
    return (this->weight_ < 10) ? 14.5 : (this->weight_ < 15) ? 16.2 : 12.9;
};