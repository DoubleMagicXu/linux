#include<iostream>
#include<regex>
#include"re.h"
#include<string>
using namespace std;
re::re():text(""){};
re::re(const string &test):text("")
{
    text=test;
}
void re::judge(const regex &rex)const
{
     smatch result;
    try
    {
        if(regex_search(text,result,rex))
        {
             cout<<result.str()<<endl;
        }
        else
        {
            cout<<"No match"<<endl;
        }
    }
    catch(regex_error e)
    {
        cout<<e.what()<<'\t'<<e.code()<<endl;
    }
    cout<<"Done!"<<endl;
}

void re::testIp()const//IP 检测
{
    regex rex("^(25[0-5]|2[0-4]\\d|[0-1]\\d{2}|[1-9]?\\d)\\.(25[0-5]|2[0-4]\\d|[0-1]\\d{2}|[1-9]?\\d)\\.(25[0-5]|2[0-4]\\d|[0-1]\\d{2}|[1-9]?\\d)\\.(25[0-5]|2[0-4]\\d|[0-1]\\d{2}|[1-9]?\\d)$");
    judge(rex);
}
void re::testQqNumber()const///qq号码检测
{
    //regex rex("[1-9]([0-9]{5,11})");这里曾经出现了一些偏差
    regex rex("([1-9])([0-9]{5,11})");
    judge(rex);
}
void re::testTelephoneNumber()const
{
    regex rex("^0\\d{2,3}-?\\d{7,8}$");
    judge(rex);
}
void re::testCapitalLetter()const
{
    regex rex("^[A-Z]+$");
    judge(rex);
}
