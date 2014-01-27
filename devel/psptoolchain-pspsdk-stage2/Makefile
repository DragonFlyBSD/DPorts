# Created by: Tassilo Philipp <tphilipp@potion-studios.com>
# $FreeBSD: devel/psptoolchain-pspsdk-stage2/Makefile 340722 2014-01-22 17:00:46Z mat $

PKGNAMESUFFIX=		-stage2

MAINTAINER=		tphilipp@potion-studios.com
COMMENT=		PlayStation Portable development toolchain ${PORTNAME}

BUILD_DEPENDS=		psp-cpp:${PORTSDIR}/devel/psptoolchain-gcc-stage2 \
			psp-gcc:${PORTSDIR}/devel/psptoolchain-gcc-stage2 \
			psp-gcov:${PORTSDIR}/devel/psptoolchain-gcc-stage2 \
			psp-g++:${PORTSDIR}/devel/psptoolchain-gcc-stage2 \
			psp-ar:${PORTSDIR}/devel/psptoolchain-binutils \
			${LOCALBASE}/psp/lib/libc.a:${PORTSDIR}/devel/psptoolchain-newlib

CONFIGURE_ARGS=		--prefix=${PREFIX} --with-pspdev="${LOCALBASE}"

PLIST=			${.CURDIR}/pkg-plist
MASTERDIR=		${.CURDIR}/../psptoolchain-pspsdk-stage1

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
