PORTNAME=	xwinwrap
PORTVERSION=	0.3
PORTREVISION=	4
CATEGORIES=	x11
MASTER_SITES=	LOCAL/vg

MAINTAINER=	ports@FreeBSD.org
COMMENT=	XWinWrap replace a desktop background with a movie or screensaver
WWW=		http://tech.shantanugoel.com/projects/linux/shantz-xwinwrap

WRKSRC=		${WRKDIR}/${PORTNAME}

ONLY_FOR_ARCHS=	amd64 i386
USES=		tar:bzip2 xorg
USE_XORG=	x11 xorgproto xrender xext
PLIST_FILES=	bin/${PORTNAME}
MAKE_ARGS+=	PREFIX=${PREFIX}

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64"
MAKE_ARGS+=	ARCH=x86_64
.endif

.include <bsd.port.post.mk>
