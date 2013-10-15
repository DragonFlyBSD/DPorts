# $FreeBSD: devel/arm-eabi-gcc/Makefile 327722 2013-09-20 17:03:26Z bapt $

MAINTAINER=	ports@FreeBSD.org

TGTARCH=	arm
TGTABI=		eabi
PLIST=		${.CURDIR}/pkg-plist

BUILD_DEPENDS=	arm-eabi-as:${PORTSDIR}/devel/arm-eabi-binutils
RUN_DEPENDS=	arm-eabi-as:${PORTSDIR}/devel/arm-eabi-binutils

MASTERDIR=	${.CURDIR}/../cross-gcc
NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
