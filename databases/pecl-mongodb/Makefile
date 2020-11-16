# $FreeBSD$

PORTNAME=	mongodb
PORTVERSION=	1.8.1
CATEGORIES=	databases pear

MAINTAINER=	pi@FreeBSD.org
COMMENT=	PECL classes for MongoDB

LICENSE=	APACHE20

USES=		php:pecl ssl
USE_PHP=	spl:build
CFLAGS+=	-I${LOCALBASE}/include
IGNORE_WITH_PHP= 80

.include <bsd.port.mk>
