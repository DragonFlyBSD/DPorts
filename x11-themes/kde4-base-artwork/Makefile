# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: x11-themes/kde4-base-artwork/Makefile 314933 2013-03-22 14:18:02Z makc $

PORTNAME=		kde-base-artwork
PORTVERSION=		${KDE4_VERSION}
CATEGORIES=		x11-themes kde
MASTER_SITES=		${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=		KDE

MAINTAINER=		kde@FreeBSD.org
COMMENT=		Base artwork for the KDE4 Plasma Desktop

LICENSE=		GPLv2

CONFLICTS_INSTALL=	kde-workspace-4.[7-8].*

USE_KDE4=		automoc4 kdehier kdelibs kdeprefix
USE_QT4=		moc_build qmake_build rcc_build uic_build
USES=			cmake:outsource
NO_BUILD=		yes
USE_XZ=			yes

.include <bsd.port.mk>
