# Created by: Choe, Cheng-Dae <whitekid@gmail.com>
# $FreeBSD: graphics/freeimage/Makefile 324091 2013-08-01 06:35:28Z bapt $

PORTNAME=	freeimage
PORTVERSION=	3.15.4
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/Source%20Distribution/${PORTVERSION}
DISTNAME=	FreeImage${PORTVERSION:S/.//g}

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Simple C/C++ bitmap graphics library

USES=		gmake
USE_ZIP=	yes
USE_DOS2UNIX=	Source/LibOpenJPEG/opj_malloc.h
USE_LDCONFIG=	yes
WRKSRC=		${WRKDIR}/FreeImage
MAKE_ARGS=	CC=${CC} CPP=${CPP} CXX=${CXX}

CFLAGS+=	-fexceptions -fvisibility=hidden

PLIST_FILES=	include/FreeImage.h \
		include/FreeImagePlus.h \
		lib/libfreeimage.a \
		lib/libfreeimage-${PORTVERSION}.so \
		lib/libfreeimage.so.3 \
		lib/libfreeimage.so \
		lib/libfreeimageplus.a \
		lib/libfreeimageplus-${PORTVERSION}.so \
		lib/libfreeimageplus.so.3 \
		lib/libfreeimageplus.so

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64"
CFLAGS+=	-fPIC
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|/usr|${PREFIX}| ; s|-g root|-g wheel|' \
		${WRKSRC}/Makefile.gnu ${WRKSRC}/Makefile.fip

post-build:
	cd ${WRKSRC} && ${GMAKE} -f Makefile.fip

post-install:
	cd ${WRKSRC} && ${GMAKE} -f Makefile.fip ${INSTALL_TARGET}
	${LN} -s libfreeimageplus-${PORTVERSION}.so.3 ${PREFIX}/lib/libfreeimageplus.so
	${LN} -s libfreeimageplus-${PORTVERSION}.so ${PREFIX}/lib/libfreeimageplus.so.3

.include <bsd.port.post.mk>
