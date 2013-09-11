# Created by: Mikhail Teterin <mi@aldan.algebra.com>
# $FreeBSD: graphics/libfpx/Makefile 325934 2013-09-02 05:22:58Z mi $

PORTNAME=	libfpx
DISTVERSION=	1.3.1-2
CATEGORIES=	graphics
MASTER_SITES=	http://ftp.sunet.se/pub/multimedia/graphics/ImageMagick/delegates/

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	Library routines for working with Flashpix images

USE_XZ=	yes

PLIST_FILES=	lib/libfpx.so.2 lib/libfpx.so lib/libfpx.a include/fpxlib.h
USE_LDCONFIG=	yes
MAKEFILE=	${FILESDIR}/Makefile.bsd
post-patch:
	${SED} -i '' -e '/^#include "fpxlib-config.h"/d'	\
		${WRKSRC}/basics/filename.cpp	\
		${WRKSRC}/oless/h/owchar.h	\
		${WRKSRC}/ole/gen_guid.cpp	\
		${WRKSRC}/fpxlib.h

.include <bsd.port.mk>

# We want the port's Makefile to build compiler-flags from scratch
# (based on WARNS= in particular) instead of being influenced by
# the environment... There is no obvious way to prevent bsd.port.mk
# from adding CFLAGS and CXXFLAGS to the build environment, so we
# remove them here.
MAKE_ENV:=	${MAKE_ENV:NCFLAGS=*:NCXXFLAGS=*}
