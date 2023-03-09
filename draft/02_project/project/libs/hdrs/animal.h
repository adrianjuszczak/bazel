#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:
        string get_name();
        double get_weight();
        int get_age();
        virtual double top_speed();

    protected:
        Animal(string name, double weight, int age);
        string name_;
        double weight_;
        int age_;
};

#endif //__ANIMAL_H__