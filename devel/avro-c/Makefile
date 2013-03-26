# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: devel/avro-c/Makefile 314960 2013-03-22 20:06:14Z makc $

PORTNAME=	avro
PORTVERSION=	1.7.3
CATEGORIES=	devel
MASTER_SITES=	APACHE
MASTER_SITE_SUBDIR=	${PORTNAME}/stable
PKGNAMESUFFIX=	-c
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Data serialization system for ANSI C

USES=		cmake
USE_LDCONFIG=	yes
USE_PKGCONFIG=	yes

WRKSRC=		${WRKDIR}/${DISTNAME}/lang/c

.include <bsd.port.pre.mk>
pre-configure:
	@${REINPLACE_CMD} 's|/bin/bash|/bin/sh|g' \
		${WRKSRC}/version.sh

.include <bsd.port.post.mk>
