# Created by: Douglas Carmichael <dcarmich@dcarmichael.net>
# $FreeBSD: devel/kdevelop-pg-qt/Makefile 340104 2014-01-17 20:34:33Z makc $

PORTNAME=	kdevelop-pg-qt
PORTVERSION=	1.0.0
PORTREVISION=	3
CATEGORIES=	devel kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/${PORTNAME}/${PORTVERSION}/src
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Parser-generator from KDevplatform

BUILD_DEPENDS=	${LOCALBASE}/bin/flex:${PORTSDIR}/textproc/flex

USE_BZIP2=	yes
USES=		bison cmake:outsource compiler:c++11-lib
USE_KDE4=	automoc4 kdehier kdelibs kdeprefix
USE_QT4=	qmake_build moc_build uic_build rcc_build

.include <bsd.port.mk>
