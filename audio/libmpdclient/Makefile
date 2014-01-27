# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: audio/libmpdclient/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libmpdclient
PORTVERSION=	2.9
CATEGORIES=	audio
MASTER_SITES=	http://www.musicpd.org/download/libmpdclient/2/

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	API library for interfacing MPD

USE_XZ=		yes
GNU_CONFIGURE=	yes
USES=		gmake pathfix
USE_LDCONFIG=	yes

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
BUILD_DEPENDS+=	doxygen:${PORTSDIR}/devel/doxygen
.else
CONFIGURE_ARGS=	--disable-documentation
.endif

.include <bsd.port.mk>
