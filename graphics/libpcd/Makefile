# New ports collection makefile for:	libpcd
# Date created:		2004-08-23
# Whom:			Andrey Slusar <anray@FreeBSD.org>
#
# $FreeBSD: graphics/libpcd/Makefile 300896 2012-07-14 13:54:48Z beat $
#

PORTNAME=	libpcd
PORTVERSION=	1.0.1
CATEGORIES=	graphics
MASTER_SITES=	http://www.kraxel.org/releases/libpcd/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A library for reading PhotoCD images

WRKSRC=		${WRKDIR}/${DISTNAME:S/_/-/}

USE_GMAKE=	yes
MAKEFILE=	${WRKSRC}/GNUmakefile
USE_LDCONFIG=	yes

.include <bsd.port.mk>
