# Cross compilation

### Prerequisite
At this point you should be familliar with following stages:
- 00_hello_bazel 
- 01_multipackage_compilation   

When building for multicross architecture, various toolchains are reqiured. Thanks to bazel we can quickly download needed artifacts.  
WORKSPACE based on this file and its rules we are going to fetch required artifacts.  

