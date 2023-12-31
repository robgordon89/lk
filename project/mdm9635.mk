# top level project rules for the mdm9635 project
#
LOCAL_DIR := $(GET_LOCAL_DIR)

TARGET := mdm9635

MODULES += app/aboot

DEBUG := 1

#DEFINES += WITH_DEBUG_DCC=1
DEFINES += WITH_DEBUG_UART=1
#DEFINES += WITH_DEBUG_FBCON=1
DEFINES += DEVICE_TREE=1

#disable Thumb mode for the codesourcery/arm-2011.03 toolchain
ENABLE_THUMB := false
