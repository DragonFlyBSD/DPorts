# $FreeBSD: head/audio/speexdsp/Makefile 471987 2018-06-08 09:04:27Z amdmi3 $

PORTNAME=	speexdsp
DISTVERSION=	1.2rc3
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://downloads.us.xiph.org/releases/speex/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Audio compression format designed for speech

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		libtool pathfix
USE_LDCONFIG=	yes

.include <bsd.port.options.mk>

.if ${ARCH} == "aarch64"
CONFIGURE_ARGS+=--disable-neon
.endif

.include <bsd.port.mk>
