# $FreeBSD: devel/arm-eabi-gcc/Makefile 340722 2014-01-22 17:00:46Z mat $

MAINTAINER=	ports@FreeBSD.org

TGTARCH=	arm
TGTABI=		eabi
PLIST=		${.CURDIR}/pkg-plist

BUILD_DEPENDS=	arm-eabi-as:${PORTSDIR}/devel/arm-eabi-binutils
RUN_DEPENDS=	arm-eabi-as:${PORTSDIR}/devel/arm-eabi-binutils

MASTERDIR=	${.CURDIR}/../cross-gcc
NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
