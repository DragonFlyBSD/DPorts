# New ports collection makefile for:	gcolor
# Date created:		20 Feb 2000
# Whom:			Will Andrews <andrews@technologist.com>
#
# $FreeBSD: ports/graphics/gcolor/Makefile,v 1.24 2012/11/17 05:58:06 svnexp Exp $
#

PORTNAME=	gcolor
PORTVERSION=	0.4
PORTREVISION=	5
CATEGORIES=	graphics x11
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK-based color picker

PLIST_FILES=	bin/gcolor
USE_GNOME=	gtk12
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

pre-patch:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g ; \
		 s|DATADIRNAME=lib|DATADIRNAME=share|g' ${WRKSRC}/configure

.include <bsd.port.mk>
