# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: ports/audio/libxmp/Makefile,v 1.3 2013/02/23 16:14:40 svnexp Exp $

PORTNAME=	libxmp
PORTVERSION=	4.0.2
CATEGORIES=	audio
MASTER_SITES=	SF/xmp/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Module rendering library for xmp

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

MAKE_JOBS_SAFE=	yes

PLIST_FILES=	include/xmp.h lib/libxmp.so lib/libxmp.so.4 \
		lib/libxmp.so.${PORTVERSION} libdata/pkgconfig/libxmp.pc

.include <bsd.port.mk>
