# New ports collection makefile for:    9e
# Date created:         17 Mar 1999
# Whom:			Jerry Hicks
#
# $FreeBSD: ports/archivers/9e/Makefile,v 1.15 2012/11/17 05:54:20 svnexp Exp $
#

PORTNAME=	9e
PORTVERSION=	1.0
CATEGORIES=	archivers
MASTER_SITES=	http://rodrigo.osorio.free.fr/freebsd/distfiles/
DISTNAME=	9e

MAINTAINER=	rodrigo@bebik.net
COMMENT=	Explode Plan9 archives

PLIST_FILES=	bin/9e
MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}" LIBS="" HDRS=""

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/9e ${PREFIX}/bin

.include <bsd.port.mk>
