# $FreeBSD: x11-themes/kde4-icons-oxygen/Makefile 316786 2013-04-29 08:57:12Z bapt $

PORTNAME=	oxygen
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	x11-themes kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
PKGNAMEPREFIX=	kde4-icons-
DISTNAME=	${PORTNAME}-icons-${PORTVERSION}
DIST_SUBDIR=	KDE/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	The Oxygen icon theme for KDE

USE_XZ=		yes
USE_KDE4=	kdeprefix kdehier
USES=		cmake:outsource
INSTALL_TARGET=	install
EXTRACT_AFTER_ARGS=	--exclude '${DISTNAME}/scalable'

.include <bsd.port.mk>
