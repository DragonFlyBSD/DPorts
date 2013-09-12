# Created by: Romain Tartière <romain@blogreen.org>
# $FreeBSD: audio/pavumeter/Makefile 326129 2013-09-03 08:49:46Z bapt $

PORTNAME=	pavumeter
PORTVERSION=	0.9.3
PORTREVISION=	5
CATEGORIES=	audio
MASTER_SITES=	http://0pointer.de/lennart/projects/${PORTNAME}/

MAINTAINER=	romain@FreeBSD.org
COMMENT=	GTK volume meter for PulseAudio

BUILD_DEPENDS=	pulseaudio>=0.9.7:${PORTSDIR}/audio/pulseaudio
RUN_DEPENDS=	pulseaudio>=0.9.7:${PORTSDIR}/audio/pulseaudio
LIB_DEPENDS=	glademm-2.4.1:${PORTSDIR}/devel/libglademm24 \
		pulse.0:${PORTSDIR}/audio/pulseaudio

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig

CONFIGURE_ARGS=	--disable-lynx

.include <bsd.port.mk>
