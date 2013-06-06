# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: x11-clocks/xfce4-datetime-plugin/Makefile 317695 2013-05-08 16:05:21Z olivierd $

PORTNAME=	xfce4-datetime-plugin
PORTVERSION=	0.6.2
PORTREVISION=	1
CATEGORIES=	x11-clocks xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Datetime panel plugin for the Xfce desktop

USE_GMAKE=	yes
USE_BZIP2=	yes
INSTALLS_ICONS=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	gtk20 intltool intlhack
USE_XFCE=	configenv libmenu libutil panel
USES=		pkgconfig gettext

.include <bsd.port.mk>
