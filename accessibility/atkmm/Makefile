# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: accessibility/atkmm/Makefile 324744 2013-08-14 22:35:50Z ak $
#   $MCom: ports/accessibility/atkmm/Makefile,v 1.12 2012/09/01 23:02:08 mezz Exp $

PORTNAME=	atkmm
PORTVERSION=	2.22.6
CATEGORIES=	accessibility gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	C++ wrapper for ATK API library

USES=		pathfix pkgconfig
USE_XZ=		yes
USE_LDCONFIG=	yes
USE_GMAKE=	yes
USE_GNOME=	atk glibmm
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--disable-documentation

.include <bsd.port.mk>
