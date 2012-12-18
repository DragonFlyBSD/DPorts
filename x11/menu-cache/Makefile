# New ports collection makefile for:	x11/menu-cache
# Date created:				23 Sept 2010
# Whom:					Kris Moore <kmoore@freebsd.org>
#
# $FreeBSD: ports/x11/menu-cache/Makefile,v 1.11 2012/11/17 06:03:18 svnexp Exp $
#

PORTNAME=	menu-cache
PORTVERSION=	0.3.3
CATEGORIES=	x11
MASTER_SITES=	SF/lxde/menu-cache/menu-cache%20${PORTVERSION}/

MAINTAINER=	kmoore@FreeBSD.org
COMMENT=	The menu-cache portion of LXDE

USE_GNOME=	gnomehack gtk20 pkgconfig
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
USE_GMAKE=	yes
USE_FAM=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
