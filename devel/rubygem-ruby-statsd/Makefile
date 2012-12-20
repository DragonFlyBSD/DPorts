# New ports collection makefile for:	rubygem-statsd
# Date created:		Feburary 18 2012
# Whom:			Evan Sarmiento <bsdports@wayfair.com>
#
# $FreeBSD: ports/devel/rubygem-ruby-statsd/Makefile,v 1.3 2012/11/17 05:57:01 svnexp Exp $
#

PORTNAME=	statsd
PORTVERSION=	0.5.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby port of the statsd python and node.js tools

RUN_DEPENDS=	rubygem-eventmachine>=0.12.10:${PORTSDIR}/devel/rubygem-eventmachine \
		rubygem-mongo>=1.2.4:${PORTSDIR}/devel/rubygem-mongo \
		rubygem-erubis>=2.6.6:${PORTSDIR}/www/rubygem-erubis

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/statsd

.include <bsd.port.mk>
