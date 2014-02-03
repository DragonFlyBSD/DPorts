# Created by: Matt Lancereau <ports@FreeBSD.org>
# $FreeBSD: sysutils/xfce4-genmon-plugin/Makefile 341841 2014-01-30 14:24:56Z olivierd $

PORTNAME=	xfce4-genmon-plugin
PORTVERSION=	3.4.0
PORTREVISION=	2
CATEGORIES=	sysutils xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=	src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Generic Monitor Xfce4 panel plugin

LICENSE=	LGPL21

GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USES=		gettext pkgconfig gmake
USE_GNOME=	gtk20 intltool intlhack
USE_XFCE=	configenv libmenu panel

WRKSRC=	${WRKDIR}/${PORTNAME}-${PORTVERSION:R}

.include <bsd.port.mk>
