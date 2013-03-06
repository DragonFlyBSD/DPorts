# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: devel/ruby-fam/Makefile 313317 2013-03-03 01:43:02Z swills $

PORTNAME=	fam
PORTVERSION=	0.2.0
PORTREVISION=	0
CATEGORIES=	devel ruby
MASTER_SITES=	http://www.pablotron.org/download/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-ruby-${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	FAM bindings for Ruby

DEPRECATED=	Does not work with Ruby 1.9
EXPIRATION_DATE=	2013-05-02

USE_RUBY=	yes
USE_RUBY_EXTCONF=yes
USE_FAM=	yes

INSTALL_TARGET=	site-install

DOCS=		README doc event_codes.txt

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODEXAMPLESDIR}
	${MKDIR} ${RUBY_MODDOCDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/* ${RUBY_MODEXAMPLESDIR}/
	@(cd ${WRKSRC}/ && ${COPYTREE_SHARE} "${DOCS}" ${RUBY_MODDOCDIR}/)
.endif

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not build with ruby 1.9
.endif
.include <bsd.port.post.mk>
