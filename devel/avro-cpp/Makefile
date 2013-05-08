# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: devel/avro-cpp/Makefile 317418 2013-05-05 14:42:01Z rakuco $

PORTNAME=	avro
PORTVERSION=	1.7.4
CATEGORIES=	devel
MASTER_SITES=	http://www.sai.msu.su/apache/${PORTNAME}/${PORTNAME}-${PORTVERSION}/ \
		APACHE
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
