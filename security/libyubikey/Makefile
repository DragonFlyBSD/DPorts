# $FreeBSD: ports/security/libyubikey/Makefile,v 1.1 2013/01/26 01:44:50 svnexp Exp $

PORTNAME=	libyubikey
PORTVERSION=	1.9
CATEGORIES=	security devel
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	matt@mjslabs.com
COMMENT=	Library for decrypting and parsing YubiKey One-Time Passwords

LICENSE=	BSD

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

PLIST_FILES=	bin/modhex \
		bin/ykgenerate \
		bin/ykparse \
		include/yubikey.h \
		lib/libyubikey.a \
		lib/libyubikey.la \
		lib/libyubikey.so \
		lib/libyubikey.so.1

PROJECTHOST=	yubico-c

MAKE_JOBS_UNSAFE=yes

regression-test: build
	@(cd ${WRKSRC}; ${MAKE} check)

.include <bsd.port.mk>
