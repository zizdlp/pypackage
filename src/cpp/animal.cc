#include "animal.h"

#include <glog/logging.h>

Animal::Animal() { LOG(WARNING) << "调用 Animal 构造函数"; };
Animal::~Animal() { LOG(WARNING) << "调用 Animal 析构函数"; };  // 纯虚析构函数 也需要有函数体