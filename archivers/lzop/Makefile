# Created by: will
# $FreeBSD: head/archivers/lzop/Makefile 331430 2013-10-23 21:20:18Z mandree $

PORTNAME=	lzop
DISTVERSION=	1.03
CATEGORIES=	archivers
MASTER_SITES=	http://www.lzop.org/download/ \
		LOCAL/mandree

MAINTAINER=	mandree@FreeBSD.org
COMMENT=	Fast file compressor similar to gzip, using the LZO library

LIB_DEPENDS=	liblzo2.so:${PORTSDIR}/archivers/lzo2

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/lzop man/man1/lzop.1.gz

.include <bsd.port.mk>
