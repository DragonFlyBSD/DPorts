# $FreeBSD: math/eigen3/Makefile 333416 2013-11-10 17:46:39Z rakuco $

PORTNAME=	eigen
PORTVERSION=	3.2.0
CATEGORIES=	math
MASTER_SITES=	https://bitbucket.org/${PORTNAME}/${PORTNAME}/get/
DISTNAME=	${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Lightweight library for vector and matrix math

LICENSE=	LGPL21 MPL
LICENSE_COMB=	multi

USE_BZIP2=	yes
USES=		cmake:outsource
CMAKE_ENV+=	PKG_CONFIG_LIBDIR="${LOCALBASE}/libdata"
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTNAME}-ffa86ffb5570

.include <bsd.port.mk>
