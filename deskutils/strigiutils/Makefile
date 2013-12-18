# $FreeBSD: deskutils/strigiutils/Makefile 336190 2013-12-11 18:28:10Z bapt $

PORTNAME=	strigiutils
PORTVERSION=	${STRIGI_VERSION}
CATEGORIES=	deskutils
MASTER_SITES=	${STRIGI_MASTER_SITES}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Strigi desktop search: utilities

LIB_DEPENDS=	libstreams.so:${PORTSDIR}/deskutils/libstreams \
		libstreamanalyzer.so:${PORTSDIR}/deskutils/libstreamanalyzer

.include <${.CURDIR}/../strigi/Makefile.common>
.include <bsd.port.mk>
