# Created by: Olivier Duchateau
# $FreeBSD: science/xfce4-equake-plugin/Makefile 332266 2013-10-31 17:11:01Z olivierd $

PORTNAME=	xfce4-equake-plugin
PORTVERSION=	1.3.3
CATEGORIES=	science xfce
MASTER_SITES=	XFCE
MASTER_SITE_SUBDIR=	src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Earthquake monitor plugin for the Xfce panel

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USES=	gettext pkgconfig gmake
USE_GNOME=	glib20 gtk20 intltool intlhack
USE_XFCE=	configenv libmenu libutil panel
USE_XORG=	x11
INSTALLS_ICONS=	yes

.include <bsd.port.mk>
