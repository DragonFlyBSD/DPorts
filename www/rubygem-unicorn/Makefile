# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: www/rubygem-unicorn/Makefile 332058 2013-10-30 03:05:18Z swills $

PORTNAME=	unicorn
PORTVERSION=	4.6.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Unicorn is an HTTP server for Rack applications

RUN_DEPENDS=	rubygem-rack>=0:${PORTSDIR}/www/rubygem-rack \
		rubygem-kgio>=2.6:${PORTSDIR}/devel/rubygem-kgio \
		rubygem-raindrops>=0.7:${PORTSDIR}/www/rubygem-raindrops

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/unicorn bin/unicorn_rails

.include <bsd.port.mk>
