# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: deskutils/kcharselect/Makefile 327718 2013-09-20 16:21:37Z bapt $

PORTNAME=	kcharselect
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	deskutils kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Character selector for KDE

CONFLICTS_INSTALL=	kdeutils-4.[0-7].*

USE_XZ=		yes
USE_KDE4=	kdeprefix kdehier automoc4 kdelibs
USES=		cmake:outsource
USE_QT4=	qmake_build moc_build rcc_build uic_build

NO_STAGE=	yes
.include <bsd.port.mk>
