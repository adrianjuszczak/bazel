cc_library(
    name = "libanimal",
    hdrs = ["animal.h"],
    deps = select({
        "@bazel_tools//src/conditions:windows_msvc": ["//project/libs/windows_x86_64/msc_1900:win_msc1900_libanimal"],
        "@bazel_tools//src/conditions:darwin_x86_64": ["//project/libs/linux_x86_64:macos_libanimal"],
        "//conditions:default": ["//project/libs/linux_x86_64:linux_libanimal"],
    }),
    visibility = [
        "//project/srcs/animals/cat:__pkg__",
        "//project/srcs/animals/dog:__pkg__",
    ],
)