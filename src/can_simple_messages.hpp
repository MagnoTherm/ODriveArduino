
#pragma once

// This file is autogenerated using generate_can_messages.py from the DBC definitions in can_dbc.py

#include <stdint.h>

struct Get_Version_msg_t final {
    constexpr Get_Version_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Get_Version_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<uint8_t>(buf, Protocol_Version, 0, 8, true);
        can_set_signal_raw<uint8_t>(buf, Hw_Version_Major, 8, 8, true);
        can_set_signal_raw<uint8_t>(buf, Hw_Version_Minor, 16, 8, true);
        can_set_signal_raw<uint8_t>(buf, Hw_Version_Variant, 24, 8, true);
        can_set_signal_raw<uint8_t>(buf, Fw_Version_Major, 32, 8, true);
        can_set_signal_raw<uint8_t>(buf, Fw_Version_Minor, 40, 8, true);
        can_set_signal_raw<uint8_t>(buf, Fw_Version_Revision, 48, 8, true);
        can_set_signal_raw<uint8_t>(buf, Fw_Version_Unreleased, 56, 8, true);
    }

    void decode_buf(const uint8_t* buf) {
        Protocol_Version = can_get_signal_raw<uint8_t>(buf, 0, 8, true);
        Hw_Version_Major = can_get_signal_raw<uint8_t>(buf, 8, 8, true);
        Hw_Version_Minor = can_get_signal_raw<uint8_t>(buf, 16, 8, true);
        Hw_Version_Variant = can_get_signal_raw<uint8_t>(buf, 24, 8, true);
        Fw_Version_Major = can_get_signal_raw<uint8_t>(buf, 32, 8, true);
        Fw_Version_Minor = can_get_signal_raw<uint8_t>(buf, 40, 8, true);
        Fw_Version_Revision = can_get_signal_raw<uint8_t>(buf, 48, 8, true);
        Fw_Version_Unreleased = can_get_signal_raw<uint8_t>(buf, 56, 8, true);
    }

    static const uint8_t cmd_id = 0x000;
    static const uint8_t msg_length = 8;
    
    uint8_t Protocol_Version = 0;
    uint8_t Hw_Version_Major = 0;
    uint8_t Hw_Version_Minor = 0;
    uint8_t Hw_Version_Variant = 0;
    uint8_t Fw_Version_Major = 0;
    uint8_t Fw_Version_Minor = 0;
    uint8_t Fw_Version_Revision = 0;
    uint8_t Fw_Version_Unreleased = 0;
};

struct Heartbeat_msg_t final {
    constexpr Heartbeat_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Heartbeat_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<uint32_t>(buf, Axis_Error, 0, 32, true);
        can_set_signal_raw<uint8_t>(buf, Axis_State, 32, 8, true);
        can_set_signal_raw<uint8_t>(buf, Procedure_Result, 40, 8, true);
        can_set_signal_raw<uint8_t>(buf, Trajectory_Done_Flag, 48, 1, true);
    }

    void decode_buf(const uint8_t* buf) {
        Axis_Error = can_get_signal_raw<uint32_t>(buf, 0, 32, true);
        Axis_State = can_get_signal_raw<uint8_t>(buf, 32, 8, true);
        Procedure_Result = can_get_signal_raw<uint8_t>(buf, 40, 8, true);
        Trajectory_Done_Flag = can_get_signal_raw<uint8_t>(buf, 48, 1, true);
    }

    static const uint8_t cmd_id = 0x001;
    static const uint8_t msg_length = 8;
    
    uint32_t Axis_Error = 0;
    uint8_t Axis_State = 0;
    uint8_t Procedure_Result = 0;
    uint8_t Trajectory_Done_Flag = 0;
};

struct Estop_msg_t final {
    constexpr Estop_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Estop_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
    }

    void decode_buf(const uint8_t* buf) {
    }

    static const uint8_t cmd_id = 0x002;
    static const uint8_t msg_length = 0;
    
};

struct Get_Error_msg_t final {
    constexpr Get_Error_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Get_Error_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<uint32_t>(buf, Active_Errors, 0, 32, true);
        can_set_signal_raw<uint32_t>(buf, Disarm_Reason, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Active_Errors = can_get_signal_raw<uint32_t>(buf, 0, 32, true);
        Disarm_Reason = can_get_signal_raw<uint32_t>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x003;
    static const uint8_t msg_length = 8;
    
    uint32_t Active_Errors = 0;
    uint32_t Disarm_Reason = 0;
};

struct Address_msg_t final {
    constexpr Address_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Address_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<uint8_t>(buf, Node_ID, 0, 8, true);
        can_set_signal_raw<uint64_t>(buf, Serial_Number, 8, 48, true);
    }

    void decode_buf(const uint8_t* buf) {
        Node_ID = can_get_signal_raw<uint8_t>(buf, 0, 8, true);
        Serial_Number = can_get_signal_raw<uint64_t>(buf, 8, 48, true);
    }

    static const uint8_t cmd_id = 0x006;
    static const uint8_t msg_length = 8;
    
    uint8_t Node_ID = 0;
    uint64_t Serial_Number = 0;
};

struct Set_Axis_State_msg_t final {
    constexpr Set_Axis_State_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Axis_State_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<uint32_t>(buf, Axis_Requested_State, 0, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Axis_Requested_State = can_get_signal_raw<uint32_t>(buf, 0, 32, true);
    }

    static const uint8_t cmd_id = 0x007;
    static const uint8_t msg_length = 8;
    
    uint32_t Axis_Requested_State = 0;
};

struct Get_Encoder_Estimates_msg_t final {
    constexpr Get_Encoder_Estimates_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Get_Encoder_Estimates_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Pos_Estimate, 0, 32, true);
        can_set_signal_raw<float>(buf, Vel_Estimate, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Pos_Estimate = can_get_signal_raw<float>(buf, 0, 32, true);
        Vel_Estimate = can_get_signal_raw<float>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x009;
    static const uint8_t msg_length = 8;
    
    float Pos_Estimate = 0.0f; // [rev]
    float Vel_Estimate = 0.0f; // [rev/s]
};

struct Set_Controller_Mode_msg_t final {
    constexpr Set_Controller_Mode_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Controller_Mode_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<uint32_t>(buf, Control_Mode, 0, 32, true);
        can_set_signal_raw<uint32_t>(buf, Input_Mode, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Control_Mode = can_get_signal_raw<uint32_t>(buf, 0, 32, true);
        Input_Mode = can_get_signal_raw<uint32_t>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x00B;
    static const uint8_t msg_length = 8;
    
    uint32_t Control_Mode = 0;
    uint32_t Input_Mode = 0;
};

struct Set_Input_Pos_msg_t final {
    constexpr Set_Input_Pos_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Input_Pos_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Input_Pos, 0, 32, true);
        can_set_signal_raw<int16_t>(buf, Vel_FF, 32, 16, true, 0.001f, 0.0f);
        can_set_signal_raw<int16_t>(buf, Torque_FF, 48, 16, true, 0.001f, 0.0f);
    }

    void decode_buf(const uint8_t* buf) {
        Input_Pos = can_get_signal_raw<float>(buf, 0, 32, true);
        Vel_FF = can_get_signal_raw<int16_t>(buf, 32, 16, true, 0.001f, 0.0f);
        Torque_FF = can_get_signal_raw<int16_t>(buf, 48, 16, true, 0.001f, 0.0f);
    }

    static const uint8_t cmd_id = 0x00C;
    static const uint8_t msg_length = 8;
    
    float Input_Pos = 0.0f; // [rev]
    float Vel_FF = 0.0f; // [rev/s]
    float Torque_FF = 0.0f; // [Nm]
};

struct Set_Input_Vel_msg_t final {
    constexpr Set_Input_Vel_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Input_Vel_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Input_Vel, 0, 32, true);
        can_set_signal_raw<float>(buf, Input_Torque_FF, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Input_Vel = can_get_signal_raw<float>(buf, 0, 32, true);
        Input_Torque_FF = can_get_signal_raw<float>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x00D;
    static const uint8_t msg_length = 8;
    
    float Input_Vel = 0.0f; // [rev/s]
    float Input_Torque_FF = 0.0f; // [Nm]
};

struct Set_Input_Torque_msg_t final {
    constexpr Set_Input_Torque_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Input_Torque_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Input_Torque, 0, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Input_Torque = can_get_signal_raw<float>(buf, 0, 32, true);
    }

    static const uint8_t cmd_id = 0x00E;
    static const uint8_t msg_length = 8;
    
    float Input_Torque = 0.0f; // [Nm]
};

struct Set_Limits_msg_t final {
    constexpr Set_Limits_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Limits_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Velocity_Limit, 0, 32, true);
        can_set_signal_raw<float>(buf, Current_Limit, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Velocity_Limit = can_get_signal_raw<float>(buf, 0, 32, true);
        Current_Limit = can_get_signal_raw<float>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x00F;
    static const uint8_t msg_length = 8;
    
    float Velocity_Limit = 0.0f; // [rev/s]
    float Current_Limit = 0.0f; // [A]
};

struct Set_Traj_Vel_Limit_msg_t final {
    constexpr Set_Traj_Vel_Limit_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Traj_Vel_Limit_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Traj_Vel_Limit, 0, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Traj_Vel_Limit = can_get_signal_raw<float>(buf, 0, 32, true);
    }

    static const uint8_t cmd_id = 0x011;
    static const uint8_t msg_length = 8;
    
    float Traj_Vel_Limit = 0.0f; // [rev/s]
};

struct Set_Traj_Accel_Limits_msg_t final {
    constexpr Set_Traj_Accel_Limits_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Traj_Accel_Limits_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Traj_Accel_Limit, 0, 32, true);
        can_set_signal_raw<float>(buf, Traj_Decel_Limit, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Traj_Accel_Limit = can_get_signal_raw<float>(buf, 0, 32, true);
        Traj_Decel_Limit = can_get_signal_raw<float>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x012;
    static const uint8_t msg_length = 8;
    
    float Traj_Accel_Limit = 0.0f; // [rev/s^2]
    float Traj_Decel_Limit = 0.0f; // [rev/s^2]
};

struct Set_Traj_Inertia_msg_t final {
    constexpr Set_Traj_Inertia_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Traj_Inertia_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Traj_Inertia, 0, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Traj_Inertia = can_get_signal_raw<float>(buf, 0, 32, true);
    }

    static const uint8_t cmd_id = 0x013;
    static const uint8_t msg_length = 8;
    
    float Traj_Inertia = 0.0f; // [Nm/(rev/s^2)]
};

struct Get_Iq_msg_t final {
    constexpr Get_Iq_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Get_Iq_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Iq_Setpoint, 0, 32, true);
        can_set_signal_raw<float>(buf, Iq_Measured, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Iq_Setpoint = can_get_signal_raw<float>(buf, 0, 32, true);
        Iq_Measured = can_get_signal_raw<float>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x014;
    static const uint8_t msg_length = 8;
    
    float Iq_Setpoint = 0.0f; // [A]
    float Iq_Measured = 0.0f; // [A]
};

struct Get_Temperature_msg_t final {
    constexpr Get_Temperature_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Get_Temperature_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, FET_Temperature, 0, 32, true);
        can_set_signal_raw<float>(buf, Motor_Temperature, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        FET_Temperature = can_get_signal_raw<float>(buf, 0, 32, true);
        Motor_Temperature = can_get_signal_raw<float>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x015;
    static const uint8_t msg_length = 8;
    
    float FET_Temperature = 0.0f; // [deg C]
    float Motor_Temperature = 0.0f; // [deg C]
};

struct Reboot_msg_t final {
    constexpr Reboot_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Reboot_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<uint8_t>(buf, Action, 0, 8, true);
    }

    void decode_buf(const uint8_t* buf) {
        Action = can_get_signal_raw<uint8_t>(buf, 0, 8, true);
    }

    static const uint8_t cmd_id = 0x016;
    static const uint8_t msg_length = 1;
    
    uint8_t Action = 0;
};

struct Get_Bus_Voltage_Current_msg_t final {
    constexpr Get_Bus_Voltage_Current_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Get_Bus_Voltage_Current_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Bus_Voltage, 0, 32, true);
        can_set_signal_raw<float>(buf, Bus_Current, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Bus_Voltage = can_get_signal_raw<float>(buf, 0, 32, true);
        Bus_Current = can_get_signal_raw<float>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x017;
    static const uint8_t msg_length = 8;
    
    float Bus_Voltage = 0.0f; // [V]
    float Bus_Current = 0.0f; // [A]
};

struct Clear_Errors_msg_t final {
    constexpr Clear_Errors_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Clear_Errors_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<uint8_t>(buf, Identify, 0, 8, true);
    }

    void decode_buf(const uint8_t* buf) {
        Identify = can_get_signal_raw<uint8_t>(buf, 0, 8, true);
    }

    static const uint8_t cmd_id = 0x018;
    static const uint8_t msg_length = 1;
    
    uint8_t Identify = 0;
};

struct Set_Absolute_Position_msg_t final {
    constexpr Set_Absolute_Position_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Absolute_Position_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Position, 0, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Position = can_get_signal_raw<float>(buf, 0, 32, true);
    }

    static const uint8_t cmd_id = 0x019;
    static const uint8_t msg_length = 8;
    
    float Position = 0.0f; // [rev]
};

struct Set_Pos_Gain_msg_t final {
    constexpr Set_Pos_Gain_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Pos_Gain_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Pos_Gain, 0, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Pos_Gain = can_get_signal_raw<float>(buf, 0, 32, true);
    }

    static const uint8_t cmd_id = 0x01A;
    static const uint8_t msg_length = 8;
    
    float Pos_Gain = 0.0f; // [(rev/s) / rev]
};

struct Set_Vel_Gains_msg_t final {
    constexpr Set_Vel_Gains_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Set_Vel_Gains_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Vel_Gain, 0, 32, true);
        can_set_signal_raw<float>(buf, Vel_Integrator_Gain, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Vel_Gain = can_get_signal_raw<float>(buf, 0, 32, true);
        Vel_Integrator_Gain = can_get_signal_raw<float>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x01B;
    static const uint8_t msg_length = 8;
    
    float Vel_Gain = 0.0f; // [Nm / (rev/s)]
    float Vel_Integrator_Gain = 0.0f; // [Nm / rev]
};

struct Get_Torques_msg_t final {
    constexpr Get_Torques_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Get_Torques_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Torque_Target, 0, 32, true);
        can_set_signal_raw<float>(buf, Torque_Estimate, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Torque_Target = can_get_signal_raw<float>(buf, 0, 32, true);
        Torque_Estimate = can_get_signal_raw<float>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x01C;
    static const uint8_t msg_length = 8;
    
    float Torque_Target = 0.0f; // [Nm]
    float Torque_Estimate = 0.0f; // [Nm]
};

struct Get_Powers_msg_t final {
    constexpr Get_Powers_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Get_Powers_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
        can_set_signal_raw<float>(buf, Electrical_Power, 0, 32, true);
        can_set_signal_raw<float>(buf, Mechanical_Power, 32, 32, true);
    }

    void decode_buf(const uint8_t* buf) {
        Electrical_Power = can_get_signal_raw<float>(buf, 0, 32, true);
        Mechanical_Power = can_get_signal_raw<float>(buf, 32, 32, true);
    }

    static const uint8_t cmd_id = 0x01D;
    static const uint8_t msg_length = 8;
    
    float Electrical_Power = 0.0f; // [W]
    float Mechanical_Power = 0.0f; // [W]
};

struct Enter_DFU_Mode_msg_t final {
    constexpr Enter_DFU_Mode_msg_t() = default;

#ifdef ODRIVE_CAN_MSG_TYPE
    constexpr Enter_DFU_Mode_msg_t(const TBoard::TCanIntf::TMsg& msg) {
        decode_msg(msg);
    }

    void encode_msg(TBoard::TCanIntf::TMsg& msg) {
        encode_buf(can_msg_get_payload(msg).data());
    }

    void decode_msg(const TBoard::TCanIntf::TMsg& msg) {
        decode_buf(can_msg_get_payload(msg).data());
    }
#endif

    void encode_buf(uint8_t* buf) const {
    }

    void decode_buf(const uint8_t* buf) {
    }

    static const uint8_t cmd_id = 0x01F;
    static const uint8_t msg_length = 0;
    
};

