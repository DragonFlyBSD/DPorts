# Created by: ijliao
# $FreeBSD: multimedia/dumpmpeg/Makefile 327747 2013-09-20 20:57:48Z bapt $

PORTNAME=	dumpmpeg
PORTVERSION=	0.6
PORTREVISION=	6
CATEGORIES=	multimedia graphics
MASTER_SITES=	SF

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Dump frames from mpeg movies

LIB_DEPENDS=	smpeg:${PORTSDIR}/multimedia/smpeg

GNU_CONFIGURE=	yes
USE_SDL=	sdl

MAN1=		dumpmpeg.1
PLIST_FILES=	bin/dumpmpeg

NO_STAGE=	yes
.include <bsd.port.mk>
