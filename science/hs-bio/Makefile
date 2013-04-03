# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: ports/science/hs-bio/Makefile,v 1.15 2013/02/05 22:47:13 svnexp Exp $

PORTNAME=	bio
PORTVERSION=	0.5.2
PORTREVISION=	3
CATEGORIES=	science haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A bioinformatics library

LICENSE=	LGPL21

CABAL_SETUP=	Setup.hs

USE_CABAL=	mtl parallel parsec QuickCheck>=2 tagsoup>=0.8

EXECUTABLE=	fastout flowclip flx frecover frename orf rselect-pe

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
