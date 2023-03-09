# Linking libraries 

### Prerequisite
At this point you should be familliar with following stages:
- 00_hello_bazel 

Due to fact that this guide focuses on `bazel` there won't be additional information about how to create  
object file, library and compile source code. It is also assumed that you have basic knowledge of `Linux CLI`.  

#### Steps 

```bash 
    mkdir -p /home/adrianjuszczak/Sandbox/gitHub/bazel/01_linking_libraries
    cd /home/adrianjuszczak/Sandbox/gitHub/bazel/01_linking_libraries
    touch WORKSPACE
    mkdir project && cd project
    touch BUILD main.cpp
    mkdir src lib
    cd src 
    touch BUILD IHuman.h Developer.k Developer.cpp
```


#### Static library creation
Required for static library creation, will be removed afterwards

Content of Developer.cpp file 
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

Compile it 
```bash 
    cd ~/Sandbox/gitHub/bazel/01_linking_libraries
    bazel build //project:main
    bazel run //project:main
```