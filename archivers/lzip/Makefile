# Created by: Sylvio Cesar <sylvio@FreeBSD.org>
# $FreeBSD: archivers/lzip/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	lzip
PORTVERSION=	1.15
CATEGORIES=	archivers
MASTER_SITES=	SAVANNAH/lzip LOCAL/marino

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Lossless data compressor based on the LZMA algorithm

LICENSE=	GPLv3

PLIST_FILES=	bin/lzip \
		man/man1/lzip.1.gz

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	CXX="${CXX}" \
		CXXFLAGS="${CXXFLAGS}" \
		LDFLAGS="${LDFLAGS}"
INFO=		lzip

.include <bsd.port.mk>
