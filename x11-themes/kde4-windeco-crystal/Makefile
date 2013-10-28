# Created by: decept
# $FreeBSD: x11-themes/kde4-windeco-crystal/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	crystal
PORTVERSION=	2.2.1
PORTREVISION=	1
CATEGORIES=	x11-themes kde
MASTER_SITES=	http://www.kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	kde-windeco-
DISTNAME=	75140-${PORTNAME}-${PORTVERSION}

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Transparent KDE window decoration

LICENSE=	GPLv2

USE_BZIP2=	yes
USE_KDE4=	kdelibs kdehier kdeprefix automoc4 workspace
USE_QT4=	qmake_build moc_build rcc_build uic_build \
		corelib gui qt3support
USES=		cmake:outsource
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

NO_STAGE=	yes
.include <bsd.port.mk>
