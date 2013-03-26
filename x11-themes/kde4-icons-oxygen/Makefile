# $FreeBSD: x11-themes/kde4-icons-oxygen/Makefile 314933 2013-03-22 14:18:02Z makc $

PORTNAME=	oxygen
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	x11-themes kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
PKGNAMEPREFIX=	kde4-icons-
DISTNAME=	${PORTNAME}-icons-${PORTVERSION}
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	The Oxygen icon theme for KDE

USE_XZ=	yes
USE_KDE4=	kdeprefix kdehier
USES=		cmake
INSTALL_TARGET=	install
EXTRACT_AFTER_ARGS+=	| ${TAR} -xf - --exclude '${DISTNAME}/scalable'

.include <bsd.port.mk>
