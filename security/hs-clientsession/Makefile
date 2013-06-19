# $FreeBSD: security/hs-clientsession/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	clientsession
PORTVERSION=	0.9
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Securely store session data in a client-side cookie

LICENSE=	BSD

USE_CABAL=	base64-bytestring>=0.1.1.1 cereal>=0.3 cipher-aes>=0.1.7 \
		cprng-aes>=0.2 crypto-api>=0.8 entropy>=0.2.1 skein \
		tagged>=0.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
