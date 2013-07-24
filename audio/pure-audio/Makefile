# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: audio/pure-audio/Makefile 322734 2013-07-10 21:28:56Z bapt $

PORTNAME=	pure-audio
PORTVERSION=	0.5
CATEGORIES=	audio

MAINTAINER=	lichray@gmail.com
COMMENT=	A digital audio interface for the Pure language

LIB_DEPENDS=	portaudio:${PORTSDIR}/audio/portaudio2 \
		samplerate:${PORTSDIR}/audio/libsamplerate \
		sndfile:${PORTSDIR}/audio/libsndfile \
		fftw3:${PORTSDIR}/math/fftw3

USE_PURE=	yes

post-patch:
	${REINPLACE_CMD} \
		-e "s|-lportaudio|-I${LOCALBASE}/include/portaudio2 -L${LOCALBASE}/lib/portaudio2 -lportaudio|" \
		-e "s|portaudio.h|portaudio2/portaudio.h|g" \
	   	${WRKSRC}/Makefile

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
