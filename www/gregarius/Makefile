# New ports collection makefile for:	gregarius
# Date created:		2006-12-16
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/www/gregarius/Makefile,v 1.5 2012/11/17 06:02:34 svnexp Exp $
#

PORTNAME=	gregarius
PORTVERSION=	0.6.1
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	SF

MAINTAINER=	gslin@gslin.org
COMMENT=	Web-based RSS/RDF/ATOM news aggregator

USE_PHP=	gettext iconv mbstring session xml zlib
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

do-install:
	${MKDIR} ${WWWDIR}
	${CP} -R ${WRKSRC}/ ${WWWDIR}

.include <bsd.port.mk>
