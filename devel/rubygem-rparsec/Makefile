# Created by: stas
# $FreeBSD: devel/rubygem-rparsec/Makefile 313317 2013-03-03 01:43:02Z swills $

PORTNAME=	rparsec
PORTVERSION=	1.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Recursive descent parser combinator framework for Ruby

DEPRECATED=	Does not work with Ruby 1.9
EXPIRATION_DATE=	2013-05-02

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not work with ruby 1.9
.endif
.include <bsd.port.post.mk>
