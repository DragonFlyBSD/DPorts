# Created by: Babak Farrokhi <babak@farrokhi.net>
# $FreeBSD: net-mgmt/phpip/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	phpip
PORTVERSION=	${SNAPSHOT}
PORTREVISION=	1
CATEGORIES=	net-mgmt www
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/4.3.2%20-%20No%20Upgrade%20Support
DISTNAME=	${PORTNAME}-4.3.2-build-${SNAPSHOT}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A complete IPv4 IPAM (IP address management) suite

SNAPSHOT=	200611081420
NO_BUILD=	yes
USE_PHP=	mysql
USES=		dos2unix
WANT_PHP_WEB=	yes

PHPIP?=		www/phpip
PLIST_SUB+=	PHPIP=${PHPIP}

NO_STAGE=	yes
do-install:
	@${MKDIR} ${PREFIX}/${PHPIP}
	@${CP} -R ${WRKSRC}/ ${PREFIX}/${PHPIP}
	@${CHOWN} -R ${WWWOWN}:${WWWGRP} ${PREFIX}/${PHPIP}
	@${CHMOD} -R 755 ${PREFIX}/${PHPIP}

.include <bsd.port.mk>
