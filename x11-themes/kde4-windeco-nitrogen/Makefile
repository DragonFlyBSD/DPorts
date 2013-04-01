# Created by: kmoore
# $FreeBSD: x11-themes/kde4-windeco-nitrogen/Makefile 314960 2013-03-22 20:06:14Z makc $

PORTNAME=	nitrogen
PORTVERSION=	3.3.3
PORTREVISION=	4
CATEGORIES=	x11-themes kde
MASTER_SITES=	http://www.kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	kde4-windeco-
DISTNAME=	99551-${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}-Source

MAINTAINER=	ports@FreeBSD.org
COMMENT=	KDE4 window decoration

USE_KDE4=	kdelibs kdehier kdeprefix automoc4 workspace
USE_QT4=	corelib qmake_build moc_build rcc_build uic_build
USES=		cmake
WRKSRC=		${WRKDIR}/${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}-Source

.include <bsd.port.mk>
