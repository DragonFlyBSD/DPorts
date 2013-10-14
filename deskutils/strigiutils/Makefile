# $FreeBSD: deskutils/strigiutils/Makefile 327718 2013-09-20 16:21:37Z bapt $

PORTNAME=	strigiutils
PORTVERSION=	${STRIGI_VERSION}
CATEGORIES=	deskutils
MASTER_SITES=	${STRIGI_MASTER_SITES}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Strigi desktop search: utilities

LIB_DEPENDS=	streams:${PORTSDIR}/deskutils/libstreams \
		streamanalyzer:${PORTSDIR}/deskutils/libstreamanalyzer


NO_STAGE=	yes
.include <${.CURDIR}/../strigi/Makefile.common>
.include <bsd.port.mk>
