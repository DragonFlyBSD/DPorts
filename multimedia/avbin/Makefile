# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: multimedia/avbin/Makefile 322840 2013-07-12 15:01:45Z amdmi3 $

PORTNAME=	avbin
PORTVERSION=	7
PORTREVISION=	5
CATEGORIES=	multimedia
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE} \
		http://mirror.amdmi3.ru/distfiles/
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	FFmpeg wrapper

LIB_DEPENDS=	avcodec:${PORTSDIR}/multimedia/ffmpeg

LIBNAME=	libavbin.so.${PORTVERSION}
PLIST_FILES=	lib/${LIBNAME} include/avbin.h
USE_LDCONFIG=	yes

PORTDOCS=	*

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64" || ${ARCH} == "ia64"
CFLAGS+=	-fPIC
.endif

do-build:
	cd ${WRKSRC} && \
		${CC} ${CFLAGS} -shared -Wl,-soname,${LIBNAME} -o ${LIBNAME} \
		src/avbin.c -Iinclude -I${LOCALBASE}/include \
		-DAVBIN_VERSION=${PORTVERSION} -DFFMPEG_REVISION=0 \
		-L${LOCALBASE}/lib -lavcodec -lavformat

do-install:
	${INSTALL_DATA} ${WRKSRC}/${LIBNAME} ${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/include/avbin.h ${PREFIX}/include

.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/doc && ${COPYTREE_SHARE} '*' ${DOCSDIR}/
.endif

.include <bsd.port.post.mk>
