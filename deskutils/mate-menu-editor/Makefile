
# Created by: FreeBSD GNOME Team
# $FreeBSD: deskutils/mate-menu-editor/Makefile 334661 2013-11-23 11:39:07Z kwm $

PORTNAME=	mate-menu-editor
PORTVERSION=	1.6.0
CATEGORIES=	deskutils mate
MASTER_SITES=	MATE
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Editor for the freedesktop.org menu specification

PORTSCOUT=	limitw:1,even

USES=		gettext gmake pathfix pkgconfig
USE_XZ=		yes
USE_MATE=	autogen common:build intlhack menus
USE_GNOME=	pygobject pygtk2
USE_PYTHON=	yes
USE_AUTOTOOLS=	aclocal:env autoconf:env automake:env
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
PATHFIX_MAKEFILEIN=	Makefile.*

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' \
	    ${WRKSRC}/Mozo/util.py

.include <bsd.port.mk>
