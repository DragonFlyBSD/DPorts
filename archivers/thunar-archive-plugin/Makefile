# Created by: ports@c0decafe.net <ports@c0decafe.net>
# $FreeBSD: archivers/thunar-archive-plugin/Makefile 309681 2012-12-30 16:50:29Z olivierd $
#

PORTNAME=	thunar-archive-plugin
PORTVERSION=	0.3.0
PORTREVISION=	7
CATEGORIES=	archivers xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=src/thunar-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Archive plugin for the Thunar File Manager

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_XFCE=	configenv libexo thunar
USE_GETTEXT=	yes
INSTALLS_ICONS=	yes
USE_GNOME=	desktopfileutils intltool
USE_GMAKE=	yes

.include <bsd.port.mk>
