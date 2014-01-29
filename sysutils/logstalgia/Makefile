# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: sysutils/logstalgia/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	logstalgia
PORTVERSION=	1.0.3
PORTREVISION=	5
CATEGORIES=	sysutils www
MASTER_SITES=	GOOGLE_CODE CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Website access log visualization tool

LICENSE=	GPLv3

LIB_DEPENDS=	libftgl.so:${PORTSDIR}/graphics/ftgl \
		libpng15.so:${PORTSDIR}/graphics/png \
		libjpeg.so:${PORTSDIR}/graphics/jpeg \
		libpcre.so:${PORTSDIR}/devel/pcre

GNU_CONFIGURE=	yes
USES=		pkgconfig
USE_SDL=	sdl image

CFLAGS+=	-L/usr/local/lib -I/usr/local/include

.include <bsd.port.mk>
