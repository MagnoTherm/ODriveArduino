#pragma once

#include "ODriveCAN.h"
#include <Arduino_MachineControl.h>

using namespace machinecontrol;
// Must be defined by the application
void onCanMessage(const mbed::CANMessage &msg);

static bool sendMsg(COMMClass &can_intf, uint32_t id, uint8_t length, const uint8_t *data)
{
    // Note: Arduino_CAN does not support the RTR bit. The ODrive interprets
    // zero-length packets the same as RTR=1, but it creates the possibility of
    // collisions.
    mbed::CANMessage msg = mbed::CANMessage(id, data, length);
    return can_intf.can.write(msg) >= 0;
}

static void onReceive(const mbed::CANMessage &msg, ODriveCAN &odrive)
{
    odrive.onReceive(msg.id, msg.len, msg.data);
}

static void pumpEvents(COMMClass &intf, int max_events = 100)
{
    mbed::CANMessage msg;
    if (comm_protocols.can.read(msg))
    {
        onCanMessage(msg);
    }
}

CREATE_CAN_INTF_WRAPPER(COMMClass)
