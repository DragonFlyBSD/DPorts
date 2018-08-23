# $FreeBSD: head/devel/gperf/Makefile 469491 2018-05-09 21:40:17Z sunpoet $

PORTNAME=	gperf
PORTVERSION=	3.0.3
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	GNU

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Generates perfect hash functions for sets of keywords

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS=	ace+tao-[0-9]*
MAKE_JOBS_UNSAFE=	yes
# avoid GPLv3 in generated code
PORTSCOUT=	ignore

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--docdir=${DOCSDIR}
INFO=		gperf
TEST_TARGET=	check

.include <bsd.port.mk>
