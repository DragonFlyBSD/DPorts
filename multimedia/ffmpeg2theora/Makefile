# Created by: Anders Nordby <anders@FreeBSD.org>
# $FreeBSD: multimedia/ffmpeg2theora/Makefile 331860 2013-10-28 14:37:33Z wg $

PORTNAME=	ffmpeg2theora
PORTVERSION=	0.29
CATEGORIES=	multimedia
MASTER_SITES=	http://v2v.cc/~j/ffmpeg2theora/downloads/

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Reencode many media file formats to Ogg Theora

LICENSE=	GPLv3

LIB_DEPENDS=	libavcodec.so:${PORTSDIR}/multimedia/ffmpeg \
		libkate.so:${PORTSDIR}/multimedia/libkate \
		libtheora.so:${PORTSDIR}/multimedia/libtheora

USE_BZIP2=	yes
USES=		iconv pkgconfig scons
MAKE_ENV=	APPEND_CCFLAGS="${CPPFLAGS}" APPEND_LINKFLAGS="${LDFLAGS}"

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

PLIST_FILES=	bin/ffmpeg2theora man/man1/ffmpeg2theora.1.gz

.include <bsd.port.mk>
