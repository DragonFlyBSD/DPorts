# Created by: Hans Petter Selasky <hselasky@FreeBSD.org>
# $FreeBSD: audio/midipp/Makefile 339419 2014-01-11 11:05:34Z kwm $

PORTNAME=	midipp
PORTVERSION=	1.2.5
CATEGORIES=	audio
MASTER_SITES=	http://www.selasky.org/hans_petter/distfiles/ \
		http://home.selasky.org:8192/distfiles/

MAINTAINER=	hselasky@FreeBSD.org
COMMENT=	MIDI playback, recording, and live performance tool

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	libumidi>=2.0.10:${PORTSDIR}/audio/libumidi
LIB_DEPENDS=	libumidi20.so:${PORTSDIR}/audio/libumidi

USES=		qmake
USE_BZIP2=	yes
USE_QT4=	gui moc_build rcc_build network

.include <bsd.port.mk>
