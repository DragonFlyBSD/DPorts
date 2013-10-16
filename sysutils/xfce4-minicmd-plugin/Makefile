# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: sysutils/xfce4-minicmd-plugin/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	xfce4-minicmd-plugin
PORTVERSION=	0.4
PORTREVISION=	16
CATEGORIES=	sysutils xfce
MASTER_SITES=	ftp://ftp.berlios.de/pub/xfce-goodies/panel-plugins/4.4/
DIST_SUBDIR=	xfce4

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Displays a mini-command line on the xfce4-panel

GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USES=		gettext pkgconfig
USE_GMAKE=	yes
USE_GNOME=	gtk20 intltool intlhack
USE_XFCE=	libgui configenv panel

NO_STAGE=	yes
.include <bsd.port.mk>
