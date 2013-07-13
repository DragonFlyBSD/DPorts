# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: x11-toolkits/pure-gtk/Makefile 322933 2013-07-13 14:04:36Z bapt $

PORTNAME=	pure-gtk
PORTVERSION=	0.11
CATEGORIES=	x11-toolkits

MAINTAINER=	lichray@gmail.com
COMMENT=	A set of Pure language bindings for GTK+

LIB_DEPENDS=	cairo:${PORTSDIR}/graphics/cairo

USE_PURE=	ffi
USE_GNOME=	glib20 gtk20 atk pango

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
