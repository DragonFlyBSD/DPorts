# Created by: Alexey Degtyarev <alexey@renatasystems.org>
# $FreeBSD: archivers/lz4/Makefile 324828 2013-08-17 02:24:38Z vanilla $

PORTNAME=	lz4
PORTVERSION=	r101
CATEGORIES=	archivers
MASTER_SITES=	https://dl.dropboxusercontent.com/u/59565338/LZ4/ \
		ftp://ftp.renatasystems.org/pub/FreeBSD/ports/distfiles/

MAINTAINER=	alexey@renatasystems.org
COMMENT=	Fast compressor using LZ4 algorithm

USES=		gmake
ALL_TARGET=	lz4c

PLIST_FILES=	bin/lz4c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/lz4c.exe ${PREFIX}/bin/lz4c

.include <bsd.port.mk>
