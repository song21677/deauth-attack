#ifndef MAC
#define MAC
#include <cstdint>
#include <cstring>
#include <string>

struct Mac{
    static const int SIZE = 6;

    Mac() {}
    Mac(const uint8_t *r) {memcpy(this->mac, r, SIZE);}
    Mac(std::string r);

    operator uint8_t *() const {return const_cast<uint8_t *>(mac);}
    explicit operator std::string() const;

protected:
    uint8_t mac[SIZE];
};
#endif

