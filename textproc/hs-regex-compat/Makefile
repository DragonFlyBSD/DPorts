# $FreeBSD: ports/textproc/hs-regex-compat/Makefile,v 1.8 2013/02/05 22:47:14 svnexp Exp $

PORTNAME=	regex-compat
PORTVERSION=	0.95.1
PORTREVISION=	4
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Replaces/Enhances Text.Regex

LICENSE=	BSD

CABAL_SETUP=	Setup.hs
USE_CABAL=	regex-base>=0.93 regex-posix>=0.95.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
