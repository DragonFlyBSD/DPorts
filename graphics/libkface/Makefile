# New ports collection makefile for:	libkface
# Date created:				2012-05-12
# Whom:					Jason E. Hale <bsdkaffee@gmail.com>
#
# $FreeBSD: ports/graphics/libkface/Makefile,v 1.4 2012/11/17 05:58:13 svnexp Exp $
#

PORTNAME=	libkface
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE4 library for face recognition

.include "${.CURDIR}/../digikam-kde4/Makefile.common"

LIB_DEPENDS=	opencv_legacy:${PORTSDIR}/graphics/opencv

post-patch:
	${REINPLACE_CMD} -e '/pkgconfig/s|$${LIB_INSTALL_DIR}|libdata|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
