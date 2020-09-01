//Written by Imre PÉNTEK <pentek.imre@gmail.com>
//code provided under terms and conditions of GPLv3

#include "message.h"
#include "helper.h"

using namespace std;

ostream &operator<<(ostream &l,const tMessage &r)
{
    l<<r.m_user<<" - "<<r.m_msg<<" ("<<helper::descriptiveTime(r.m_timestamp)<<")";
    return l;
}
