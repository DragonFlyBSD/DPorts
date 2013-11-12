# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: devel/rubygem-json_pure/Makefile 332038 2013-10-30 02:36:45Z swills $

PORTNAME=	json_pure
PORTVERSION=	1.7.7
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Parse JSON texts and generate them from ruby data structures in Ruby

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

.if ${RUBY_VER} < 1.9
RUN_DEPENDS+=           ${DEPEND_RUBY_ICONV}
.endif

.include <bsd.port.post.mk>
