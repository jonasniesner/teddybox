#pragma once

#define LIS3DH_ADDR 0x32

#define LIS3DH_TEMP_CFG_REG 0x1F 
#define LIS3DH_CTRL_REG1 0x20    
#define LIS3DH_CTRL_REG2 0x21    
#define LIS3DH_CTRL_REG3 0x22    
#define LIS3DH_CTRL_REG4 0x23    
#define LIS3DH_CTRL_REG5 0x24    
#define LIS3DH_CTRL_REG6 0x25    
#define LIS3DH_OUT_X_L_INCR 0xA8
#define LIS3DH_OUT_X_L 0x28
#define LIS3DH_OUT_X_H 0x29
#define LIS3DH_OUT_Y_L 0x2A
#define LIS3DH_OUT_Y_H 0x2B
#define LIS3DH_OUT_Z_L 0x2C
#define LIS3DH_OUT_Z_H 0x2D
#define LIS3DH_FIFO_CTRL_REG 0x2E
#define LIS3DH_FIFO_SRC_REG 0x2F
#define LIS3DH_INT1_CFG 0x30
#define LIS3DH_INT1_SRC 0x31
#define LIS3DH_INT1_THS 0x32
#define LIS3DH_INT1_DURATION 0x33
#define LIS3DH_CLICK_CFG 0x38
#define LIS3DH_CLICK_SRC 0x39
#define LIS3DH_CLICK_THS 0x3A
#define LIS3DH_TIME_LIMIT 0x3B
#define LIS3DH_TIME_LATENCY 0x3C
#define LIS3DH_TIME_WINDOW 0x3D
#define LIS3DH_WHO_AM_I 0x0F

// Bitfield values
#define LIS3DH_X_LOW 0x01
#define LIS3DH_X_HIGH 0x02
#define LIS3DH_Y_LOW 0x04
#define LIS3DH_Y_HIGH 0x08
#define LIS3DH_Z_LOW 0x10
#define LIS3DH_Z_HIGH 0x20
#define LIS3DH_SIX_D 0x40
#define LIS3DH_AOI 0x80

// High Pass Filter values
#define LIS3DH_HPF_DISABLED 0x00
#define LIS3DH_HPF_AOI_INT1 0x01
#define LIS3DH_HPF_AOI_INT2 0x02
#define LIS3DH_HPF_CLICK 0x04
#define LIS3DH_HPF_FDS 0x08

#define LIS3DH_HPF_CUTOFF1 0x00
#define LIS3DH_HPF_CUTOFF2 0x10
#define LIS3DH_HPF_CUTOFF3 0x20
#define LIS3DH_HPF_CUTOFF4 0x30

#define LIS3DH_HPF_DEFAULT_MODE 0x00
#define LIS3DH_HPF_REFERENCE_SIGNAL 0x40
#define LIS3DH_HPF_NORMAL_MODE 0x80
#define LIS3DH_HPF_AUTORESET_ON_INTERRUPT 0xC0

#define LIS3DH_FIFO_BYPASS_MODE 0x00
#define LIS3DH_FIFO_FIFO_MODE 0x40
#define LIS3DH_FIFO_STREAM_MODE 0x80
#define LIS3DH_FIFO_STREAM_TO_FIFO_MODE 0xC0

// Click Detection values
#define LIS3DH_SINGLE_CLICK 0x15
#define LIS3DH_DOUBLE_CLICK 0x2A

#define LIS3DH_MODE_NORMAL 0x00
#define LIS3DH_MODE_LOW_POWER 0x01
#define LIS3DH_MODE_HIGH_RESOLUTION 0x02

#define LIS3DH_ADC1 0x01
#define LIS3DH_ADC2 0x02
#define LIS3DH_ADC3 0x03