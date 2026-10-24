PORTNAME=	astron
PORTVERSION=	0.0.20200521
PORTREVISION=	3
CATEGORIES=	net

MAINTAINER=	nc@FreeBSD.org
COMMENT=	Server Technology for Realtime Object Networking
WWW=		https://astron.github.io/astron

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	boost-libs>0:devel/boost-libs
LIB_DEPENDS=	libuv.so:devel/libuv \
		libyaml-cpp.so:devel/yaml-cpp

USES=		cmake
USE_GITHUB=	yes
GH_ACCOUNT=	Astron
GH_PROJECT=	${GH_ACCOUNT}
GH_TAGNAME=	c8ba982

PLIST_FILES=	bin/astrond

dfly-patch:
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
