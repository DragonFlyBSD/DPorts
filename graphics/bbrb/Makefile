# Created by: Dan Peck <peckdani@msu.edu>
# $FreeBSD: graphics/bbrb/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	bbrb
PORTVERSION=	0.4.1
PORTREVISION=	9
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A graphical background manager for the Blackbox window manager

RUN_DEPENDS=	xv:${PORTSDIR}/graphics/xv \
		blackbox:${PORTSDIR}/x11-wm/blackbox

USE_GNOME=	imlib
GNU_CONFIGURE=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
