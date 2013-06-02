# New ports collection makefile for:    libbonobouimm
# Date created:         22 May 2003
# Whom:                 Alexander Nedotsukov <bland@mail.ru>
#
# $FreeBSD: ports/x11-toolkits/libbonobouimm/Makefile,v 1.26 2012/11/17 06:03:36 svnexp Exp $
#

PORTNAME=	libbonobouimm
PORTVERSION=	1.3.7
PORTREVISION=	14
CATEGORIES=	x11-toolkits gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	bland@FreeBSD.org
COMMENT=	C++ interfaces for libbonoboui

LIB_DEPENDS=	gtkmm-2.0:${PORTSDIR}/x11-toolkits/gtkmm20 \
		bonobomm_servers-1.3:${PORTSDIR}/devel/libbonobomm
BUILD_DEPENDS=	gm4:${PORTSDIR}/devel/m4

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack lthack gnomeprefix libbonoboui
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--enable-static

.include <bsd.port.mk>
