# New ports collection makefile for:	rubygem-getopt-declare
# Date created:		2011-06-02
# Whom:			Romain Tartiere <romain@FreeBSD.org>
#
# $FreeBSD: ports/devel/rubygem-getopt-declare/Makefile,v 1.3 2012/11/17 05:56:59 svnexp Exp $
#

PORTNAME=	getopt-declare
PORTVERSION=	1.29
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	romain@FreeBSD.org
COMMENT=	Declaratively Expressed Command-Line Arguments via Regular Expressions

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

# Workaround weird files permissions
post-install:
	@${FIND} ${PREFIX}/${GEM_LIB_DIR} -type f -exec ${CHMOD} 644 '{}' ';'

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not work with ruby 1.9
.endif
.include <bsd.port.post.mk>
