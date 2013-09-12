# Created by: Anders Nordby <anders@FreeBSD.org>
# $FreeBSD: multimedia/ffmpeg2theora/Makefile 326840 2013-09-09 18:54:28Z antoine $

PORTNAME=	ffmpeg2theora
PORTVERSION=	0.29
CATEGORIES=	multimedia
MASTER_SITES=	http://v2v.cc/~j/ffmpeg2theora/downloads/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Reencode many media file formats to Ogg Theora

LICENSE=	GPLv3

LIB_DEPENDS=	avcodec:${PORTSDIR}/multimedia/ffmpeg \
		kate:${PORTSDIR}/multimedia/libkate \
		theora:${PORTSDIR}/multimedia/libtheora

USE_BZIP2=	yes
USES=		iconv pkgconfig
USE_SCONS=	yes
SCONS_BUILDENV=	CC="${CC}" CCFLAGS="${CFLAGS}" \
		APPEND_CCFLAGS="${CPPFLAGS}" APPEND_LINKFLAGS="${LDFLAGS}"

CPPFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

MAN1=		ffmpeg2theora.1
PLIST_FILES=	bin/ffmpeg2theora

.include <bsd.port.mk>
