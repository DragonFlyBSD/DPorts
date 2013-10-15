# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: devel/R-cran-gdata/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	gdata
PORTVERSION=	2.13.2
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Various R programming tools for data manipulation

LICENSE=	GPLv2

RUN_DEPENDS=	R-cran-gtools>0:${PORTSDIR}/devel/R-cran-gtools

USES=		perl5
USE_PERL5=	run
USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
