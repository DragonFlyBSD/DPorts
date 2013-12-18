# Created by: Matt Tosto <datahead4@gmail.com>
# $FreeBSD: audio/taglib-extras/Makefile 336166 2013-12-11 14:35:36Z bapt $

PORTNAME=	taglib-extras
PORTVERSION=	1.0.1
CATEGORIES=	audio
MASTER_SITES=	http://www.kollide.net/~jefferai/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Extra taglib features for Amarok 2.2

LIB_DEPENDS=	libtag.so:${PORTSDIR}/audio/taglib

USES=		cmake
NO_STAGE=	yes

.include <bsd.port.pre.mk>

post-extract:
	${REINPLACE_CMD} -e 's|$${LIB_INSTALL_DIR}/pkgconfig|libdata/pkgconfig|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.post.mk>
