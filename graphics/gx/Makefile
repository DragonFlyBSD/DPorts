# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: graphics/gx/Makefile 326129 2013-09-03 08:49:46Z bapt $

PORTNAME=	gx
PORTVERSION=	0.4.0
PORTREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	http://perticone.homelinux.net/sergio/c++/gx/src/ CENKES

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lightweight image viewer

LIB_DEPENDS=	gtkmm-2.4.1:${PORTSDIR}/x11-toolkits/gtkmm24 \
		gnomevfsmm-2.6.1:${PORTSDIR}/devel/gnome-vfsmm \
		gconfmm-2.6.1:${PORTSDIR}/devel/gconfmm26

USES=		gettext pkgconfig
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
