# Created by: Romain Tartière <romain@blogreen.org>
# $FreeBSD: audio/pavumeter/Makefile 336166 2013-12-11 14:35:36Z bapt $

PORTNAME=	pavumeter
PORTVERSION=	0.9.3
PORTREVISION=	5
CATEGORIES=	audio
MASTER_SITES=	http://0pointer.de/lennart/projects/${PORTNAME}/

MAINTAINER=	romain@FreeBSD.org
COMMENT=	GTK volume meter for PulseAudio

BUILD_DEPENDS=	pulseaudio>=0.9.7:${PORTSDIR}/audio/pulseaudio
RUN_DEPENDS=	pulseaudio>=0.9.7:${PORTSDIR}/audio/pulseaudio
LIB_DEPENDS=	libglademm-2.4.so:${PORTSDIR}/devel/libglademm24 \
		libpulse.so:${PORTSDIR}/audio/pulseaudio

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
NO_STAGE=	yes

CONFIGURE_ARGS=	--disable-lynx

.include <bsd.port.mk>
