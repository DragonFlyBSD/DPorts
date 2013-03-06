# New ports collection makefile for:	bbrb
# Date created:				19 February 2002
# Whom:					Dan Peck <peckdani@msu.edu>
#
# $FreeBSD: ports/graphics/bbrb/Makefile,v 1.17 2012/11/17 05:58:01 svnexp Exp $
#

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

.include <bsd.port.mk>
