# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: math/ruby-narray/Makefile 327746 2013-09-20 20:55:04Z bapt $

PORTNAME=	narray
PORTVERSION=	0.6.0.1
CATEGORIES=	math ruby
MASTER_SITES=	RF
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Numerical N-dimensional array library for Ruby

LIB_DEPENDS=	fftw.2:${PORTSDIR}/math/fftw

USE_RUBY=	yes
USE_RUBY_EXTCONF=	yes

INSTALL_TARGET=	site-install

DOC_EN=		ChangeLog	README.en	SPEC.en
DOC_JA=		README.ja	SPEC.ja

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODDOCDIR}/ja
.for f in ${DOC_EN}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/
.endfor
.for f in ${DOC_JA}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/ja/
.endfor
.endif

.include <bsd.port.mk>
