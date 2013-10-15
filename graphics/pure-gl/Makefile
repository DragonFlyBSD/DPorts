# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: graphics/pure-gl/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	pure-gl
PORTVERSION=	0.8
PORTREVISION=	2
CATEGORIES=	graphics

MAINTAINER=	lichray@gmail.com
COMMENT=	Pure language interface to OpenGL

RUN_DEPENDS+=	${LOCALBASE}/lib/pure/ffi.pure:${PORTSDIR}/devel/pure-ffi

USE_PURE=	yes
USE_GL=	glut

MAKE_ARGS+=	LinkGL="-lglut -lGLU -lGL"

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
