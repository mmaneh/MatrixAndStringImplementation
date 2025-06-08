#include "string.h"
#include <iostream>

        String::String() {
            data_ = new char[1];
            data_[0] = '\0';
            size_ = 0;
        }
        String::String(const char* str){
            int count = 0;
            int i = 0;
            while (str[i++] != '\0') ++count;
            data_ = new char[count + 1];
            for(int i = 0; i < count; ++i) {
                data_[i] = str[i];
            }
            size_ = count;
            data_[size_] = '\0';
        }

        String::String(String&& otr) {
                data_ = otr->data_;
                size_ = otr->size;
                otr->size = 0;
                otr->data_ =nullptr;
        }
        String::~String() {
            delete[] data_;
            size_ = 0;
            data_ = nullptr;
            
        }
        size_t String::length() const {
            return size_;
        }
        const char* String::access() const{
            return data_;
        }
        void String::print() const {
            std::cout << data_ << std::endl;
        }

