#include <iostream>
#include "main_control_UI.hpp"
#include "../WI-FI/wifi_module.cpp"
#include "../BLE/BLE_module.cpp"


void main_UI()
{
    
    std::cout << "Control Program" << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "1. WI-FI Manager" << std::endl;
    std::cout << "2- Bluetooth Manager" << std::endl;
    std::cout << "3- Exit" << std::endl;
    std::cout << "Enter your Choice: " << std::endl;

    std::cin >> var;
    switch(var)
    {
        case choices::WIFI:
        {
            wifi_manager();
            break;
        }

        case choices::BLE:
        {
            BLE_manager();
            break;
        }

        case choices::EXI:
        {   
            std::cout << "EXIT";
            break;
        }
        default:
        {
            std::cout << "DEF";
        }
    }
}