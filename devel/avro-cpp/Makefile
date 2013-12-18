# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: devel/avro-cpp/Makefile 336253 2013-12-12 10:53:38Z bapt $

PORTNAME=	avro
PORTVERSION=	1.7.4
CATEGORIES=	devel
MASTER_SITES=	http://www.sai.msu.su/apache/${PORTNAME}/${PORTNAME}-${PORTVERSION}/ \
		APACHE
MASTER_SITE_SUBDIR=	${PORTNAME}/stable
PKGNAMESUFFIX=	-cpp
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Data serialization system for C++

LIB_DEPENDS=	libboost_regex.so:${PORTSDIR}/devel/boost-libs

USES=		cmake
USE_LDCONFIG=	yes
USE_PYTHON=	yes

WRKSRC=		${WRKDIR}/${DISTNAME}/lang/c++

NO_STAGE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|COMMAND python|COMMAND "${PYTHON_CMD}"|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
