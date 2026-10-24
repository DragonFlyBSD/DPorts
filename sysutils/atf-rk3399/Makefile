WWW=		https://github.com/ARM-software/arm-trusted-firmware
MASTERDIR=	${.CURDIR}/../atf-master

PLAT=	rk3399
BL31=	bl31/bl31.elf

# ATF build a firmware that runs on the Cortex-M0
BUILD_DEPENDS+=	arm-none-eabi-gcc:devel/arm-none-eabi-gcc

MAKE_ARGS= CC=aarch64-none-elf-gcc CPP=aarch64-none-elf-gcc
.include "${MASTERDIR}/Makefile"
