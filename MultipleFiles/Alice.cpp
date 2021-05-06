#include"Alice.h"
CAlice::CAlice(string strMessage_)
{
    m_strMessage = strMessage_;
}

void CAlice::SayHello()
{
    cout<<"Hello,My name is Alice,"<<"my message is "<<m_strMessage<<endl;
}