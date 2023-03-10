#include <iostream>
#include <string>

#if _NIKOLA_HOUSEHOLD_
#include "project/srcs/animals/dog/dog.h"
#elif _MARIA_HOUSEHOLD_
#include "project/srcs/animals/dog/cat.h"
#if _MOUSE_GENERATED_
#include "mouse.h"
#endif
#endif

using namespace std;

int main() {
    cout << "This household belongs to ";
#if _NIKOLA_HOUSEHOLD_
    Dog *rufus = new Dog("Rufus", 50.0, 6);
    cout << "Nikola and he has a dog named " << rufus->get_name() << "." << endl;
#elif _MARIA_HOUSEHOLD_
    Cat *tom = new Cat("Tom", 20.0, 3);
    cout << "Maria and she has a cat named " << tom->get_name() << "." << endl;
#if _MOUSE_GENERATED_
   Mouse *jerry = new Mouse("Jerry", 15.0, 2);
   cout << tom->get_name() << " likes to chase " << jerry->get_name() << "." << endl;
#endif //__MOUSE_GENERATED__
#else
    cout << "no one!" << endl;
#endif

    return 0;
}