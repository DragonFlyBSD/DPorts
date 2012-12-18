# New ports collection makefile for:	uebimiau
# Date created: 			13 August 2003
# Whom: 				Francisco Gomez <francisco@gomezmarin.com>
#
# $FreeBSD: ports/mail/uebimiau/Makefile,v 1.12 2012/11/17 05:59:17 svnexp Exp $
#

PORTNAME=	uebimiau
PORTVERSION=	2.7.11
CATEGORIES=	mail www
MASTER_SITES=	http://www.uebimiau.org/downloads/
DISTNAME=	${PORTNAME}-${PORTVERSION}-any

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	UebiMiau is a simple yet efficient WebMail written in PHP

WRKSRC=		${WRKDIR}/webmail

USE_ZIP=	yes
USE_PHP=	pcre
WANT_PHP_MOD=	yes
NO_BUILD=	yes
SUB_FILES=	pkg-message

do-install:
	${MKDIR} ${PREFIX}/www/data/${PORTNAME}
	${CP} -vR ${WRKSRC}/* ${PREFIX}/www/data/${PORTNAME}
	${CHOWN} -R www:www ${PREFIX}/www/data/${PORTNAME}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
