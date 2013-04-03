# Created by: Volker Stolz <stolz@i2.informatik.rwth-aachen.de>
# $FreeBSD: ports/devel/hs-alex/Makefile,v 1.41 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	alex
PORTVERSION=	3.0.2
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Alex is a tool for generating lexical analysers in Haskell

LICENSE=	BSD

USE_CABAL=	QuickCheck>=2

XMLDOCS=	doc/alex:html
USE_AUTOTOOLS=	autoconf:env

STANDALONE=	yes
EXECUTABLE=	alex

INSTALL_PORTEXAMPLES=	cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${EXAMPLESDIR}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
