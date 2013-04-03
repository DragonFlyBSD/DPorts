# $FreeBSD: ports/devel/hs-lazysmallcheck/Makefile,v 1.15 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	lazysmallcheck
PORTVERSION=	0.6
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A library for demand-driven testing of Haskell programs

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

INSTALL_PORTEXAMPLES=	cd ${WRKSRC}/examples && ${COPYTREE_SHARE} \* ${EXAMPLESDIR}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
