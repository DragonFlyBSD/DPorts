# New ports collection makefile for:	kuickshow
# Date created:				July 09 2004
# Whom:					Michael Nottebrock <lofi@FreeBSD.org>
#
# $FreeBSD: graphics/kuickshow-kde4/Makefile 324744 2013-08-14 22:35:50Z ak $
#

PORTNAME=	kuickshow
PORTVERSION=	${APP_VER}.${EXTRA_VER}
PORTREVISION=	3
CATEGORIES=	graphics kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/extragear
DISTNAME=	${PORTNAME}-${APP_VER}-kde${EXTRA_VER}
DIST_SUBDIR=	KDE/extragear

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE image viewer

USE_BZIP2=	yes
USE_GNOME=	imlib
USE_KDE4=	kdelibs kdeprefix kdehier automoc4
USE_QT4=	corelib opengl qmake_build moc_build rcc_build uic_build
USES=		cmake gettext

LATEST_LINK=	${PORTNAME}-kde4

APP_VER=	0.9.1
EXTRA_VER=	4.4.0

.include <bsd.port.mk>
