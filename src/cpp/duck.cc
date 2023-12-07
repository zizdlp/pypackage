#include "duck.h"

#include <glog/logging.h>

Duck::Duck() { LOG(WARNING) << "调用 Duck 构造函数"; };
Duck::~Duck() { LOG(WARNING) << "调用 Duck 析构函数"; };
bool Duck::bark() {
  LOG(WARNING) << "调用 Duck bark: yaya";
  return true;
}