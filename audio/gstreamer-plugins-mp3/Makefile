# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: audio/gstreamer-plugins-mp3/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gstreamer-plugins
PORTVERSION=	0.10.0
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	# empty
PKGNAMESUFFIX=	-mp3
DISTFILES=	# empty
EXTRACT_ONLY=	# empty

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Gstreamer Plugins Mp3 decoder meta-port

NO_BUILD=	yes
NO_INSTALL=	yes
NO_MTREE=	yes
WANT_GSTREAMER=	yes

OPTIONS_MULTI=	MP3
OPTIONS_MULTI_MP3=	MAD FLUENDO
OPTIONS_DEFAULT=	MAD
FLUENDO_DESC=	Use Fluendo Mp3 decoder

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MMAD}
USE_GSTREAMER+=	mad
.endif

.if ${PORT_OPTIONS:MFLUENDO}
USE_GSTREAMER+=	fluendo-mp3
.endif

.include <bsd.port.mk>
