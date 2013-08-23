# Created by: Phillip Neumann <pneumann@gmail.com>
# $FreeBSD: x11-themes/gtk-murrine-engine/Makefile 324744 2013-08-14 22:35:50Z ak $

PORTNAME=	murrine
PORTVERSION=	0.98.2
CATEGORIES=	x11-themes
MASTER_SITES=	GNOME
PKGNAMEPREFIX=	gtk-
PKGNAMESUFFIX=	-engine

MAINTAINER=	pneumann@gmail.com
COMMENT=	Murrine GTK+ 2.x cairo based engine

LIB_DEPENDS=	pixman-1:${PORTSDIR}/x11/pixman

USE_XZ=	yes
USE_GMAKE=	yes
USE_GNOME=	gtk20 intltool intlhack
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES=	pkgconfig

OPTIONS_DEFINE=	ANIMATION
ANIMATION_DESC=	Animation support

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MANIMATION} 
CONFIGURE_ARGS+=--enable-animation
.else
CONFIGURE_ARGS+=--disable-animation
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|glib/gtimer.h|glib.h|g' \
		${WRKSRC}/src/animation.c

.include <bsd.port.mk>
