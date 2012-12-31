# New ports collection makefile for:	xanim
# Date created:         Sat Nov 5 11:43:03 PST 1994
# Whom:                 Rod Taylor
#
# $FreeBSD: ports/multimedia/gxanim/Makefile,v 1.20 2012/11/17 05:59:49 svnexp Exp $
#

PORTNAME=	gxanim
PORTVERSION=	0.50
PORTREVISION=	5
CATEGORIES=	multimedia
MASTER_SITES=	http://www.rswarren.com/code/
DISTNAME=	GXAnim-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphical front end to Xanim

RUN_DEPENDS=	xanim:${PORTSDIR}/multimedia/xanim

PLIST_FILES=	bin/gxanim
WRKSRC=	${WRKDIR}/gxanim-${PORTVERSION}

USE_BZIP2=	yes
USE_GNOME=	gtk12

.include <bsd.port.mk>
