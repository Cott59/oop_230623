#pragma once
#include"NetMask.h"
#include<fstream>

class IP {
private:
	unsigned char _Octet1, _Octet2, _Octet3, _Octet4;

public:
	IP ip(unsigned char octet1, unsigned char octet2, unsigned char octet3, unsigned char octet4){}
	
	bool ValidIP(IP* ip);
	IP NewIP(NetMask* netmask);

};

std::istream& operator'>>'(std::istream & input, const IP & obj);

void operator '=='();
void operator '<'();

