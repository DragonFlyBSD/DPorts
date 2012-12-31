# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/math/R-cran-igraph/Makefile,v 1.23 2012/11/17 05:59:18 svnexp Exp $

PORTNAME=	igraph
DISTVERSION=	0.6-3
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R extension package for igraph

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

.if ${ARCH} == "sparc64"
BROKEN=		Does not compile on sparc64: uses i386 assembler
.endif

.include <bsd.port.post.mk>
