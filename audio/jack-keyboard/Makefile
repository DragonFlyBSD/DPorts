# Created by: trasz <trasz@pin.if.uz.zgora.pl>
# $FreeBSD: audio/jack-keyboard/Makefile 324744 2013-08-14 22:35:50Z ak $

PORTNAME=	jack-keyboard
DISTVERSION=	2.7.1
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	SF \
		http://home.selasky.org:8192/distfiles/

MAINTAINER=	hselasky@FreeBSD.org
COMMENT=	Virtual keyboard for JACK MIDI

LICENSE=	BSD

LIB_DEPENDS=	jack:${PORTSDIR}/audio/jack

MAN1=		jack-keyboard.1

USE_GNOME=	gtk20
USES=		cmake
INSTALLS_ICONS=	yes

OPTIONS_DEFINE=        LASH
OPTIONS_DEFAULT=       LASH

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MLASH}
LIB_DEPENDS+=  lash:${PORTSDIR}/audio/lash
CMAKE_ARGS+=	-DLashEnable:BOOL=On
.else
CMAKE_ARGS+=	-DLashEnable:BOOL=Off
.endif

.include <bsd.port.mk>
