# Created by: johans
# $FreeBSD: graphics/dmtx-utils/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	dmtx-utils
PORTVERSION=	0.7.4
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF
MASTER_SITE_SUBDIR=libdmtx/libdmtx/${PORTVERSION}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Software for reading and writing Data Matrix barcodes

LIB_DEPENDS=	libdmtx.so:${PORTSDIR}/graphics/libdmtx

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include

PLIST_FILES=	bin/dmtxread bin/dmtxwrite bin/dmtxquery \
		man/man1/dmtxread.1.gz man/man1/dmtxwrite.1.gz \
		man/man1/dmtxquery.1.gz

.include <bsd.port.mk>
