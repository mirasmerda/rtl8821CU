cmd_/media/usb0/pigrrl/rtl8821CU/hal/hal_mcc.o := gcc -Wp,-MD,/media/usb0/pigrrl/rtl8821CU/hal/.hal_mcc.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/6/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -O2 --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -O1 -Wno-unused-variable -Wno-unused-value -Wno-unused-label -Wno-unused-parameter -Wno-unused-function -Wno-unused -Wno-incompatible-pointer-types -I/media/usb0/pigrrl/rtl8821CU/include -I/media/usb0/pigrrl/rtl8821CU/hal/phydm -I/media/usb0/pigrrl/rtl8821CU/platform -I/media/usb0/pigrrl/rtl8821CU/hal/btc -DCONFIG_RTL8821C -DCONFIG_MP_INCLUDED -DCONFIG_POWER_SAVING -DCONFIG_BT_COEXIST -DCONFIG_EFUSE_CONFIG_FILE -DEFUSE_MAP_PATH=\"/system/etc/wifi/wifi_efuse_8821cu.map\" -DWIFIMAC_PATH=\"/data/wifimac.txt\" -DCONFIG_TRAFFIC_PROTECT -DCONFIG_LOAD_PHY_PARA_FROM_FILE -DREALTEK_CONFIG_PATH=\"\" -DCONFIG_TXPWR_BY_RATE_EN=1 -DCONFIG_TXPWR_LIMIT_EN=0 -DCONFIG_RTW_ADAPTIVITY_EN=0 -DCONFIG_RTW_ADAPTIVITY_MODE=0 -DCONFIG_BR_EXT '-DCONFIG_BR_EXT_BRNAME="'br0'"' -DCONFIG_RTW_NAPI -DCONFIG_RTW_GRO -DCONFIG_DISABLE_PHYDM_DEBUG_FUNCTION -DDM_ODM_SUPPORT_TYPE=0x04 -DCONFIG_LITTLE_ENDIAN -DCONFIG_IOCTL_CFG80211 -DRTW_USE_CFG80211_STA_EVENT  -DMODULE  -DKBUILD_BASENAME='"hal_mcc"'  -DKBUILD_MODNAME='"8821cu"' -c -o /media/usb0/pigrrl/rtl8821CU/hal/.tmp_hal_mcc.o /media/usb0/pigrrl/rtl8821CU/hal/hal_mcc.c

source_/media/usb0/pigrrl/rtl8821CU/hal/hal_mcc.o := /media/usb0/pigrrl/rtl8821CU/hal/hal_mcc.c

deps_/media/usb0/pigrrl/rtl8821CU/hal/hal_mcc.o := \
    $(wildcard include/config/mcc/mode.h) \
    $(wildcard include/config/mcc/mode/debug.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \

/media/usb0/pigrrl/rtl8821CU/hal/hal_mcc.o: $(deps_/media/usb0/pigrrl/rtl8821CU/hal/hal_mcc.o)

$(deps_/media/usb0/pigrrl/rtl8821CU/hal/hal_mcc.o):
