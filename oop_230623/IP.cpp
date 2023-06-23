#include "IP.h"


IP IP::ip(unsigned char octet1, unsigned char octet2, unsigned char octet3, unsigned char octet4) {
    _Octet1 = octet1;
    _Octet2 = octet2;
    _Octet3 = octet3;
    _Octet4 = octet4;
}


bool IP::ValidIP(IP* ip)
{
    if (_Octet1 < 0 && _Octet1 < 255);
    else
        if (_Octet2 < 0 && _Octet2 < 255);
        else
            if (_Octet3 < 0 && _Octet3 < 255);
            else {
                if (_Octet4 < 0 && _Octet4 < 255);
                return true;
            }

    return false;
}

IP IP::NewIP(NetMask* netmask)
{
    IP newip("255", "220", "255", '4');

    return newip();
}
