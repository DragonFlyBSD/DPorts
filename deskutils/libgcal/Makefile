# Created by: Troels Kofoed Jacobsen <tkjacobsen@gmail.com>
# $FreeBSD: deskutils/libgcal/Makefile 322783 2013-07-11 16:26:26Z sunpoet $

PORTNAME=	libgcal
PORTVERSION=	0.9.6
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library allowing communication with Google calendar and contacts

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl \
		iconv:${PORTSDIR}/converters/libiconv \
		xml2:${PORTSDIR}/textproc/libxml2

USE_BZIP2=	yes
USES=		cmake
CMAKE_ARGS=	-DLIB_INSTALL_DIR="${LOCALBASE}/lib" \
		-DENABLE_TESTS=OFF
USE_LDCONFIG=	yes
USE_GCC=	4.2+

.include <bsd.port.mk>
