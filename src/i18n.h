//
// Created by Administrator on 24-9-29.
//

#pragma once

#include <cstdint>
#include <map>
#include <string>

enum class Language : uint32_t {
  ENGLISH,
  CHINESE,
  MAX,//用边界检查
};

class I18n {
  public:
    enum class Key {
      ASK_KEY_MAP,
      INPUT_ERROR,
      LOAD_PROGRESS_FAIL,
      ASK_QUIT,
      ASK_SAVE,
      ASK_SAVE_PATH,
      FILE_EXIST_ERROR,
      CONTINUE,
      UNDO_ERROR,
      CONGRATULATION,
      NOT_COMPLETED,
      ASK_DIFFICULTY,
    };
    using Dict = std::map<Key, std::string>;

    static I18n& Instance(); //单例模式的实现，确保在程序中只会有一个国际化管理器实例。
    void SetLanguage(Language);  //设置当前语言,Language是一个枚举类型
    std::string Get(Key) const;

  private:
     I18n(); // 私有化构造函数，外部无法创建实例，从而确保只有一个实例

     Dict* dict_;


};