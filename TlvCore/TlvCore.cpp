//
// Created by us on 03/11/2016.
//

#include "TlvCore.h"
#include <cstring>
#include <iostream>
#include <sstream>

void TlvCore::push_back(const char *str)
{
    for(int i = 0; i < strlen(str); i++)
    {
        m_vector.push_back(str[i]);
    }
}

int TlvCore::size() {
    return m_vector.size();
}

const char* TlvCore::serialize()
{
    std::stringstream ss;
    for (char_vector::iterator it = m_vector.begin(); it != m_vector.end(); it++)
    {
        ss << *it;
    }

    return ss.str().c_str();
}