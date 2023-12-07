#include "duck.h"
#include <glog/logging.h>
int main() {
  LOG(INFO) << "======== duck test =========";
  Duck duck;
  duck.bark();
  return 0;
}