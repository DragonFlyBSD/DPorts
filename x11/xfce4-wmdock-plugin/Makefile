# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: x11/xfce4-wmdock-plugin/Makefile 331177 2013-10-21 19:40:09Z olivierd $

PORTNAME=	xfce4-wmdock-plugin
PORTVERSION=	0.6.0
CATEGORIES=	x11 xfce
MASTER_SITES=	http://www.ibh.de/~ellguth/develop/
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	WMdock plugin for Xfce

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USES=		gettext pkgconfig gmake
INSTALLS_ICONS=	yes
USE_GNOME=	gtk20 intltool intlhack libwnck
USE_XFCE=	configenv libgui libutil panel
INSTALLS_ICONS=	yes
USE_XORG=	x11

.include <bsd.port.mk>
