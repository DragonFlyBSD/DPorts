# Ports collection makefile for:	rubygem-jquery-rails
# Date created:				13 January 2011
# Whom:					Jason Helfman <jhelfman@experts-exchange.com>
#
# $FreeBSD: ports/www/rubygem-jquery-rails/Makefile,v 1.11 2012/11/17 06:03:04 svnexp Exp $

PORTNAME=	jquery-rails
PORTVERSION=	2.1.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Provides a rails generator for jquery

RUN_DEPENDS+=	rubygem-railties>=3.2.0:${PORTSDIR}/www/rubygem-railties \
		rubygem-thor>=0.14:${PORTSDIR}/devel/rubygem-thor

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
