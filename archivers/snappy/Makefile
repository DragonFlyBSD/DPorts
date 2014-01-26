# Created by: Vanilla I. Shu <vanilla@FreeBSD.org>
# $FreeBSD: archivers/snappy/Makefile 339829 2014-01-15 22:22:20Z bapt $

PORTNAME=	snappy
PORTVERSION=	1.1.0
PORTREVISION=	0
CATEGORIES=	archivers
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Fast compressor/decompressor library

OPTIONS_DEFINE=	DOCS

CONFIGURE_ARGS=	--disable-gtest
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

BROKEN_sparc64=	Does not compile on sparc64

.include <bsd.port.mk>
