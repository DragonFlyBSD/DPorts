# New ports collection makefile for:	visitors
# Date created:				May 13 2004
# Whom:					Florent Thoumie <flz@xbsd.org>
#
# $FreeBSD: ports/www/visitors/Makefile,v 1.14 2012/11/17 06:03:10 svnexp Exp $
#

PORTNAME=	visitors
PORTVERSION=	0.7.0
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://www.hping.org/visitors/
DISTNAME=	${PORTNAME}-0.7

MAINTAINER=	flz@FreeBSD.org
COMMENT=	Very fast and easy to use web log analyzer

WRKSRC=		${WRKDIR}/${PORTNAME}_0.7

PLIST_FILES=	bin/visitors
PORTDOCS=	doc.html

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/visitors ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
