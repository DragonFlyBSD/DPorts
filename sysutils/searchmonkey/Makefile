# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: sysutils/searchmonkey/Makefile 330227 2013-10-13 13:03:03Z makc $

PORTNAME=	searchmonkey
PORTVERSION=	2.0.0
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/Searchmonkey2/${PORTVERSION}%20%5Bstable%5D
DISTNAME=	${PORTNAME}_v${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Search using regexes for file names and text

LICENSE=	GPLv3 # (or later)

USES=		qmake
USE_ZIP=	yes
USE_DOS2UNIX=	*.cpp *.h
USE_QT4=	corelib gui moc_build qmake_build rcc_build uic_build

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
