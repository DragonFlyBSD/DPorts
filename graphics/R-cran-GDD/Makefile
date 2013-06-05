# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: graphics/R-cran-GDD/Makefile 319316 2013-05-28 15:15:05Z bf $

PORTNAME=	GDD
DISTVERSION=	0.1-13.1
PORTREVISION=	4
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Graphics device for R for creating bitmap output

LICENSE=	GPLv2

BUILD_DEPENDS=	gd>=2.0.35_8,1:${PORTSDIR}/graphics/gd
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
