# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: graphics/R-cran-munsell/Makefile 335044 2013-11-27 18:56:43Z dbn $

PORTNAME=	munsell
PORTVERSION=	0.4.2
PORTREVISION=	2
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Munsell colour system

LICENSE=	MIT CW
LICENSE_COMB=	multi
LICENSE_NAME_CW=	Charlotte Wickham COPYRIGHT
LICENSE_FILE_CW=	${WRKSRC}/LICENSE
LICENSE_PERMS_CW=	auto-accept

RUN_DEPENDS=	R-cran-colorspace>0:${PORTSDIR}/graphics/R-cran-colorspace

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
