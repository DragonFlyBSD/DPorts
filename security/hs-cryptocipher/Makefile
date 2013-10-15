# $FreeBSD: security/hs-cryptocipher/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	cryptocipher
PORTVERSION=	0.5.0
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Symmetrical Block, Stream, and PubKey Ciphers

LICENSE=	BSD

USE_CABAL=	cereal cipher-aes cipher-rc4 cpu>=0.1 crypto-api>=0.5 \
		primitive vector>=0.7

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
