# $FreeBSD: textproc/hs-attoparsec-enumerator/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	attoparsec-enumerator
PORTVERSION=	0.3.1
PORTREVISION=	4
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Pass input from an enumerator to an Attoparsec parser

LICENSE=	MIT

USE_CABAL=	attoparsec>=0.10 enumerator>=0.4 text

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
