# Ports collection makefile for:	rubygem-sprockets
# Date created:				31 July 2011
# Whom:					Mikhail T. <m.tsatsenko@gmail.com>
#
# $FreeBSD: ports/devel/rubygem-sprockets/Makefile,v 1.7 2012/11/17 05:57:01 svnexp Exp $
#

PORTNAME=	sprockets
PORTVERSION=	2.1.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library that preprocesses and concatenates JavaScript files

LICENSE=	MIT

RUN_DEPENDS=	rubygem-tilt>=1.1:${PORTSDIR}/devel/rubygem-tilt \
		rubygem-hike>=1.2:${PORTSDIR}/devel/rubygem-hike \
		rubygem-rack>=1.0:${PORTSDIR}/www/rubygem-rack

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
