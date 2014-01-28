# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: graphics/gx/Makefile 340655 2014-01-21 20:38:23Z antoine $

PORTNAME=	gx
PORTVERSION=	0.4.0
PORTREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	http://perticone.homelinux.net/sergio/c++/gx/src/ CENKES

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lightweight image viewer

LIB_DEPENDS=	libgnomevfsmm-2.6.so:${PORTSDIR}/devel/gnome-vfsmm

USES=		gettext pkgconfig
USE_GNOME=	gconfmm26 gtkmm24
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
