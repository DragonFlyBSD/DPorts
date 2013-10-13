# $FreeBSD: devel/gperf/Makefile 327804 2013-09-21 11:06:03Z dinoex $

PORTNAME=	gperf
PORTVERSION=	3.0.3
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	gperf

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Generates perfect hash functions for sets of keywords

LICENSE=	GPLv2

CONFLICTS=	ace+tao-[0-9]*
NO_STAGE=	yes

GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes
CONFIGURE_ARGS+=	--docdir=${DOCSDIR}

MAN1=		gperf.1
INFO=		gperf

# avoid GPL3
PORTSCOUT=	skipv:3.0.4

regression-test: test

test:	build
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} check

.include <bsd.port.mk>
