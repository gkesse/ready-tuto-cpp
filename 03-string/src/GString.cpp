//===============================================
#include "GString.h"
//===============================================
GString::GString() {

}
//===============================================
GString::GString(const char* _data)
: std::string(_data) {

}
//===============================================
GString::GString(char* _data, int _size)
: std::string(_data, _size) {

}
//===============================================
GString::GString(const std::string& _data)
: std::string(_data) {

}
//===============================================
GString::~GString() {

}
//===============================================