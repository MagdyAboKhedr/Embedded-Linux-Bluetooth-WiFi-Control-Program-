#ifndef __BLE_MODULE__H__
#define __BLE_MODULE__H__


int choice_;
namespace choices{

    enum ble_Ch{
    DIS=1,
    ON,
    OFF,
    CON,
    BCK
    };
}

void BLE_manager();

#endif  //!__BLE_MODULE__H__