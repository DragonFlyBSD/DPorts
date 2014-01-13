# Created by: Vaidas Zlotkus <r2@music.lt>
# $FreeBSD: audio/xmms-mp3cue/Makefile 337708 2013-12-27 11:09:35Z bapt $

PORTNAME=	xmms-mp3cue
PORTVERSION=	0.94
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	http://brianvictor.tripod.com/
DISTNAME=	XMMS-mp3cue-${PORTVERSION}

MAINTAINER=	r2@music.lt
COMMENT=	XMMS mp3cue adds cue file support to XMMS

LIB_DEPENDS=	libxmms.so:${PORTSDIR}/multimedia/xmms

GNU_CONFIGURE=	yes
USES=		gmake
NO_STAGE=	yes

PLIST_SUB=	PORTDOCS=${DISTNAME}

CFLAGS_x86_64=	-fPIC
CFLAGS_ia64=	-fPIC

post-patch:
	@${REINPLACE_CMD} -e 's|malloc.h|stdlib.h|' ${WRKSRC}/*.c

.include <bsd.port.mk>
