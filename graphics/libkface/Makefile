# $FreeBSD: graphics/libkface/Makefile 325926 2013-09-01 22:46:10Z bapt $

PORTNAME=	libkface
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE4 library for face recognition

.include "${.CURDIR}/../digikam-kde4/Makefile.common"

USES+=		pkgconfig
LIB_DEPENDS=	opencv_legacy:${PORTSDIR}/graphics/opencv
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e '/pkgconfig/s|$${LIB_INSTALL_DIR}|libdata|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
