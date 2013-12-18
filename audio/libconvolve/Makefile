# Created by: trasz <trasz@pin.if.uz.zgora.pl>
# $FreeBSD: audio/libconvolve/Makefile 336166 2013-12-11 14:35:36Z bapt $

PORTNAME=	libconvolve
PORTVERSION=	0.0.8
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	SF/heaven/Audio%20Applications/Jack%20Related/jack_convolve/
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple C library for partitioned convolution

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

LIB_DEPENDS=	libfftw3.so:${PORTSDIR}/math/fftw3 \
		libfftw3f.so:${PORTSDIR}/math/fftw3-float \
		libsamplerate.so:${PORTSDIR}/audio/libsamplerate \
		libsndfile.so:${PORTSDIR}/audio/libsndfile

USES=		gmake pkgconfig
NO_STAGE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
