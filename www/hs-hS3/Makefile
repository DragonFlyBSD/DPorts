# $FreeBSD: www/hs-hS3/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	hS3
PORTVERSION=	0.5.7
PORTREVISION=	2
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Interface to Amazon's Simple Storage Service (S3)

LICENSE=	BSD

USE_CABAL=	Crypto>=4.1.0 dataenc HTTP>=4000.0.0 hxt>=9.0.0 \
		MissingH>=0.18.6 network random regex-compat utf8-string

EXECUTABLE=	hs3

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
