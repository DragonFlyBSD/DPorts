# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: devel/avro-cpp/Makefile 314960 2013-03-22 20:06:14Z makc $

PORTNAME=	avro
PORTVERSION=	1.7.3
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	APACHE
MASTER_SITE_SUBDIR=	${PORTNAME}/stable
PKGNAMESUFFIX=	-cpp
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Data serialization system for C++

LIB_DEPENDS=	boost_regex:${PORTSDIR}/devel/boost-libs

USES=		cmake
USE_LDCONFIG=	yes
USE_PYTHON=	yes

WRKSRC=		${WRKDIR}/${DISTNAME}/lang/c++

.include <bsd.port.mk>
