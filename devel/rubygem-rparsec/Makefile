# Ports collection makefile for:	rubygem-rparsec
# Date created:				24 September 2008
# Whom:					stas
#
# $FreeBSD: ports/devel/rubygem-rparsec/Makefile,v 1.8 2012/11/17 05:57:01 svnexp Exp $

PORTNAME=	rparsec
PORTVERSION=	1.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Recursive descent parser combinator framework for Ruby

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not work with ruby 1.9
.endif
.include <bsd.port.post.mk>
