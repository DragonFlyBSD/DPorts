# $FreeBSD: security/hs-pem/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	pem
PORTVERSION=	0.1.2
PORTREVISION=	3
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Privacy Enhanced Mail (PEM) format reader and writer

LICENSE=	BSD

USE_CABAL=	attoparsec base64-bytestring cereal mtl

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
