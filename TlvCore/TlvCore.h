#ifndef __CORE_H_
#define __CORE_H_


#include <vector>
#include <iostream>

namespace serialization
{

    using tlv_vector = std::vector<uint8_t>;
    using uint8_t_vector = std::vector<uint8_t>;

    class TlvCore {
    public:
        void push_back(uint32_t const tag, uint8_t const *value, size_t const length);

        size_t size();

        tlv_vector serialize();

    private:
        tlv_vector m_vector;

        void push_back_tag(uint32_t tag);

        void push_back_length(size_t length);
    };
} // namespace serialization

#endif