#ifndef __WIFI_MODULE__H__
#define __WIFI_MODULE__H__

#include <iostream>

int choice;

namespace choices_wifi{

    enum wifi_ch{
    DIS=1,
    ON,
    OFF,
    CON,
    RMV,
    MOD,
    SRCH,
    BCK
    };
}

std::string execCommand(const char* cmd);


void wifi_manager();

void check_wifi();

void wifiON();

void wifiOFF();


#endif  //!__WIFI_MODULE__H__