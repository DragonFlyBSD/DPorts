# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: ports/audio/xfce4-mpc-plugin/Makefile,v 1.35 2012/12/14 17:52:28 svnexp Exp $
#

PORTNAME=	xfce4-mpc-plugin
PORTVERSION=	0.4.4
PORTREVISION=	1
CATEGORIES=	audio xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	An MPC plugin for Xfce

LIB_DEPENDS=	mpd:${PORTSDIR}/audio/libmpd

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GETTEXT=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	gtk20 intltool intlhack
USE_XFCE=	configenv libexo libmenu panel
USE_PKGCONFIG=	build

.include <bsd.port.mk>
