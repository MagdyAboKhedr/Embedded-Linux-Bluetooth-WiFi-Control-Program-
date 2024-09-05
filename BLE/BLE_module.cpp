#include <iostream>
#include "BLE_module.hpp"


void BLE_manager()
{
    std::cout << "Bluetooth Control Program" << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "1. Display Bluetooth Status" << std::endl;
    std::cout << "2. Turn Bluetooth ON" << std::endl;
    std::cout << "3. Turn Bluetooth OFF" << std::endl;
    std::cout << "4. Connect to Bluetooth Device" << std::endl;
    std::cout << "8. Back to main menu" << std::endl;
    std::cout << "Enter your choice: " << std::endl;
    
    std::cin >> choice_;
    switch (choice_) {
        case choices::DIS:
            std::cout << "Display Bluetooth status\n";
            break;
        case choices::ON:
            std::cout << "Turn Bluetooth ON\n";
            break;
        case choices::OFF:
            std::cout << "Turn Bluetooth OFF\n";
            break;
        case choices::CON:
            std::cout << "Connect to Bluetooth Device\n";
            break;
        case choices::BCK:
            std::cout << "Go back to the previous menu\n";
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
    }
}