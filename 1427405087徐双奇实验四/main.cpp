#include<iostream>
#include<string>
#include"re.h"
using namespace std;
int main()
{
    re  ip("192.168.151.198");
    ip.testIp();
    re qq("962924056");
    qq.testQqNumber();
    re tel("0515-87848210");
    tel.testTelephoneNumber();
    re cal("GOU");
    cal.testCapitalLetter();
    return 0;

}
