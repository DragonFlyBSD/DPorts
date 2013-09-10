# Created by: mathias.picker@gmx.de
# $FreeBSD: audio/vamp-plugin-sdk/Makefile 325727 2013-08-30 23:01:05Z bapt $

PORTNAME=	vamp-plugin-sdk
PORTVERSION=	2.3
CATEGORIES=	audio
MASTER_SITES=	http://code.soundsoftware.ac.uk/attachments/download/224/

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Vamp audio analysis plugin SDK

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	sndfile.1:${PORTSDIR}/audio/libsndfile

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
USE_LDCONFIG=	yes

.include <bsd.port.mk>
