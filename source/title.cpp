#include "title.hpp"

Title::Title(FsSaveDataInfo saveDataInfo) {
  //_getTitleName(saveDataInfo.titleID, this->m_titleName);
    this->m_titleID = saveDataInfo.titleID;
    //TODO: FIX SIZE
    this->m_titleIcon = (uint8_t*)malloc(256*256*4);
  _getTitleIcon(this->m_titleID, &this->m_titleIcon);
}

Title::~Title() {

}

std::string Title::getTitleName() {
  return this->m_titleName;
}

uint8_t* Title::getTitleIcon() {
  return this->m_titleIcon;
}

std::vector<uint128_t> Title::getUserIDs() {
  return this->m_userIDs;
}

void Title::addUserID(u128 userID) {
  this->m_userIDs.push_back(userID);
}

uint64_t Title::getTitleID() {
  return this->m_titleID;
}
