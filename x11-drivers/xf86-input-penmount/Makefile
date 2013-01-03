# New ports collection makefile for:	xf86-input-penmount
# Date Created:				17 Feb 2006
# Whom:					Florent Thoumie <flz@FreeBSD.org>
#
# $FreeBSD: ports/x11-drivers/xf86-input-penmount/Makefile,v 1.16 2012/11/17 06:03:25 svnexp Exp $
#

PORTNAME=	xf86-input-penmount
PORTVERSION=	${PEN_VERSION}
PORTREVISION=	${PEN_REVISION}
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org penmount input driver

XORG_CAT=	driver
USE_XORG=	xextproto videoproto
MAN4=		penmount.4x

.if defined(WITH_NEW_XORG)
PEN_VERSION=	1.5.0
PEN_REVISION=	0
.else
PEN_VERSION=	1.4.1
PEN_REVISION=	1
.endif

.include <bsd.port.mk>
