# Created by: Romain Tartière <romain@blogreen.org>
# $FreeBSD: audio/pavucontrol/Makefile 336166 2013-12-11 14:35:36Z bapt $

PORTNAME=	pavucontrol
PORTVERSION=	0.9.10
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://0pointer.de/lennart/projects/${PORTNAME}/

MAINTAINER=	romain@FreeBSD.org
COMMENT=	GTK mixer for PulseAudio

LIB_DEPENDS=	libglademm-2.4.so:${PORTSDIR}/devel/libglademm24 \
		libpulse.so:${PORTSDIR}/audio/pulseaudio \
		libcanberra.so:${PORTSDIR}/audio/libcanberra

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
NO_STAGE=	yes
USE_GNOME=	intltool

CONFIGURE_ARGS=	--disable-lynx

.include <bsd.port.mk>
