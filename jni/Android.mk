LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE    := template
LOCAL_SRC_FILES := Main.cpp
LOCAL_LDLIBS    := -L$(LOCAL_PATH)/$(TARGET_ARCH_ABI) -llog -ldl -lsubstrate -lminecraftpe
TARGET_NO_UNDEFINED_LDFLAGS :=
include $(BUILD_SHARED_LIBRARY)
