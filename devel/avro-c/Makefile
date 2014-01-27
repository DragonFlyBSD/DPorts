# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: devel/avro-c/Makefile 340569 2014-01-21 08:07:15Z bapt $

PORTNAME=	avro
PORTVERSION=	1.7.3
CATEGORIES=	devel
MASTER_SITES=	APACHE
MASTER_SITE_SUBDIR=	${PORTNAME}/stable
PKGNAMESUFFIX=	-c
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Data serialization system for ANSI C

USES=		cmake pkgconfig
USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}/${DISTNAME}/lang/c

pre-configure:
	@${REINPLACE_CMD} 's|/bin/bash|/bin/sh|g' \
		${WRKSRC}/version.sh

.include <bsd.port.mk>
