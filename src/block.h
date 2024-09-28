//
// Created by Administrator on 24-9-28.
//

#ifndef BLOCK_H
#define BLOCK_H

#include "common.h"

class CBlock {
  static const int MAX_COUNT = 9;
public:
  CBlock();
  bool isValid() const;
  bool isFull() const;
  void print() const;
  void push_back(point_value_t *point);

private:
  int _count;
  point_value_t *_numbers[MAX_COUNT];
};


#endif //BLOCK_H