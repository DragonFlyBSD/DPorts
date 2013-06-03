# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: devel/rubygem-json/Makefile 319593 2013-06-01 21:22:45Z swills $

PORTNAME=	json
PORTVERSION=	1.8.0
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
