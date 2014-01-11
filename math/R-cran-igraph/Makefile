# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: math/R-cran-igraph/Makefile 337846 2013-12-28 10:28:40Z dbn $

PORTNAME=	igraph
DISTVERSION=	0.6.6
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R extension package for igraph

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

USES=	cran:auto-plist

.include <bsd.port.pre.mk>

.if ${ARCH} == "sparc64"
BROKEN=		Does not compile on sparc64: uses i386 assembler
.endif

.include <bsd.port.post.mk>
