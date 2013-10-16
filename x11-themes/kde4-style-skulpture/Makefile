# Created by: Steve Wills <steve@mouf.net>
# $FreeBSD: x11-themes/kde4-style-skulpture/Makefile 327783 2013-09-20 23:54:03Z bapt $

PORTNAME=	skulpture
PORTVERSION=	0.2.3
PORTREVISION=	6
CATEGORIES=	x11-themes kde
MASTER_SITES=	http://www.kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	kde4-style-
DISTFILES=	59031-skulpture-${PORTVERSION}.tar.bz2

MAINTAINER=	swills@FreeBSD.org
COMMENT=	KDE style featuring 3D artwork and enhanced the visual experience

USE_BZIP2=	yes
USE_KDE4=	kdelibs kdehier kdeprefix automoc4 workspace
USE_QT4=	corelib qmake_build moc_build rcc_build uic_build
USES=		cmake

NO_STAGE=	yes
.include <bsd.port.mk>
