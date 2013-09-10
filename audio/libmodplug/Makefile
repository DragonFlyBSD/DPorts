# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: audio/libmodplug/Makefile 325966 2013-09-02 10:06:03Z bapt $

PORTNAME=	libmodplug
PORTVERSION=	0.8.8.4
CATEGORIES=	audio
MASTER_SITES=	SF/modplug-xmms/${PORTNAME}/${PORTVERSION} CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	ModPlug mod-like music shared libraries

USES=		gmake pathfix pkgconfig
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e '/^CXXFLAGS=/d' \
		${WRKSRC}/configure

.include <bsd.port.mk>
