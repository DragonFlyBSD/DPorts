# Created by: Rodrigo Osorio <rodrigo@FreeBSD.org>
# $FreeBSD: textproc/libmrss-php/Makefile 341704 2014-01-29 09:17:41Z rodrigo $

PORTNAME=	libmrss
PORTVERSION=	0.19.2
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://www.autistici.org/bakunin/libmrss/
PKGNAMESUFFIX=	-php

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	PHP library for parsing, writing, and creating RSS

LIB_DEPENDS=	mrss:${PORTSDIR}/textproc/libmrss

GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

USE_LDCONFIG=	yes

USE_PHP=	yes
USE_PHPIZE=	yes
USE_PHP_BUILD=	yes
USE_AUTOTOOLS+=	autoconf:env
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/phpmrss

PLIST_FILES=	lib/php/${PHP_EXT_DIR}/mrss.so
PLIST_DIRSTRY=	lib/php/${PHP_EXT_DIR} \
		lib/php

NO_STAGE=	yes
.include <bsd.port.mk>
