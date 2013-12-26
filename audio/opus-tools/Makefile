# $FreeBSD: audio/opus-tools/Makefile 336844 2013-12-18 16:05:42Z naddy $

PORTNAME=	opus-tools
PORTVERSION=	0.1.8
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/opus/ \
		https://ftp.mozilla.org/pub/mozilla.org/opus/

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Encode, inspect, and decode Opus files

LIB_DEPENDS=	libFLAC.so:${PORTSDIR}/audio/flac \
		libogg.so:${PORTSDIR}/audio/libogg \
		libopus.so:${PORTSDIR}/audio/opus

USES=		pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-maintainer-mode

.include <bsd.port.mk>
