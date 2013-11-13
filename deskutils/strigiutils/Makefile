# $FreeBSD: deskutils/strigiutils/Makefile 333412 2013-11-10 17:28:44Z rakuco $

PORTNAME=	strigiutils
PORTVERSION=	${STRIGI_VERSION}
CATEGORIES=	deskutils
MASTER_SITES=	${STRIGI_MASTER_SITES}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Strigi desktop search: utilities

LIB_DEPENDS=	streams:${PORTSDIR}/deskutils/libstreams \
		streamanalyzer:${PORTSDIR}/deskutils/libstreamanalyzer

.include <${.CURDIR}/../strigi/Makefile.common>
.include <bsd.port.mk>
