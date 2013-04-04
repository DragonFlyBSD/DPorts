# $FreeBSD: sysutils/kshutdown-kde4/Makefile 314960 2013-03-22 20:06:14Z makc $

PORTNAME=	kshutdown
DISTVERSION=	3.0beta6
CATEGORIES=	sysutils kde
MASTER_SITES=	SF/${PORTNAME}/KShutdown/3.0%20Beta%206/
DISTNAME=	${PORTNAME}-source-${DISTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Advanced shutdown utility for KDE

USE_ZIP=	yes
USES=		cmake
USE_QT4=	moc_build qmake_build rcc_build uic_build
USE_KDE4=	automoc4 kdehier kdeprefix workspace

MAKE_JOBS_SAFE=	yes
LATEST_LINK=	${PORTNAME}-kde4

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}

.include <bsd.port.mk>
