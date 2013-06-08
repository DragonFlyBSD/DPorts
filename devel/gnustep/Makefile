# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: devel/gnustep/Makefile 319406 2013-05-30 08:14:20Z miwi $

PORTNAME=	gnustep
PORTVERSION=	1.24.0
CATEGORIES=	devel lang gnustep
MASTER_SITES=	# empty
DISTFILES=	# empty
EXTRACT_ONLY=	# empty

MAINTAINER=	c.petrik.sosa@gmail.com
COMMENT=	Objective-C libraries based on the OpenStep standard


NO_BUILD=	yes
NO_INSTALL=	yes
USE_GNUSTEP=	yes
USE_GNUSTEP_BASE=	yes
USE_GNUSTEP_GUI=	yes
USE_GNUSTEP_BACK=	yes
.if !defined(WITH_GNUSTEP_SINGLE_BACKEND)
USE_GNUSTEP_XLIB=	yes
USE_GNUSTEP_LIBART=	yes
USE_GNUSTEP_CAIRO=	yes
.endif

.include <bsd.port.mk>
