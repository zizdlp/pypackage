package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "animal",
    srcs = [ 
      "animal.cc",
    ],
    hdrs=[
      "animal.h",
    ],
    deps = [
      "@com_github_google_glog//:glog",
    ],
)

cc_library(
    name = "duck",
    srcs = [ 
      "duck.cc",
    ],
    hdrs=[
      "duck.h",
    ],
    deps = [
      ":animal",
      "@com_github_google_glog//:glog",
    ],
)
cc_binary(
    name = "duck_test",
    srcs = [ 
      "duck_test.cc",
    ],
    deps = [
      ":duck",
      "@com_github_google_glog//:glog",
    ],
)