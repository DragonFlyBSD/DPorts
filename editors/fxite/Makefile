# Created by: gahr
# $FreeBSD: ports/editors/fxite/Makefile,v 1.16 2012/11/27 11:24:15 svnexp Exp $

PORTNAME=	fxite
PORTVERSION=	0.9
CATEGORIES=	editors
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	An advanced cross-platform text editor

LIB_DEPENDS=	FOX-1.6:${PORTSDIR}/x11-toolkits/fox16

USE_GETTEXT=	yes
USE_LUA=	yes
USE_GNOME=	pkgconfig
GNU_CONFIGURE=	yes
CXXFLAGS+=	-g -O0 -fPIC
LDFLAGS+=	-L${LOCALBASE}/lib -lintl -lX11
CONFIGURE_ARGS+=--with-system-lua \
		--with-lua-pkg=lua-${LUA_VER}

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 800067
LIB_DEPENDS+=	getline.1:${PORTSDIR}/devel/libgetline
LDFLAGS+=	-lgetline
.endif

PLIST_FILES=	bin/fxite \
		share/pixmaps/fxite.xpm \
		share/applications/fxite.desktop

post-patch:
	${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
	   ${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.post.mk>
