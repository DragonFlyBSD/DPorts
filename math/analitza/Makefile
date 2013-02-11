# $FreeBSD: ports/math/analitza/Makefile,v 1.4 2013/02/04 01:04:18 svnexp Exp $

PORTNAME=	analitza
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	math kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	A library from KDE Education project

CONFLICTS_INSTALL=	kalgebra-4.7.* kdeedu-4.[0-6].*

USE_XZ=	yes
USE_KDE4=	kdehier kdelibs kdeprefix automoc4
KDE4_BUILDENV=	yes
USE_QT4=	moc_build qmake_build rcc_build uic_build
MAKE_JOBS_SAFE=	yes

.include <bsd.port.mk>
