# $FreeBSD: deskutils/strigiutils/Makefile 315308 2013-03-26 15:43:09Z makc $

PORTNAME=	strigiutils
PORTVERSION=	${STRIGI_VERSION}
CATEGORIES=	deskutils
MASTER_SITES=	${STRIGI_MASTER_SITES}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Strigi desktop search: utilities

LIB_DEPENDS=	streams:${PORTSDIR}/deskutils/libstreams \
		streamanalyzer:${PORTSDIR}/deskutils/libstreamanalyzer

MAKE_JOBS_SAFE=	yes

.include <${.CURDIR}/../strigi/Makefile.common>
.include <bsd.port.mk>
