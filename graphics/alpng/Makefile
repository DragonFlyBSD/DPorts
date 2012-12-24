# New ports collection makefile for: graphics/alpng
# Date created:		27 Aug 2009
# Whom:			Stas Timokhin <stast@bsdportal.ru>
#
# $FreeBSD: ports/graphics/alpng/Makefile,v 1.5 2012/11/17 05:58:01 svnexp Exp $
#

PORTNAME=	alpng
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}
DISTNAME=	${PORTNAME}13

MAINTAINER=	devel@stasyan.com
COMMENT=	Library for display PNG images in programs

LIB_DEPENDS+=	alleg.42:${PORTSDIR}/devel/allegro

HAS_CONFIGURE=	yes
WRKSRC=		${WRKDIR}
MAKEFILE=	makefile
USE_GMAKE=	yes
CFLAGS+=	-I${LOCALBASE}/include

PLIST_FILES=	include/alpng.h \
		lib/libalpng.a

do-install:
		${INSTALL_DATA} ${WRKSRC}/libalpng.a ${PREFIX}/lib/libalpng.a
		${INSTALL_DATA} ${WRKSRC}/src/alpng.h ${PREFIX}/include/alpng.h

.include <bsd.port.mk>
