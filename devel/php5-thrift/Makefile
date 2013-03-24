# Created by: Ilya Bakulin <webmaster@kibab.com>
# $FreeBSD: ports/devel/php5-thrift/Makefile,v 1.9 2013/02/26 17:11:46 svnexp Exp $
#

PORTNAME=	thrift
PORTVERSION=	${THRIFT_PORTVERSION}
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	php5-
DISTFILES=	# empty

MAINTAINER=	webmaster@kibab.com
COMMENT=	PHP interface to Thrift

FETCH_DEPENDS+=	${NONEXISTENT}:${PORTSDIR}/devel/thrift:extract

USE_PHP=	yes
USE_PHPIZE=	yes
USE_PHPEXT=	yes
PHP_MODNAME=	thrift_protocol

WRKSRC=		${WRKDIR}/php/src/ext/thrift_protocol

post-extract:
	${LN} -sfh \
		`${MAKE} -C ${PORTSDIR}/devel/thrift -V WRKSRC`/lib/php \
		${WRKDIR}

.include "../thrift/bsd.thrift.mk"
.include <bsd.port.mk>
