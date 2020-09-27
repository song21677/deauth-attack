#include <stdint.h>
#include "mac.h"

#pragma pack(push, 1)
struct radiotap_header {
    uint8_t version;
    uint8_t pad;
    uint16_t len;
    uint32_t present;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct deauthentication {
    uint16_t fc;
    uint16_t dur;
    Mac dest;
    Mac source;
    Mac bssid;
    uint16_t seq;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct wireless_lan {
    uint16_t reason;
};
#pragma(pop)

#pragma pack(push, 1)
struct deauthpacket {
    struct radiotap_header radio;
    uint8_t padding[3];
    struct deauthentication deauth;
    struct wireless_lan wireless;
};
#pragma pack(pop)
