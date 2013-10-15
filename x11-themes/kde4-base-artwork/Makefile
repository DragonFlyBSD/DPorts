# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: x11-themes/kde4-base-artwork/Makefile 327783 2013-09-20 23:54:03Z bapt $

PORTNAME=	kde-base-artwork
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	x11-themes kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Base artwork for the KDE Plasma Desktop

LICENSE=	GPLv2

CONFLICTS_INSTALL=	kde-workspace-4.[7-8].*

USES=		cmake:outsource
USE_KDE4=	automoc4 kdehier kdelibs kdeprefix
USE_QT4=	moc_build qmake_build rcc_build uic_build
USE_XZ=		yes
NO_BUILD=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
