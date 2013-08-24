# New ports collection makefile for:	libmusicbrainz4
# Date Created:				2007-05-17
# Whom:					Jason E. Hale <bsdkaffee@gmail.com>
#
# $FreeBSD: audio/libmusicbrainz4/Makefile 324744 2013-08-14 22:35:50Z ak $
#

PORTNAME=	libmusicbrainz
PORTVERSION=	4.0.3
CATEGORIES=	audio
MASTER_SITES=	https://cloud.github.com/downloads/metabrainz/${PORTNAME}/

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	MusicBrainz client library for audio metadata lookup

LICENSE=	LGPL21

LIB_DEPENDS=	neon:${PORTSDIR}/www/neon29

LATEST_LINK=	${PORTNAME}4

USES=		cmake
USE_LDCONFIG=	yes


post-patch:
	${REINPLACE_CMD} -e '/pkgconfig/s|$${LIB_INSTALL_DIR}|libdata|' \
		 ${WRKSRC}/CMakeLists.txt
	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' \
		 ${WRKSRC}/cmake/modules/*.cmake

.include <bsd.port.mk>
