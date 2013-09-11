# Created by: Uffe Jakobsen <uffe@uffe.org>
# $FreeBSD: sysutils/sysvbanner/Makefile 325499 2013-08-28 04:10:02Z amdmi3 $

PORTNAME=	sysvbanner
PORTVERSION=	1.0.15
CATEGORIES=	sysutils
MASTER_SITES=	http://github.com/uffejakobsen/${PORTNAME}/archive/v${PORTVERSION}.tar.gz?dummy=/

MAINTAINER=	uffe@uffe.org
COMMENT=	SysV banner

FETCH_ARGS=	-Fpr

USES=		gmake

ALL_TARGET=	banner

MAN1=		sysvbanner.1

PLIST_FILES=	bin/sysvbanner

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/banner ${PREFIX}/bin/sysvbanner
	${INSTALL_MAN} ${BUILD_WRKSRC}/banner.1 ${MAN1PREFIX}/man/man1/sysvbanner.1

.include <bsd.port.mk>
