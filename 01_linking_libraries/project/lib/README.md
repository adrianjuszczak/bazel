# Linking libraries 

### Prerequisite
At this point you should be familliar with following stages:
- 00_hello_bazel 

Due to fact that this guide focuses on `bazel` there won't be additional information about how to create  
object file, library or compile source code. It is assumed that you have basic knowledge.  


### Steps 

```bash 
    mkdir -p /home/adrianjuszczak/Sandbox/gitHub/bazel/01_linking_libraries
    cd /home/adrianjuszczak/Sandbox/gitHub/bazel/01_linking_libraries
    touch WORKSPACE
    mkdir src lib
    cd src 
    touch BUILD IHuman.h Developer.k Developer.cpp
```

Content of IHuman.h  
```c++
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
```

Content of Developer.h
```c++
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
```

Content of Developer.cpp (required for static library creation, will be removed afterwards)
```c++
#include <iostream>

#include "Developer.h"

anjk::Developer::Developer(std::string name)
: m_name{name} {}

anjk::Developer::~Developer() 
{
    std::cout << "Time to unwind a stack frame so I have to say good bye \n";
}

void anjk::Developer::printFunction() {
    std::cout << "Hello my name is a " << m_name 
              << " and I work as a developer, additionally I have ";
}
```

Static library creation

```bash
g++ -c Developer.cpp
ar -rsv libdeveloper.a Developer.o
mv libdeveloper.a ../lib
rm Developer.cpp Developer.o
```