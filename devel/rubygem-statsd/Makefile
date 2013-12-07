# Created by: Evan Sarmiento <bsdports@wayfair.com>
# $FreeBSD: devel/rubygem-statsd/Makefile 335643 2013-12-04 22:22:49Z sunpoet $

PORTNAME=	statsd
PORTVERSION=	0.5.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby port of the statsd python and node.js tools

RUN_DEPENDS=	rubygem-erubis>=2.6.6:${PORTSDIR}/www/rubygem-erubis \
		rubygem-eventmachine>=0.12.10:${PORTSDIR}/devel/rubygem-eventmachine \
		rubygem-mongo>=1.2.4:${PORTSDIR}/devel/rubygem-mongo

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/statsd

.include <bsd.port.mk>
