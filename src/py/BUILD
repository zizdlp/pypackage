load("@rules_python//python:packaging.bzl", "py_package", "py_wheel")


package(default_visibility = ["//visibility:public"])

filegroup(
    name = "animal",
    tags = [
        "animal-module",
    ],
    visibility = ["//visibility:public"],
)

py_package(
    name = "animal_pkg",
    # Only include these Python packages.
    packages = [
        "_solib_k8",
        "src.py.core.animal",
    ],
    deps = [
        "//src/py/core:animal",
    ],
)
py_wheel(
    name = "animal_wheel",
    author = "zizdlp",
    author_email = "zizdlp@gmail.com",
    distribution = "animal",
    license = "ApacheV2",
    python_tag = "py3",
    version = "0.1",
    deps = [":animal_pkg"],
)

# zip_to_tar(
#     name = "animal_tgz",
#     src = "animal_wheel",
#     extension = "tgz",
#     group_map = "//bazel/images/nonroot:owner-group-map.txt",
#     owner_map = "//bazel/images/nonroot:owner-group-map.txt",
# )

