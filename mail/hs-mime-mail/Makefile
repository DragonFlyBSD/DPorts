# $FreeBSD: mail/hs-mime-mail/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	mime-mail
PORTVERSION=	0.4.1.2
PORTREVISION=	4
CATEGORIES=	mail haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Compose MIME email messages

LICENSE=	BSD

USE_CABAL=	base64-bytestring>=0.1 blaze-builder>=0.2.1 random>=1.0 \
		text>=0.7

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
