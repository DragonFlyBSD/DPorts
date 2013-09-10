# Created by: Sergey Kandaurov <pluknet@gmail.com>
# $FreeBSD: benchmarks/randomio/Makefile 325728 2013-08-30 23:09:24Z bapt $

PORTNAME=	randomio
PORTVERSION=	1.4
CATEGORIES=	benchmarks
MASTER_SITES=	http://www.arctic.org/~dean/randomio/

MAINTAINER=	pluknet@gmail.com
COMMENT=	A multithreaded disk i/o microbenchmark

USE_BZIP2=	yes
USES=		gmake
PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
