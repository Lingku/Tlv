#ifndef __CORE_H_
#define __CORE_H_


#include <vector>
#include <iostream>

class TlvCore {
public:
//    TlvCore()
//    {
//        m_vector = new char_vector;
//    };
//
//    ~TlvCore()
//    {
//        std::cout << "~~~" << std::endl;
//        delete(m_vector);
//    };

    void push_back(const char *str);

    int size();

    const char* serialize();

private:
    using char_vector = std::vector<char>;

    char_vector m_vector;
};

#endif