# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: x11-clocks/xfce4-timer-plugin/Makefile 317909 2013-05-11 19:52:07Z olivierd $

PORTNAME=	xfce4-timer-plugin
PORTVERSION=	1.5.0
CATEGORIES=	x11-clocks xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Timer plugin for Xfce

USE_BZIP2=	yes
USE_GMAKE=	yes
INSTALLS_ICONS=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	glib20 gtk20 intltool intlhack
USE_XFCE=	configenv libmenu libutil panel
USES=		pkgconfig gettext

.include <bsd.port.mk>
