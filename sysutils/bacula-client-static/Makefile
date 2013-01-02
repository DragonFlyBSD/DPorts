# $FreeBSD: ports/sysutils/bacula-client-static/Makefile,v 1.1 2012/12/16 16:36:39 svnexp Exp $

PORTNAME=	bacula
PKGNAMESUFFIX=	-client-static

COMMENT=	Network backup solution (static client)

MASTERDIR=	${.CURDIR}/../../sysutils/bacula-server

OPTIONS_DEFINE=	NLS OPENSSL
OPTIONS_DEFAULT=NLS OPENSSL

CONFIGURE_ARGS+=	--enable-client-only \
			--enable-static-fd \
			--enable-static-cons \
			--disable-libtool \
			--disable-build-dird \
			--disable-build-stored

.include "${MASTERDIR}/Makefile"
