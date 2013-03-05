# $FreeBSD: security/libsodium/Makefile 313112 2013-02-28 16:45:32Z miwi $

PORTNAME=	libsodium
PORTVERSION=	0.3
CATEGORIES=	security
MASTER_SITES=	http://download.dnscrypt.org/libsodium/releases/

MAINTAINER=	csosstudy@gmail.com
COMMENT=	Library for build higher-level cryptographic tools

LICENSE=	ISCL

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

post-build:
	cd ${WRKSRC} && ${MAKE} check

.include <bsd.port.mk>
