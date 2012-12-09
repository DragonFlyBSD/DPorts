# New ports collection makefile for:	poppler-data
# Date created:		2006-09-30
# Whom:			Michael Johnson <ahze@FreeBSD.org>
#
# $FreeBSD: ports/graphics/poppler-data/Makefile,v 1.10 2012/11/17 05:58:19 svnexp Exp $
#   $MCom: ports/graphics/poppler-data/Makefile,v 1.5 2010/11/17 15:12:27 kwm Exp $
#

PORTNAME=	poppler-data
PORTVERSION=	0.4.5
CATEGORIES=	graphics
MASTER_SITES=	http://poppler.freedesktop.org/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Poppler encoding data

NO_BUILD=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|' ${WRKSRC}/Makefile

.include <bsd.port.mk>
