PORTNAME=	airspyhf
DISTVERSION=	1.6.8-7
DISTVERSIONSUFFIX=	-gb93dedd
CATEGORIES=	comms hamradio

MAINTAINER=	dmgk@FreeBSD.org
COMMENT=	User mode driver for Airspy HF+ SDR
WWW=		https://github.com/airspy/airspyhf

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake compiler:c11 pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	airspy

CMAKE_ARGS=	-DLIBUSB_LIBRARIES="/usr/lib/libusb.so"
CMAKE_OFF=	INSTALL_UDEV_RULES

OPTIONS_DEFINE_x86_64=	SIMD
OPTIONS_DEFINE_i386=	SIMD
OPTIONS_DEFAULT_x86_64=	SIMD
OPTIONS_DEFAULT_i386=	SIMD

SIMD_CFLAGS=	-DFREEBSD_USE_SIMD -msse -msse2 -mfpmath=sse -mmmx

.include <bsd.port.mk>
