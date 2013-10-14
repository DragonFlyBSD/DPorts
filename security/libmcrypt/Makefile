# Created by: nsayer@FreeBSD.org
# $FreeBSD: security/libmcrypt/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	libmcrypt
PORTVERSION=	2.5.8
CATEGORIES=	security
MASTER_SITES=	SF/mcrypt/Libmcrypt/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multi-cipher cryptographic library (used in PHP)

USE_AUTOTOOLS=	libtool
CONFIGURE_ARGS=	--enable-static
USE_LDCONFIG=	yes

MAN3=		mcrypt.3

NO_STAGE=	yes
.include <bsd.port.mk>
