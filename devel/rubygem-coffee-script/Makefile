# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/rubygem-coffee-script/Makefile 342237 2014-02-02 03:02:23Z swills $

PORTNAME=	coffee-script
PORTVERSION=	2.2.0
PORTREVISION=	2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby CoffeeScript is a bridge to the JS CoffeeScript compiler

LICENSE=	MIT

RUN_DEPENDS=	rubygem-coffee-script-source>=1.7.0:${PORTSDIR}/devel/rubygem-coffee-script-source \
		rubygem-execjs>=0:${PORTSDIR}/devel/rubygem-execjs

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
