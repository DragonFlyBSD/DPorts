# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: math/R-cran-igraph/Makefile 334638 2013-11-23 06:02:14Z tota $

PORTNAME=	igraph
DISTVERSION=	0.6.6
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R extension package for igraph

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${ARCH} == "sparc64"
BROKEN=		Does not compile on sparc64: uses i386 assembler
.endif

.include <bsd.port.post.mk>
