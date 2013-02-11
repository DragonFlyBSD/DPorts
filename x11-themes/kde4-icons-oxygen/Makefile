# $FreeBSD: ports/x11-themes/kde4-icons-oxygen/Makefile,v 1.9 2013/02/04 01:04:54 svnexp Exp $

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
USE_CMAKE=	yes
INSTALL_TARGET=	install
EXTRACT_AFTER_ARGS+=	| ${TAR} -xf - --exclude '${DISTNAME}/scalable'

.include <bsd.port.mk>
