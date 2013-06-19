# $FreeBSD: devel/hs-terminfo/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	terminfo
PORTVERSION=	0.3.2.5
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell bindings to the terminfo library

LICENSE=	BSD

USES=		ncurses

CONFIGURE_ARGS+=	--configure-option=--with-curses-includes=${NCURSESINC} \
			--configure-option=--with-curses-libraries=${NCURSESLIB}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
