# $FreeBSD: devel/rubygem-simplecov/Makefile 331791 2013-10-27 17:58:57Z sunpoet $

PORTNAME=	simplecov
PORTVERSION=	0.7.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Powerful configuration library and automatic merging of coverage across test suites

LICENSE=	MIT

RUN_DEPENDS=	rubygem-multi_json>=1.0:${PORTSDIR}/devel/rubygem-multi_json \
		rubygem-simplecov-html>=0.7.1:${PORTSDIR}/textproc/rubygem-simplecov-html

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
