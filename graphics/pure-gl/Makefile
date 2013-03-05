# New ports collection makefile for:	pure-gtk
# Date created:		2011-03-18
# Whom:			Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: ports/graphics/pure-gl/Makefile,v 1.4 2012/11/17 05:58:19 svnexp Exp $
#

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

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/lang/pure/bsd.pure.mk"
.include <bsd.port.post.mk>
