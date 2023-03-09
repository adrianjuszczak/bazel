# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library

cc_import(
  name = "mylib",
  static_library = "libdeveloper.a",
)

cc_library(
    name = "libdev",
    deps = [":mylib"],
    visibility = ["//project/src:__pkg__"],
)

# cc_library(
#     name = "libdev",
#     srcs = ["libdeveloper.a"],
#     visibility = ["//project/src:__pkg__"],
# )