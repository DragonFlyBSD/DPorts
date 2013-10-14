# $FreeBSD: net/libmediawiki/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	libmediawiki
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	net kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE4 library for accessing MediaWiki sites

NO_STAGE=	yes
.include "${.CURDIR}/../../graphics/digikam-kde4/Makefile.common"

USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e '/pkgconfig/s|$${LIB_INSTALL_DIR}|libdata|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
