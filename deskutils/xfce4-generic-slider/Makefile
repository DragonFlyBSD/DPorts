# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: deskutils/xfce4-generic-slider/Makefile 313649 2013-03-08 14:00:30Z ehaupt $

PORTNAME=	xfce4-generic-slider
PORTVERSION=	0.0.20100827
PORTREVISION=	3
CATEGORIES=	deskutils
MASTER_SITES=	CRITICAL/

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Slider plugin to adjust and/or monitor any numeric variable

LICENSE=	GPLv3

USE_XFCE=	panel libutil libgui
USE_PKGCONFIG=	build

CFLAGS+=	`pkg-config --cflags libxfce4panel-1.0 libxfcegui4-1.0`
LDFLAGS+=	`pkg-config --libs libxfce4panel-1.0 libxfcegui4-1.0`

post-patch:
	@${REINPLACE_CMD} -e \
		"s|@PLUGINDIR@|${PREFIX}/lib/xfce4/xfce4/panel-plugins|" \
			${WRKSRC}/generic-slider.desktop

do-build:
	${CC} ${CFLAGS} -c ${WRKSRC}/generic-slider.c \
		-o ${WRKSRC}/generic-slider.o
	${CC} ${LDFLAGS} ${WRKSRC}/generic-slider.o \
		-o ${WRKSRC}/xfce4-generic-slider-plugin

do-install:
	${MKDIR} ${PREFIX}/share/xfce4/panel-plugins
	${MKDIR} ${PREFIX}/lib/xfce4/xfce4/panel-plugins
	${INSTALL_DATA} ${WRKSRC}/generic-slider.desktop \
		${PREFIX}/share/xfce4/panel-plugins
	${INSTALL_PROGRAM} ${WRKSRC}/xfce4-generic-slider-plugin \
		${PREFIX}/lib/xfce4/xfce4/panel-plugins

.include <bsd.port.mk>
