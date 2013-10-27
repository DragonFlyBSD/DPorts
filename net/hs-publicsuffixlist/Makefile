# $FreeBSD: net/hs-publicsuffixlist/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	publicsuffixlist
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Is a given string a domain suffix?

LICENSE=	BSD

USE_CABAL=	cereal data-default text>=0.11 utf8-string

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
