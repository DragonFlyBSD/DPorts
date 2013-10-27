# $FreeBSD: devel/rubygem-redis-activesupport/Makefile 331453 2013-10-24 02:31:13Z swills $

PORTNAME=	redis-activesupport
PORTVERSION=	4.0.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis store for ActiveSupport::Cache

RUN_DEPENDS=	rubygem-activesupport4>=4.0.0:${PORTSDIR}/devel/rubygem-activesupport4 \
		rubygem-redis-store>=1.1.0:${PORTSDIR}/devel/rubygem-redis-store

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes

.include <bsd.port.mk>
