# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: audio/libmodplug/Makefile 340722 2014-01-22 17:00:46Z mat $

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
