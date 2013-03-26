# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: textproc/clucene/Makefile 314960 2013-03-22 20:06:14Z makc $

PORTNAME=	clucene
PORTVERSION=	2.3.3.4
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-core-unstable/2.3
DISTNAME=	${PORTNAME}-core-${PORTVERSION}

MAINTAINER=	office@FreeBSD.org
COMMENT=	CLucene is a C++ port of Lucene

LICENSE=	AL2 LGPL21
LICENSE_COMB=	dual

BUILD_DEPENDS=	${LOCALBASE}/lib/libboost_regex.a:${PORTSDIR}/devel/boost-libs

USES=		cmake
USE_ICONV=	yes
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DBUILD_CONTRIBS_LIB=ON
CXXFLAGS+=	-D__LONG_LONG_SUPPORTED

.include <bsd.port.mk>
