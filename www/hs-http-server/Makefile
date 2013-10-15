# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: www/hs-http-server/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	http-server
PORTVERSION=	1.0.2
PORTREVISION=	1
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Library for writing Haskell web servers

LICENSE=	BSD

USE_CABAL=	HTTP>=4000.2.0 mime>=0.3 network>=2 url>=2 utf8-string>=0.3.4

INSTALL_PORTEXAMPLES=	cd ${WRKSRC}/example && \
			  ${COPYTREE_SHARE} \* ${EXAMPLESDIR}

OPTIONS_DEFINE=		EXAMPLES
OPTIONS_DEFAULT=	EXAMPLES

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.options.mk"

.if ${PORT_OPTIONS:MEXAMPLES}
SUB_FILES=	pkg-message
SHOW_PKGMSG=	yes
.endif

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
