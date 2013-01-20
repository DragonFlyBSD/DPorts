# New ports collection makefile for:	Ruby replacement for json
# Date created:		Jul 9, 2007
# Whom:			Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/devel/rubygem-json/Makefile,v 1.31 2013/01/09 04:43:42 svnexp Exp $
#

PORTNAME=	json
PORTVERSION=	1.7.6
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Parse JSON texts and generate them from ruby data structures

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

.if ${RUBY_VER} < 1.9
RUN_DEPENDS+=	${DEPEND_RUBY_ICONV}
.endif

.include <bsd.port.post.mk>
