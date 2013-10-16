# Created by: Olivier Duchateau
# $FreeBSD: science/xfce4-equake-plugin/Makefile 327767 2013-09-20 22:48:30Z bapt $

PORTNAME=	xfce4-equake-plugin
PORTVERSION=	1.3.3
CATEGORIES=	science xfce
MASTER_SITES=	http://www.e-quake.org/%SUBDIR%/
MASTER_SITE_SUBDIR=	wp-uploads/2013/09
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Earthquake monitor plugin for the Xfce desktop

GNU_CONFIGURE=	yes
USES=	gettext pkgconfig gmake
USE_GNOME=	glib20 gtk20 intltool intlhack
USE_XFCE=	configenv libmenu libutil panel
USE_XORG=	x11
INSTALLS_ICONS=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
