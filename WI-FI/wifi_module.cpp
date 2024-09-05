#include <iostream>
#include "wifi_module.hpp"


void wifi_manager()
{
    std::cout << "WiFi Control Program" << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "1. Display WiFi Status" << std::endl;
    std::cout << "2. Turn WiFi ON" << std::endl;
    std::cout << "3. Turn WiFi OFF" << std::endl;
    std::cout << "4. Connect to WiFi Network" << std::endl;
    std::cout << "5. Removed a Saved Network" << std::endl;
    std::cout << "6. Modify a Saved Network" << std::endl;
    std::cout << "7. Search for a Netowrk" << std::endl;
    std::cout << "8. Back to main menu" << std::endl;
    std::cout << "Enter your choice: " << std::endl;

    std::cin >> choice;
    switch (choice) {
        case choices_wifi::DIS:
            std::cout << "Display Wi-Fi status\n";
            break;
        case choices_wifi::ON:
            std::cout << "Turn Wi-Fi ON\n";
            break;
        case choices_wifi::OFF:
            std::cout << "Turn Wi-Fi OFF\n";
            break;
        case choices_wifi::CON:
            std::cout << "Connect to Wi-Fi\n";
            break;
        case choices_wifi::RMV:
            std::cout << "Remove Wi-Fi network\n";
            break;
        case choices_wifi::MOD:
            std::cout << "Modify Wi-Fi settings\n";
            break;
        case choices_wifi::SRCH:
            std::cout << "Search for Wi-Fi networks\n";
            break;
        case choices_wifi::BCK:
            std::cout << "Go back to the previous menu\n";
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
    }
}