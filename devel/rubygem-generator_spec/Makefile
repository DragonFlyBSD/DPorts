# $FreeBSD: devel/rubygem-generator_spec/Makefile 331542 2013-10-25 01:38:47Z swills $

PORTNAME=	generator_spec
PORTVERSION=	0.9.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Test Rails generators with RSpec

RUN_DEPENDS=	rubygem-activerecord>=3.0:${PORTSDIR}/databases/rubygem-activerecord \
		rubygem-railties>=0:${PORTSDIR}/www/rubygem-railties

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes

.include <bsd.port.mk>
