//Written by Imre PÉNTEK <pentek.imre@gmail.com>
//code provided under terms and conditions of GPLv3

#ifndef TMYSOCIAL_H
#define TMYSOCIAL_H

#include "message.h"

#include <iostream>
#include <map>
#include <list>
#include <set>

class tMySocial
{
public:
    void post(const std::string &user,const std::string &msg);
    void printWall(std::ostream &os,const std::string &username) const;
    void follow(const std::string &user_following,const std::string &user_followed);
    void printMessagesAuthoredBy(std::ostream &os,const std::string &username) const;
private:
    std::list<tMessage> m_messages;
    std::map<std::string,std::set<std::string>> m_subscriptions;//if subscriptions[user1] contains user2 that means user1 follows user2
};

#endif // TMYSOCIAL_H
