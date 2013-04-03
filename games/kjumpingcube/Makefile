# $FreeBSD: games/kjumpingcube/Makefile 315373 2013-03-27 11:55:25Z makc $

PORTNAME=	kjumpingcube
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	games kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

CONFLICTS_INSTALL=	kdegames-4.[0-9].*

USE_KDE4=	kdehier kdelibs kdeprefix libkdegames automoc4
USES=		cmake:outsource
USE_QT4=	moc_build qmake_build rcc_build uic_build
USE_XZ=		yes
MAKE_JOBS_SAFE=	yes

.include <${.CURDIR}/../kdegames4/Makefile.common>
.include <bsd.port.mk>
