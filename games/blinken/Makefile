# New ports collection Makefile for:	blinken
# Date created:				5 September 2011
# Whom:					Alberto Villa <avilla@FreeBSD.org>
#
# $FreeBSD: ports/games/blinken/Makefile,v 1.7 2012/11/17 05:57:33 svnexp Exp $
#

PORTNAME=	blinken
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	games kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Memory enhancement game for KDE 4

CONFLICTS=	kdeedu-4.[0-6].*

USE_KDE4=	kdehier kdelibs kdeprefix automoc4
KDE4_BUILDENV=	yes
USE_QT4=	corelib moc_build qmake_build rcc_build uic_build
USE_XZ=	yes
MAKE_JOBS_SAFE=	yes

.include <bsd.port.mk>
