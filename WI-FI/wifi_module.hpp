#ifndef __WIFI_MODULE__H__
#define __WIFI_MODULE__H__
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


void wifi_manager();


#endif  //!__WIFI_MODULE__H__