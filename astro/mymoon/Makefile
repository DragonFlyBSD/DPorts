# New ports collection makefile for:	mymoon
# Date created:				24 May 2003
# Whom:					Kirill Ponomarew <ponomarew@oberon.net>
#
# $FreeBSD: ports/astro/mymoon/Makefile,v 1.17 2012/11/17 05:54:25 svnexp Exp $
#

PORTNAME=	mymoon
DISTVERSION=	1.2a
PORTREVISION=	5
CATEGORIES=	astro
MASTER_SITES=	http://makemebad.net/geek/codes/${PORTNAME}/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	krion

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Show latitude and longitude of the moon

LIB_DEPENDS=	nova:${PORTSDIR}/astro/libnova

WRKSRC=		${WRKDIR}/${PORTNAME}

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/mymoon

.include <bsd.port.mk>
