# New ports collection makefile for:	randomio
# Date created:		20 Aug 2010
# Whom:			Sergey Kandaurov <pluknet@gmail.com>
#
# $FreeBSD: ports/benchmarks/randomio/Makefile,v 1.2 2012/11/17 05:54:50 svnexp Exp $
#

PORTNAME=	randomio
PORTVERSION=	1.4
CATEGORIES=	benchmarks
MASTER_SITES=	http://www.arctic.org/~dean/randomio/

MAINTAINER=	pluknet@gmail.com
COMMENT=	A multithreaded disk i/o microbenchmark

USE_BZIP2=	yes
USE_GMAKE=	yes
PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
