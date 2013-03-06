# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: ports/devel/rubygem-json/Makefile,v 1.32 2013/02/16 03:44:53 svnexp Exp $

PORTNAME=	json
PORTVERSION=	1.7.7
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
