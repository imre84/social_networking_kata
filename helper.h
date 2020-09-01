//Written by Imre PÉNTEK <pentek.imre@gmail.com>
//code provided under terms and conditions of GPLv3

#ifndef HELPER_H
#define HELPER_H

#include <string>
#include <chrono>
#include <ctime>

namespace helper {

    std::string getWord(std::string &str);
    std::string descriptiveTime(const std::chrono::steady_clock::time_point &t);

}

#endif // HELPER_H
