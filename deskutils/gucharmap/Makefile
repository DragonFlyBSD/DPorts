# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: deskutils/gucharmap/Makefile 336190 2013-12-11 18:28:10Z bapt $
#   $MCom: ports/deskutils/gucharmap/Makefile,v 1.75 2010/11/13 13:05:08 kwm Exp $

PORTNAME=	gucharmap
PORTVERSION=	2.32.1
PORTREVISION=	1
CATEGORIES=	deskutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	A Unicode/ISO10646 character map and font viewer

LIB_DEPENDS=	librarian.so:${PORTSDIR}/textproc/rarian

USE_BZIP2=	yes
USES=		gettext pkgconfig
USE_GMAKE=	yes
USE_GNOME=	gnomeprefix intlhack gnomehack gtk20 gnomedocutils gconf2
GNU_CONFIGURE=	yes
INSTALLS_OMF=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

GCONF_SCHEMAS=	gucharmap.schemas

NO_STAGE=	yes
.include <bsd.port.mk>
