# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: benchmarks/ubench/Makefile 338716 2014-01-05 00:36:43Z bapt $

PORTNAME=	ubench
PORTVERSION=	0.32
CATEGORIES=	benchmarks
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	system/benchmark

MAINTAINER=	brian@FreeBSD.org
COMMENT=	Unix Benchmark Utility for CPU(s) and memory

HAS_CONFIGURE=	yes
MAKE_ARGS=	INSTALLDIR=${STAGEDIR}${PREFIX}/bin \
		MANDIR=${STAGEDIR}${PREFIX}/man/man8

PLIST_FILES=	bin/ubench \
		man/man8/ubench.8.gz

.include <bsd.port.mk>
