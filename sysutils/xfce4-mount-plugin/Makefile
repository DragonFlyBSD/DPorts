# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: sysutils/xfce4-mount-plugin/Makefile 317695 2013-05-08 16:05:21Z olivierd $
#

PORTNAME=	xfce4-mount-plugin
PORTVERSION=	0.6.4
PORTREVISION=	1
CATEGORIES=	sysutils xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=	src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Mount and umount utility for the Xfce4 panel

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	intltool intlhack
USES=		gettext pathfix pkgconfig
USE_LDCONFIG=	yes
INSTALLS_ICONS=	yes
USE_XFCE=	configenv libmenu panel

.include <bsd.port.mk>
