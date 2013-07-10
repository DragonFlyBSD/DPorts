# Created by: Kris Moore <kmoore@freebsd.org>
# $FreeBSD: x11/menu-cache/Makefile 322225 2013-07-03 12:38:31Z wg $

PORTNAME=	menu-cache
PORTVERSION=	0.4.1
PORTREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	SF/lxde/menu-cache/menu-cache%20${PORTVERSION}/

MAINTAINER=	nemysis@gmx.ch
COMMENT=	The menu-cache portion of LXDE

USES=		pkgconfig
USE_GNOME=	gnomehack glib20
USE_AUTOTOOLS=	libtool
USE_GMAKE=	yes
USE_LDCONFIG=	yes
USE_FAM=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
