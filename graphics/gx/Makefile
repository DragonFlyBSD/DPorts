# New ports collection makefile for:	gx
# Date created:		11 June 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/graphics/gx/Makefile,v 1.9 2012/11/17 05:58:09 svnexp Exp $
#

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

USE_GETTEXT=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
