# New ports collection makefile for:	pure-gtk
# Date created:		2011-03-18
# Whom:			Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: ports/x11-toolkits/pure-gtk/Makefile,v 1.8 2012/11/17 06:03:38 svnexp Exp $
#

PORTNAME=	pure-gtk
PORTVERSION=	0.11
CATEGORIES=	x11-toolkits

MAINTAINER=	lichray@gmail.com
COMMENT=	A set of Pure language bindings for GTK+

LIB_DEPENDS=	cairo:${PORTSDIR}/graphics/cairo

USE_PURE=	ffi
USE_GNOME=	glib20 gtk20 atk pango

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/lang/pure/bsd.pure.mk"
.include <bsd.port.post.mk>
