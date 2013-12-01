# $FreeBSD: devel/rubygem-redis-activesupport/Makefile 335330 2013-11-30 18:29:53Z sunpoet $

PORTNAME=	redis-activesupport
PORTVERSION=	4.0.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis store for ActiveSupport::Cache

LICENSE=	MIT

RUN_DEPENDS=	rubygem-activesupport4>=4.0.0:${PORTSDIR}/devel/rubygem-activesupport4 \
		rubygem-redis-store>=1.1.0:${PORTSDIR}/devel/rubygem-redis-store

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
