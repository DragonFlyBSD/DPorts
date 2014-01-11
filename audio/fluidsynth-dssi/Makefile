# Created by: trasz <trasz@pin.if.uz.zgora.pl>
# $FreeBSD: audio/fluidsynth-dssi/Makefile 337901 2013-12-28 20:25:28Z antoine $

PORTNAME=	fluidsynth-dssi
PORTVERSION=	1.0.0
PORTREVISION=	8
CATEGORIES=	audio
MASTER_SITES=	SF/dssi/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Wrapper for FluidSynth allowing it to function as a DSSI plugin

LIB_DEPENDS=	libdssialsacompat.so:${PORTSDIR}/audio/libdssialsacompat \
		liblo.so:${PORTSDIR}/audio/liblo \
		libfluidsynth.so:${PORTSDIR}/audio/fluidsynth \
		libjack.so:${PORTSDIR}/audio/jack
BUILD_DEPENDS=	${LOCALBASE}/include/dssi.h:${PORTSDIR}/audio/dssi

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
USE_GNOME=	gtk20

post-patch:
	@${REINPLACE_CMD} -e 's|echo aout|echo elf|g' \
	${WRKSRC}/configure

.include <bsd.port.mk>
