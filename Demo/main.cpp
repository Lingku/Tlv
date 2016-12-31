#include <stdio.h>
#include <sstream>
#include <iomanip>
#include "TlvCore.h"

using namespace serialization;

int main()
{
    TlvCore c;

    uint8_t value[] = {'H', 'e', 'l', 'l', 'o'};
    c.push_back(0x31323334, value, sizeof(value));

    std::cout << "size " << c.size() << std::endl;


    tlv_vector t = c.serialize();
    std::cout << "size " << t.size() << std::endl;

    for(auto a: t)
    {
        std::cout << a << "\n";
    }

    t = c.serialize();
    std::cout << "size " << t.size() << std::endl;

    for(auto a: t)
    {
        std::cout << a << "\n";
    }




    return 0;
}