# Created by: trasz <trasz@pin.if.uz.zgora.pl>
# $FreeBSD: ports/audio/libconvolve/Makefile,v 1.12 2012/11/17 05:54:36 svnexp Exp $

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

LIB_DEPENDS=	fftw3:${PORTSDIR}/math/fftw3 \
		fftw3f:${PORTSDIR}/math/fftw3-float \
		samplerate.1:${PORTSDIR}/audio/libsamplerate \
		sndfile.1:${PORTSDIR}/audio/libsndfile

USE_GMAKE=	yes
USE_LDCONFIG=	yes
USE_PKGCONFIG=	build

.include <bsd.port.mk>
