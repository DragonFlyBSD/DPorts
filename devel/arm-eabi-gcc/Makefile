# $FreeBSD: devel/arm-eabi-gcc/Makefile 323837 2013-07-28 16:45:59Z kientzle $

MAINTAINER=	ports@FreeBSD.org

TGTARCH=	arm
TGTABI=		eabi
PLIST=		${.CURDIR}/pkg-plist

BUILD_DEPENDS=	arm-eabi-as:${PORTSDIR}/devel/arm-eabi-binutils
RUN_DEPENDS=	arm-eabi-as:${PORTSDIR}/devel/arm-eabi-binutils

MASTERDIR=	${.CURDIR}/../cross-gcc
.include "${MASTERDIR}/Makefile"
