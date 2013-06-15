# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: www/rubygem-unicorn/Makefile 319804 2013-06-03 19:40:04Z swills $

PORTNAME=	unicorn
PORTVERSION=	4.6.2
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
