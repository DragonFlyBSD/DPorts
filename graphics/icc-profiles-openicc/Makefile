# $FreeBSD: ports/graphics/icc-profiles-openicc/Makefile,v 1.1 2013/02/15 15:58:57 svnexp Exp $

PORTNAME=	icc-profiles-openicc
PORTVERSION=	1.3.1
CATEGORIES=	graphics
MASTER_SITES=	SF/openicc/OpenICC-Profiles

COMMENT=	Color data for color managed applications

MAINTAINER=	bsam@FreeBSD.org

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
#USE_GMAKE=	yes

SYSCOLORDIR=	share/color
PLIST_SUB=	SYSCOLORDIR=${SYSCOLORDIR}

.include <bsd.port.mk>
