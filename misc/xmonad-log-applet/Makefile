# Created by: Alexander Kojevnikov <alexander@kojevnikov.com>
# $FreeBSD: misc/xmonad-log-applet/Makefile 326513 2013-09-06 15:28:27Z bapt $

PORTNAME=	xmonad-log-applet
PORTVERSION=	2.0.0
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	http://cloud.github.com/downloads/alexkay/${PORTNAME}/

MAINTAINER=	alexander@kojevnikov.com
COMMENT=	An applet that will display Xmonad log information

INSTALLS_ICONS=	yes
USES=		gmake pkgconfig
USE_GNOME=	gnomeprefix gnomehack gnomepanel
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-panel=gnome2

.include <bsd.port.mk>
