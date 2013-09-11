# Created by: Andrey Zakhvatov
# $FreeBSD: astro/openuniverse/Makefile 325648 2013-08-30 01:15:20Z bapt $

PORTNAME=	openuniverse
DISTVERSION=	1.0beta3
PORTREVISION=	8
CATEGORIES=	astro
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/1.0beta3

MAINTAINER=	ports@FreeBSD.org
COMMENT=	OpenGL Solar System simulator for X Window System

LIB_DEPENDS=	jpeg.11:${PORTSDIR}/graphics/jpeg

USE_GL=		glut

USES=		gmake
USE_XORG=	sm ice xmu xi xext x11
GNU_CONFIGURE=	yes

CONFIGURE_ARGS=	--includedir="${LOCALBASE}/include" \
		--libdir="${LOCALBASE}/lib" \

CONFIGURE_ENV=	LIBS="-lcompat"
CPPFLAGS+=	-I${LOCALBASE}/include/GL -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lm

.include <bsd.port.mk>
