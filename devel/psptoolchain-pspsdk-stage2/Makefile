# New ports collection makefile for: psptoolchain-pspsdk-stage2
# Date created:        7 August 2009
# Whom:                Tassilo Philipp <tphilipp@potion-studios.com>
#
# $FreeBSD: ports/devel/psptoolchain-pspsdk-stage2/Makefile,v 1.3 2012/11/17 05:56:43 svnexp Exp $
#

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

.include "${MASTERDIR}/Makefile"
