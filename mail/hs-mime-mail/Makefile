# $FreeBSD: mail/hs-mime-mail/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	mime-mail
PORTVERSION=	0.4.1.2
PORTREVISION=	2
CATEGORIES=	mail haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Compose MIME email messages

LICENSE=	BSD

USE_CABAL=	base64-bytestring>=0.1 blaze-builder>=0.2.1 random>=1.0 \
		text>=0.7

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
