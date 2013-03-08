# New ports collection makefile for: psptoolchain
# Date created:        26 February 2009
# Whom:                Tassilo Philipp <tphilipp@potion-studios.com>
#
# $FreeBSD: ports/devel/psptoolchain/Makefile,v 1.3 2012/11/17 05:56:43 svnexp Exp $
#

PORTNAME=		psptoolchain
PORTVERSION=		20111215
CATEGORIES=		devel
MASTER_SITES=		# none
DISTFILES=		# none

MAINTAINER=		tphilipp@potion-studios.com
COMMENT=		PlayStation Portable development toolchain meta port

RUN_DEPENDS=		psp-gdb:${PORTSDIR}/devel/psptoolchain-gdb \
			psp-gcc:${PORTSDIR}/devel/psptoolchain-gcc-stage2 \
			psp-g++:${PORTSDIR}/devel/psptoolchain-gcc-stage2 \
			psp-ar:${PORTSDIR}/devel/psptoolchain-binutils \
			psp-as:${PORTSDIR}/devel/psptoolchain-binutils \
			psp-c++filt:${PORTSDIR}/devel/psptoolchain-binutils \
			psp-ld:${PORTSDIR}/devel/psptoolchain-binutils \
			psp-nm:${PORTSDIR}/devel/psptoolchain-binutils \
			psp-objcopy:${PORTSDIR}/devel/psptoolchain-binutils \
			psp-objdump:${PORTSDIR}/devel/psptoolchain-binutils \
			psp-ranlib:${PORTSDIR}/devel/psptoolchain-binutils \
			psp-readelf:${PORTSDIR}/devel/psptoolchain-binutils \
			psp-size:${PORTSDIR}/devel/psptoolchain-binutils \
			psp-strings:${PORTSDIR}/devel/psptoolchain-binutils \
			psp-strip:${PORTSDIR}/devel/psptoolchain-binutils

NO_WRKSUBDIR=		YES
NO_BUILD=		YES
NO_FETCH=		YES

do-install:

.include <bsd.port.mk>
