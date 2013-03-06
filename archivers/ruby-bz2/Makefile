# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: archivers/ruby-bz2/Makefile 313317 2013-03-03 01:43:02Z swills $

PORTNAME=	bz2
PORTVERSION=	0.2.2
PORTREVISION=	2
CATEGORIES=	archivers ruby
MASTER_SITES=	ftp://moulon.inra.fr/pub/ruby/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby extension to use libbz2

DEPRECATED=	Does not work with Ruby 1.9
EXPIRATION_DATE=	2013-05-02

USE_RUBY=	yes
USE_RUBY_EXTCONF=	yes

INSTALL_TARGET=	site-install

.include <bsd.port.pre.mk>

.if ${RUBY_VER} == 1.9
BROKEN=		does not build with ruby ${RUBY_VER}
.endif

.include <bsd.port.post.mk>
