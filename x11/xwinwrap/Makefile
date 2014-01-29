# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: x11/xwinwrap/Makefile 339414 2014-01-11 10:03:45Z vanilla $

PORTNAME=	xwinwrap
PORTVERSION=	0.3
PORTREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	LOCAL/vg

MAINTAINER=	vg@FreeBSD.org
COMMENT=	XWinWrap replace a desktop background with a movie or screensaver

WRKSRC=		${WRKDIR}/${PORTNAME}

ONLY_FOR_ARCHS=	amd64 i386
USE_BZIP2=	yes
USE_XORG=	x11 xproto xrender xext
PLIST_FILES=	bin/${PORTNAME}
MAKE_ARGS+=	PREFIX=${PREFIX}

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64"
MAKE_ARGS+=	ARCH=x86_64
.endif

.include <bsd.port.post.mk>
