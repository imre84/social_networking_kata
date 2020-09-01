//Written by Imre PÉNTEK <pentek.imre@gmail.com>
//code provided under terms and conditions of GPLv3

#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include <chrono>
#include <ctime>
#include <ostream>

struct tMessage
{
    tMessage(const std::string user,const std::string msg):m_user(user),m_msg(msg),m_timestamp(std::chrono::steady_clock::now()) {}
    std::string m_user;
    std::string m_msg;
    std::chrono::steady_clock::time_point m_timestamp;
};

std::ostream &operator<<(std::ostream &l,const tMessage &r);

#endif // MESSAGE_H
