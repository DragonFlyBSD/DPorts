# New ports collection makefile for:	ppsei
# Date created:		2011-05-19
# Whom:			Romain Tartiere <romain@FreeBSD.org>
#
# $FreeBSD: ports/graphics/ppsei/Makefile,v 1.3 2012/11/17 05:58:19 svnexp Exp $
#

PORTNAME=	ppsei
PORTVERSION=	0.3
CATEGORIES=	graphics
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}-${PORTVERSION}.src
EXTRACT_SUFX=	.tgz

MAINTAINER=	romain@FreeBSD.org
COMMENT=	PowerPoint images extractor

PLIST_FILES=	bin/${PORTNAME}
WRKSRC=		${WRKDIR}/${PORTNAME}

do-build:
	@(cd ${WRKSRC} && ${CC} ${CFLAGS} -o ${PORTNAME} ${PORTNAME}.c)

do-install:
	@(cd ${WRKSRC} && ${INSTALL_PROGRAM} ${PORTNAME} ${PREFIX}/bin)

.include <bsd.port.mk>
