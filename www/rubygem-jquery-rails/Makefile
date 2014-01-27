# Created by: Jason Helfman <jgh@FreeBSD.org>
# $FreeBSD: www/rubygem-jquery-rails/Makefile 340547 2014-01-21 03:48:40Z swills $

PORTNAME=	jquery-rails
PORTVERSION=	3.0.4
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Provides a rails generator for jquery

RUN_DEPENDS+=	rubygem-railties>=3.2.10:${PORTSDIR}/www/rubygem-railties \
		rubygem-thor>=0.16:${PORTSDIR}/devel/rubygem-thor

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
