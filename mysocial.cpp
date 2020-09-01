//Written by Imre PÉNTEK <pentek.imre@gmail.com>
//code provided under terms and conditions of GPLv3

#include "mysocial.h"

using namespace std;

void tMySocial::post(const std::string &user,const std::string &msg)
{
    m_messages.push_front(tMessage(user,msg));
}

void tMySocial::printWall(std::ostream &os,const std::string &username) const
{
    std::map<std::string,std::set<std::string>>::const_iterator it=m_subscriptions.find(username);
    if(it==m_subscriptions.cend())
    {
        printMessagesAuthoredBy(os,username);
        return;
    }

    const set<string> &userlist=it->second;
    for(const tMessage &m:m_messages)
    {
        if((m.m_user==username)||(userlist.find(m.m_user)!=userlist.cend()))
            os<<m<<endl;
    }
}

void tMySocial::follow(const std::string &user_following,const std::string &user_followed)
{
    m_subscriptions[user_following].insert(user_followed);
}

void tMySocial::printMessagesAuthoredBy(std::ostream &os,const std::string &username) const
{
    for(const tMessage &m:m_messages)
    {
        if(m.m_user==username) os<<m<<endl;
    }
}
