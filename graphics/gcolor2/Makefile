# Created by: Piotr Smyrak, piotr.smyrak@heron.pl
# $FreeBSD: graphics/gcolor2/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	gcolor2
PORTVERSION=	0.4
PORTREVISION=	9
CATEGORIES=	graphics gnome
MASTER_SITES=	SF

MAINTAINER=	ps.ports@smyrak.com
COMMENT=	A simple GTK+ 2.0 color selector

USES=		pkgconfig
USE_GNOME=	gtk20 gnomeprefix
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

SUB_FILES=	gcolor2.desktop

NO_STAGE=	yes
post-install:
	${MKDIR} ${PREFIX}/share/applications
	${INSTALL_DATA} ${WRKDIR}/gcolor2.desktop ${PREFIX}/share/applications

.include <bsd.port.mk>
