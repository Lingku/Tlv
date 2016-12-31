#include "TlvCore.h"
#include <cstring>
#include <sstream>

namespace serialization {

    template<typename T>
    uint8_t_vector to_vector(T data)
    {
        uint8_t_vector t;
        do
        {
            t.push_back(data & 0xFFu);
            data >>= 8;
        }while(data);

        return std::move(t);
    }

    void TlvCore::push_back(uint32_t const tag, uint8_t const *value, size_t const length)
    {
        push_back_tag(tag);

        push_back_length(length);

        std::copy(value, value + length, std::back_inserter(m_vector));
    }

    void TlvCore::push_back_tag(uint32_t tag)
    {
        uint8_t_vector t = to_vector<uint32_t>(tag);

        std::copy(t.rbegin(), t.rend(), std::back_inserter(m_vector));
    }

    void TlvCore::push_back_length(size_t length)
    {
        uint8_t_vector t = to_vector<size_t>(length);

        if (length > 0x127u)
        {
            uint8_t i = (0x80u + (t.size() & 0x7Fu));
            m_vector.push_back(i);
        }

        std::copy(t.rbegin(), t.rend(), std::back_inserter(m_vector));
    }

    size_t TlvCore::size() {
        return m_vector.size();
    }

    tlv_vector TlvCore::serialize() {
        return std::move(m_vector);
    }
}
