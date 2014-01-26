# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: audio/twolame/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	twolame
PORTVERSION=	0.3.13
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	SF \
		http://www.ecs.soton.ac.uk/~njh/twolame/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	MPEG Audio Layer 2 encoder

LIB_DEPENDS=	libsndfile.so:${PORTSDIR}/audio/libsndfile \
		libFLAC.so:${PORTSDIR}/audio/flac \
		libvorbis.so:${PORTSDIR}/audio/libvorbis \
		libogg.so:${PORTSDIR}/audio/libogg

USES=		gmake pathfix pkgconfig
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's| -O3||g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
