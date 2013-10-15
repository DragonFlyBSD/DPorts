# Created by: Mooneer Salem <mooneer@translator.cx>
# $FreeBSD: devel/cstringbuffer/Makefile 327722 2013-09-20 17:03:26Z bapt $

PORTNAME=	cstringbuffer
PORTVERSION=	0.1.6
CATEGORIES=	devel
MASTER_SITES=	# disappeared

MAINTAINER=	ports@FreeBSD.org
COMMENT=	File-like IO for strings

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
MAN3=		csb.3
MANCOMPRESSED=	no

PLIST_FILES=	include/csb.h lib/libcsb.a lib/libcsb.la lib/libcsb.so \
		lib/libcsb.so.1

NO_STAGE=	yes
.include <bsd.port.mk>
