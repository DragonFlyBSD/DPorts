# $FreeBSD: accessibility/kmouth/Makefile 327684 2013-09-20 11:02:49Z bapt $

PORTNAME=	kmouth
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	accessibility kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Speech synthesizer frontend for KDE

CONFLICTS_INSTALL=	kdeaccessibility-4.[0-7].*

NO_STAGE=	yes
USE_XZ=		yes
USE_KDE4=	kdelibs kdeprefix kdehier automoc4
USES=		cmake:outsource
USE_QT4=	qmake_build moc_build rcc_build uic_build

MAN1=	kmouth.1

.include <bsd.port.mk>
