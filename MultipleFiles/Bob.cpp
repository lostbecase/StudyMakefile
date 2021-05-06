#include<iostream>
#include"Bob.h"
CBob::CBob(string strMessage_)
{
    m_strMessage = strMessage_;
}

void CBob::SayHello()
{
    cout<<"Hello,My name is Bob,"<<"my message is "<<m_strMessage<<endl;
}