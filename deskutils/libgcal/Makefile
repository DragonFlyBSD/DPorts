# Created by: Troels Kofoed Jacobsen <tkjacobsen@gmail.com>
# $FreeBSD: deskutils/libgcal/Makefile 336352 2013-12-13 15:03:31Z bapt $

PORTNAME=	libgcal
PORTVERSION=	0.9.6
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library allowing communication with Google calendar and contacts

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcurl.so:${PORTSDIR}/ftp/curl \
		libxml2.so:${PORTSDIR}/textproc/libxml2

USE_BZIP2=	yes
USES=		cmake iconv
CMAKE_ARGS=	-DLIB_INSTALL_DIR="${LOCALBASE}/lib" \
		-DENABLE_TESTS=OFF
USE_LDCONFIG=	yes

.include <bsd.port.mk>
