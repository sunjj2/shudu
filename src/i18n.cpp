//
// Created by Administrator on 24-9-29.
//
#include "i18n.h"
#include <cassert>"


I18n::Dict english = {
    {I18n::Key::ASK_KEY_MAP,"Keymap mod : 1 WASD 2 VIM"},
    {I18n::Key::INPUT_ERROR,"Input error"},
    {I18n::Key::LOAD_PROGRESS_FAIL,"Load progress fail"},
    {I18n::Key::ASK_QUIT,"Quit game? [Y/N]"},
    {I18n::Key::ASK_SAVE,"Do you want to save the gamr program? [Y/N]"},
    {I18n::Key::ASK_SAVE_PATH,"Input path of the parogress file:"},
    {I18n::Key::FILE_EXIST_ERROR, "The file is already exist."},
    {I18n::Key::CONTINUE,"Continue"},
    {I18n::Key::UNDO_ERROR,"No more action to undo."},
    {I18n::Key::CONGRATULATION,"Congratulations! You Win!"},
    {I18n::Key::NOT_COMPLETED, "Sorry, not completed."},
    {I18n::Key::ASK_DIFFICULTY,"Select difficulty: 1 Easy 2 Normal 3 Easy"},
};

I18n::Dict chinese = {
    {I18n::Key::ASK_KEY_MAP, "设置按键模式: 1 WASD 2 VIM"},
    {I18n::Key::INPUT_ERROR, "输入错误!"},
    {I18n::Key::LOAD_PROGRESS_FAIL, "加载存档失败!"},
    {I18n::Key::ASK_QUIT, "退出游戏? [Y/N]"},
    {I18n::Key::ASK_SAVE, "保存进度? [Y/N]"},
    {I18n::Key::ASK_SAVE_PATH, "输入存档文件路径:"},
    {I18n::Key::FILE_EXIST_ERROR, "文件已存在"},
    {I18n::Key::CONTINUE, "继续"},
    {I18n::Key::UNDO_ERROR, "没有可以撤销的动作"},
    {I18n::Key::CONGRATULATION, "恭喜! 你解开了谜题!"},
    {I18n::Key::NOT_COMPLETED, "对不起, 还未完成"},
    {I18n::Key::ASK_DIFFICULTY, "设置难度: 1简单 2普通 3困难"},
};

I18n::I18n() : dict_(&english) {}

I18n& I18n::Instance() {
  static I18n i18n;
  return i18n;
}

void I18n::SetLanguage(Language language) {
  switch (language) {
    case Language::ENGLISH:
      dict_ = &english;
      break;
    case Language::CHINESE:
      dict_ = &chinese;
      break;
    case Language::MAX:
    default:   //如果传入了非法的值
      assert(false);
  }
}

std::string I18n::Get(Key key) const{
  assert(dict_->count(key)); //确保字典中存在这个 key
  return (*dict_)[key];
}