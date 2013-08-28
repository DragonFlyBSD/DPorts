# $FreeBSD: sysutils/plasma-applet-apcups/Makefile 324744 2013-08-14 22:35:50Z ak $

PORTNAME=	apcups
PORTVERSION=	0.2.1
CATEGORIES=	sysutils kde
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	plasma-applet-
DISTNAME=	plasma-${PORTNAME}-${PORTVERSION}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Plasma applet to monitor the status of APC UPS

PROJECTHOST=	plasma-apcups

USES=		cmake
USE_KDE4=	automoc4 kdeprefix kdelibs
USE_QT4=	qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
