# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: audio/fplib/Makefile 331401 2013-10-23 18:18:08Z sunpoet $

PORTNAME=	fplib
PORTVERSION=	20121001
CATEGORIES=	audio
MASTER_SITES=	LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Last.fm fingerprint library

LICENSE=	LGPL3

LIB_DEPENDS=	libcurl.so:${PORTSDIR}/ftp/curl \
		libfftw3.so:${PORTSDIR}/math/fftw3 \
		libfftw3f.so:${PORTSDIR}/math/fftw3-float \
		libmad.so:${PORTSDIR}/audio/libmad \
		libsamplerate.so:${PORTSDIR}/audio/libsamplerate \
		libtag.so:${PORTSDIR}/audio/taglib

CPPFLAGS+=	-I${LOCALBASE}/include
#REINPLACE_ARGS=	-i ''
MAKE_JOBS_UNSAFE=	yes
USE_LDCONFIG=	yes
USE_XZ=		yes
USES=		cmake

post-patch:
	@${REINPLACE_CMD} \
		-e 's|\(ADD_DEFINITIONS\)(.*)|\1(${CFLAGS} ${CPPFLAGS})|' \
		-e 's|\(LINK_DIRECTORIES\)(\(.*\))|\1(\2 ${LOCALBASE}/lib)|' \
			${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
