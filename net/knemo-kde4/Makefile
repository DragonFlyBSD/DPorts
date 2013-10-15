# $FreeBSD: net/knemo-kde4/Makefile 329697 2013-10-07 12:26:54Z makc $

PORTNAME=	knemo
PORTVERSION=	0.7.6
CATEGORIES=	net kde
MASTER_SITES=	http://kde-apps.org/CONTENT/content-files/
DISTNAME=	12956-${PORTNAME}-${PORTVERSION}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	KDE network monitor

USE_BZIP2=	yes
USES=		cmake
USE_QT4=	qmake_build moc_build uic_build rcc_build
USE_KDE4=	kdeprefix kdelibs workspace automoc4

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

NO_STAGE=	yes

.include <bsd.port.mk>
