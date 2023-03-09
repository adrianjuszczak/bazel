# Simplest Bazel project

### Prerequisite
At this point you should be familliar with basic therminology. You can find a link in `README` file.  

1. We are goint to create bazel's `WORKSPACE`. In other words `WORKSPACE` is a directory holding source files and bazel's output files.  

```bash
    mkdir -p ~/Sandbox/gitHub/bazel/00_hello_bazel
    cd ~/Sandbox/gitHub/bazel/00_hello_bazel
    touch WORKSPACE
    touch BUILD 
    touch main.cpp
```

2. `BUILD` says how to build different parts of projects. Directory containing `BUILD` file is a package. IN other words it is a set of rules how to build current `PACKAGE`.
3. Your main.cpp should be simple:

```c++
#include <iostream>

int
main(void) {
    std::cout << "Hello nice to see you! \n";

    return 0;
}
```

4. We are going to add binary_rules. Your BUILD file should look like:

```t
cc_binary(
    name = "hello_bazel",       # name of target 
    srcs = ["main.cpp"],        # list of files that are processed to create a target
    copts = ["-Wall"],         # list of optional commands added to compilation process
)
```

5. Compile project 

```bash
bazel build //:hello_bazel
```

