# New ports collection makefile for: psptoolchain-gcc-stage2
# Date created:        15 February 2009
# Whom:                Tassilo Philipp <tphilipp@potion-studios.com>
#
# $FreeBSD: ports/devel/psptoolchain-gcc-stage2/Makefile,v 1.4 2012/11/17 05:56:43 svnexp Exp $
#

PKGNAMESUFFIX=		-stage2

MAINTAINER=		tphilipp@potion-studios.com

BUILD_DEPENDS=		${LOCALBASE}/psp/lib/libc.a:${PORTSDIR}/devel/psptoolchain-newlib

MAKE_ENV=		CFLAGS_FOR_TARGET="-G0" PATH=${PREFIX}/bin:${PATH}
CONFIGURE_ARGS=		--prefix=${PREFIX} \
			--target="psp" \
			--enable-languages="c,c++" \
			--enable-lto \
			--with-newlib \
			--with-gmp=${LOCALBASE} \
			--with-mpfr \
			--disable-libssp \
			--disable-nls \
			--enable-cxx-flags="-G0" \
			--with-ld=${LOCALBASE}/bin/psp-ld \
			--with-as=${LOCALBASE}/bin/psp-as \
			--mandir=${PREFIX}/man

MAN1=			psp-g++.1

PLIST=			${.CURDIR}/pkg-plist
MASTERDIR=		${.CURDIR}/../psptoolchain-gcc-stage1

.include "${MASTERDIR}/Makefile"
