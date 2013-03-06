# Created by: Benedikt Niessen <ports@niessen.ch>
# $FreeBSD: databases/php5-redis/Makefile 313145 2013-03-01 10:51:49Z scheidell $
#

PORTNAME=	redis
PORTVERSION=	2.2.2
CATEGORIES=	databases
MASTER_SITES=	https://github.com/nicolasff/phpredis/tarball/${PORTVERSION}/
PKGNAMEPREFIX=	php5-
DISTNAME=	nicolasff-phpredis-${PORTVERSION}-0-g${GITVERSION}

MAINTAINER=	m.tsatsenko@gmail.com
COMMENT=	PHP5-Extension for Redis

LICENSE=	PHP301

GITVERSION=	4197a7f
FETCH_ARGS=	-pRr
WRKSRC=		${WRKDIR}/nicolasff-phpredis-4197a7f

USE_PHP=	session
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes
DEFAULT_PHP_VER=5

PHP_MODNAME=	redis

OPTIONS_DEFINE=	IGBINARY
IGBINARY_DESC=	Build with Igbinary serializer

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MIGBINARY}
USE_PHP+=	igbinary
CONFIURE_ARGS+=	--enable-redis-igbinary
.else
CONFIURE_ARGS+=	--disable-redis-igbinary
.endif

.include <bsd.port.mk>
