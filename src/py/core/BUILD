package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")

load("@rules_python//python:defs.bzl", "py_binary")
load("@my_deps//:requirements.bzl", "requirement")

pybind_extension(
    name = "animal",  # This name is not actually created!
    srcs = ["animal_wrapper.cc"],
    deps = [
        "//src/cpp:duck",
        ],
)

py_library(
    name = "animal",
    data = [":animal.so"],
)