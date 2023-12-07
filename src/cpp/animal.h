#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
 public:
  Animal();
  virtual ~Animal() = 0;
  virtual bool bark() = 0;
};
#endif  // ANIMAL_H