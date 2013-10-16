# $FreeBSD: sysutils/plasma-applet-apcups/Makefile 327772 2013-09-20 23:05:58Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
