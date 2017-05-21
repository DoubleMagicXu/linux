#include<string>
#include<regex>
using namespace std;
#ifndef _RE_H_
#define _RE_H_
class re
{
public:
    re ();
    re (const string &a);
    void testIp()const;
    void testQqNumber()const;
    void testTelephoneNumber()const;
    void testCapitalLetter()const;
    void judge(const regex &)const;
private:
    string text;
};
#endif
