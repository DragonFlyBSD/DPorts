# Created by: Roman Shterenzon <romanbsd@yahoo.com>
# $FreeBSD: devel/rubygem-rspec/Makefile 326695 2013-09-07 21:36:32Z sunpoet $

PORTNAME=	rspec
PORTVERSION=	2.14.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	romanbsd@yahoo.com
COMMENT=	Behaviour Driven Development in Ruby

RUN_DEPENDS=	rubygem-rspec-core>=${PORTVERSION:R}:${PORTSDIR}/devel/rubygem-rspec-core \
		rubygem-rspec-expectations>=${PORTVERSION:R}:${PORTSDIR}/devel/rubygem-rspec-expectations \
		rubygem-rspec-mocks>=${PORTVERSION:R}:${PORTSDIR}/devel/rubygem-rspec-mocks

USE_RUBY=	yes
USE_RAKE=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
