# Created by: ijliao
# $FreeBSD: multimedia/dumpmpeg/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	dumpmpeg
PORTVERSION=	0.6
PORTREVISION=	6
CATEGORIES=	multimedia graphics
MASTER_SITES=	SF

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Dump frames from mpeg movies

LIB_DEPENDS=	libsmpeg.so:${PORTSDIR}/multimedia/smpeg

GNU_CONFIGURE=	yes
USE_SDL=	sdl

PLIST_FILES=	bin/dumpmpeg \
		man/man1/dumpmpeg.1.gz

.include <bsd.port.mk>
