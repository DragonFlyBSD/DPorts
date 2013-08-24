# Created by: Tim Cas <ports@stdrand.com>
# $FreeBSD: devel/ChipmunkPhysics/Makefile 324744 2013-08-14 22:35:50Z ak $

PORTNAME=	ChipmunkPhysics
PORTVERSION=	6.1.5
CATEGORIES=	devel
MASTER_SITES=	http://chipmunk-physics.net/release/Chipmunk-6.x/ \
		http://files.libsiege.org/chipmunk/
DISTNAME=	Chipmunk-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@stdrand.com
COMMENT=	2D physics engine written in C

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		cmake
CMAKE_ARGS=	-DBUILD_DEMOS=OFF

USE_LDCONFIG=	yes

.include <bsd.port.mk>
