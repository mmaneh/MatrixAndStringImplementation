#ifndef STRING_H
#define STRING_H
#include <cstddef>
class String {
    private:
        char* data_;
        size_t size_;
    public:
        String();
        String(const char* str);
        ~String();
        size_t length() const;
        const char* access() const;
        void print() const;

};
#endif
