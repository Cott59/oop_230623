#pragma once
#include"IP.h"


class NetMask {
private:
	unsigned char _OctMask1, _OctMask2, _OctMask3, _OctMask4;

public:
	NetMask netmask(unsigned char OctMask1, unsigned char _OctMask2, unsigned char _OctMask3, unsigned char _OctMask4){}

	bool ValidIpMask(IP* ip);

};