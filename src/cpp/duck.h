#ifndef DUCK_H
#define DUCK_H
#include "animal.h"

class Duck : public Animal {
 public:
  Duck();
  ~Duck();
  bool bark();
};
#endif  // DUCK_H