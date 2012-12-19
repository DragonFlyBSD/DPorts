# Ports collection makefile for:	rubygem-linecache
# Date created:				17 Oct 2008
# Whom:					Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/devel/rubygem-linecache/Makefile,v 1.6 2012/11/17 05:56:59 svnexp Exp $

PORTNAME=	linecache
PORTVERSION=	0.43
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Caches(Ruby source) Files as Might Be Used in a Debugger

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not work with ruby 1.9
.endif
.include <bsd.port.post.mk>
