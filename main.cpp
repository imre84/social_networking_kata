//Written by Imre PÉNTEK <pentek.imre@gmail.com>
//code provided under terms and conditions of GPLv3

#include <string>

#include "mysocial.h"
#include "helper.h"

using namespace std;

int main()
{
    tMySocial mySocial;
    string line;
    cout<<"OK, enter commands"<<endl;
    cout<<"> "<<flush;
    while(getline(cin,line))
    {
        string username=helper::getWord(line);
        string cmd=helper::getWord(line);
        if(cmd=="->") mySocial.post(username,line);
        else if(cmd=="wall") mySocial.printWall(cout,username);
        else if(cmd=="follows") mySocial.follow(username,line);
        else if(cmd=="") mySocial.printMessagesAuthoredBy(cout,username);
        cout<<"> "<<flush;
    }

    cout<<"OK, app terminated"<<endl;

    return 0;
}
