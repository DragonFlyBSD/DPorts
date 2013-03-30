# Created by: Michael Johnson <ahze@ahze.net>
# $FreeBSD: graphics/glitz/Makefile 314640 2013-03-19 13:04:30Z eadler $
#   $MCom: ports/graphics/glitz/Makefile,v 1.8 2006/09/10 00:51:10 mezz Exp $

PORTNAME=	glitz
PORTVERSION=	0.5.6
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	http://cairographics.org/snapshots/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	OpenGL image compositing library

USE_GL=		yes
USE_XORG=	xt
USES=	pathfix
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

CPPFLAGS+=	${PTHREAD_CFLAGS}
LDFLAGS+=	${PTHREAD_LIBS}

.include <bsd.port.mk>
