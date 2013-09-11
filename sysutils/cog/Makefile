# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: sysutils/cog/Makefile 326137 2013-09-03 12:13:23Z bapt $

PORTNAME=	cog
PORTVERSION=	0.8.0
PORTREVISION=	12
CATEGORIES=	sysutils gnome
MASTER_SITES=	http://www.krakoa.dk/progs/cog/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	A program for editing advanced GNOME settings in an easy way

USE_XORG=	x11
USE_GNOME=	gnomeprefix gnomehack libgnomeui
USES=		gettext gmake pkgconfig
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_SUB=	VERSION=${PORTVERSION}

.include <bsd.port.mk>
