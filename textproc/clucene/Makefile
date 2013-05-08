# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: textproc/clucene/Makefile 316683 2013-04-27 18:25:24Z mva $

PORTNAME=	clucene
PORTVERSION=	2.3.3.4
PORTREVISION=	2
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-core-unstable/2.3
DISTNAME=	${PORTNAME}-core-${PORTVERSION}

MAINTAINER=	office@FreeBSD.org
COMMENT=	CLucene is a C++ port of Lucene

LICENSE=	AL2 LGPL21
LICENSE_COMB=	dual

BUILD_DEPENDS=	${LOCALBASE}/lib/libboost_regex.a:${PORTSDIR}/devel/boost-libs

USES=		cmake iconv
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DBUILD_CONTRIBS_LIB=ON
CXXFLAGS+=	-D__LONG_LONG_SUPPORTED

post-patch:
	@${REINPLACE_CMD} -e 's|%%DATADIR%%|${DATADIR_REL}|' \
	    ${WRKSRC}/src/core/CMakeLists.txt

.include <bsd.port.mk>
