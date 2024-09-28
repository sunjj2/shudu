//
// Created by Administrator on 24-9-28.
//

#ifndef COMMON_H
#define COMMON_H

static const unsigned int UNSELECTED = 0;

enum class Difficulty : int {
  EASY = 1,
  NORMAL,
  HEAD

};

enum class State : int {
  INITED = 0,
  ERASED,
};

enum class KeyMode : int {
  NORMAL = 1,
  VIM
};

struct KeyMap {
  const char ESC = 0x1B;
  const char U = 0x75;
  char UP;
  char LEFT;
  char DOWN;
  char RIGHT;
  const char ENTER = 0x0D;
};

struct Normal : KeyMap {
  Normal() {
    UP = 0x77; //w
    LEFT = 0x61;//a
    DOWN = 0x73;//s
    RIGHT = 0x64;//d
  }
};

struct Vim : KeyMap {
    Vim () {
      UP = 0x6B; //这些十六进制值通常用于表示 ASCII 字符或键盘输入.  k
      LEFT = 0x68; //h
      DOWN = 0x6A;//j
      RIGHT = 0x6C;//l
    }
};

struct point_t {
  int x;
  int y;
};

struct point_vlaue_t {
  int value;
  State state;
};

class CPointSort
{
  public:
    bool operator() (const point_t &lhs, const point_t &rhs) const {
      if ((lhs.x == rhs.x) && (lhs.y == rhs.y))
        return false;
      else
        return true;
    }
};


#endif //COMMON_H
