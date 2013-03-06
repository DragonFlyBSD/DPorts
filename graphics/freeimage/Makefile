# Created by: Choe, Cheng-Dae <whitekid@gmail.com>
# $FreeBSD: ports/graphics/freeimage/Makefile,v 1.19 2013/01/30 14:46:04 svnexp Exp $

PORTNAME=	freeimage
PORTVERSION=	3.15.4
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/Source%20Distribution/${PORTVERSION}
DISTNAME=	FreeImage${PORTVERSION:S/.//g}

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	An open source graphics library

USE_ZIP=	yes
USE_DOS2UNIX=	Source/LibOpenJPEG/opj_malloc.h
USE_GMAKE=	yes
USE_LDCONFIG=	yes
WRKSRC=		${WRKDIR}/FreeImage

CFLAGS+= -fexceptions -fvisibility=hidden

PLIST_FILES=	include/FreeImage.h \
		lib/libfreeimage.a \
		lib/libfreeimage-${PORTVERSION}.so \
		lib/libfreeimage.so.3 \
		lib/libfreeimage.so

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64"
CFLAGS+=	-fPIC
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|/usr|${PREFIX}| ; s|-g root|-g wheel|' \
		${WRKSRC}/Makefile.gnu

.include <bsd.port.post.mk>
