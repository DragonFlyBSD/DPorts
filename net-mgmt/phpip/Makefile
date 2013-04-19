# New ports collection makefile for:	phpip
# Date created:		2006-10-28
# Whom:			Babak Farrokhi <babak@farrokhi.net>
#
# $FreeBSD: net-mgmt/phpip/Makefile 300897 2012-07-14 14:29:18Z beat $
#

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
USE_DOS2UNIX=	yes
WANT_PHP_WEB=	yes

PHPIP?=		www/phpip
PLIST_SUB+=	PHPIP=${PHPIP}

do-install:
	@${MKDIR} ${PREFIX}/${PHPIP}
	@${CP} -R ${WRKSRC}/ ${PREFIX}/${PHPIP}
	@${CHOWN} -R ${WWWOWN}:${WWWGRP} ${PREFIX}/${PHPIP}
	@${CHMOD} -R 755 ${PREFIX}/${PHPIP}

.include <bsd.port.mk>
