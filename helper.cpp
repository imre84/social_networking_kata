//Written by Imre PÉNTEK <pentek.imre@gmail.com>
//code provided under terms and conditions of GPLv3

#include "helper.h"

using namespace std;

string helper::getWord(string &str)
{
    string ret=str.substr(0,str.find_first_of(' '));
    str=str.substr(ret.length());
    if(!str.empty()) str=str.substr(1);
    return ret;
}

string helper::descriptiveTime(const std::chrono::steady_clock::time_point &t)
{
    auto dt=std::chrono::duration_cast<std::chrono::seconds>(std::chrono::steady_clock::now() - t).count();

    if(dt<5) return "few seconds ago";

    if(dt<60) return std::to_string(dt)+" seconds ago";

    dt/=60;

    if(dt==1) return "1 minute ago";
    if(dt<60) return std::to_string(dt)+" minutes ago";

    dt/=60;

    if(dt==1) return "1 hour ago";
    return std::to_string(dt)+" hours ago";
}
