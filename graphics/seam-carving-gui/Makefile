# Created by: buganini@gmail.com
# $FreeBSD: graphics/seam-carving-gui/Makefile 334586 2013-11-22 12:55:00Z makc $

PORTNAME=	seam-carving-gui
PORTVERSION=	1.11
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DISTNAME=	SeamCarvingGui-Src-${PORTVERSION}

MAINTAINER=	buganini@gmail.com
COMMENT=	The Seam Carving GUI is a GUI front end to CAIR

USES=		gmake qmake
USE_QT4=	gui imageformats_run moc_build uic_build

WRKSRC=		${WRKDIR}/Src\ Seam\ Carving\ GUI\ ${PORTVERSION}

PLIST_FILES=	bin/SeamCarvingGui

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/SeamCarvingGui ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
