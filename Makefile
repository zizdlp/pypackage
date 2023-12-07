build_all:
	export GLOG_logtostderr=1 && \
	export GLOG_colorlogtostderr=1 && \
	bazel build //src/cpp:all
	bazel build //src/py/core:all
	bazel build //src/py/tests:all
test_all:
	export GLOG_logtostderr=1 && \
	export GLOG_colorlogtostderr=1 && \
	bazel run //src/cpp:duck_test
	bazel run //src/py/tests:test_duck
.PHONY: build_all
