# New ports collection makefile for:	mousepad
# Date created:		19 April 2006
# Whom:			Oliver Lehmann <oliver@FreeBSD.org>
#
# $FreeBSD: ports/editors/mousepad/Makefile,v 1.26 2012/11/17 05:57:16 svnexp Exp $
#

PORTNAME=	mousepad
PORTVERSION=	0.2.16
PORTREVISION=	11
CATEGORIES=	editors xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=src/apps/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Simple Xfce editor

GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USE_GETTEXT=	yes
USE_GMAKE=	yes
USE_GNOME=	gtk20 intltool intlhack pkgconfig desktopfileutils
USE_XFCE=	configenv libgui

post-install:
	@-update-desktop-database

.include <bsd.port.mk>
