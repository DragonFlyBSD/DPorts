# $FreeBSD: ports/x11-themes/kde4-wallpapers/Makefile,v 1.6 2013/02/04 01:04:54 svnexp Exp $

PORTNAME=	kde-wallpapers
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	x11-themes kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Set of wallpapers for the KDE Plasma workspace

CONFLICTS=	kdebase-workspace-4.[0-6].*

USE_XZ=	yes
USE_KDE4=	automoc4 kdehier kdelibs kdeprefix
KDE4_BUILDENV=	yes
USE_QT4=	moc_build qmake_build rcc_build uic_build

NO_BUILD=	yes

.include <bsd.port.mk>
