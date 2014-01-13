# Created by: Albert Vernon <f3cun3c02@sneakemail.com>
# $FreeBSD: archivers/plzip/Makefile 337549 2013-12-26 16:27:35Z bapt $

PORTNAME=	plzip
PORTVERSION=	1.1
CATEGORIES=	archivers
MASTER_SITES=	SAVANNAH/lzip

MAINTAINER=	delphij@FreeBSD.org
COMMENT=	Parallel, lossless data compressor based on the LZMA algorithm

BUILD_DEPENDS=	lzlib>=1.1:${PORTSDIR}/archivers/lzlib

PLIST_FILES=	bin/plzip \
		man/man1/plzip.1.gz

USES=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	CXXFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"
INFO=		plzip

.include <bsd.port.mk>
