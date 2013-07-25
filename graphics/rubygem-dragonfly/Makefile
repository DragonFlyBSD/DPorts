# Created by: Jason Helfman <jgh@FreeBSD.org>
# $FreeBSD: graphics/rubygem-dragonfly/Makefile 322818 2013-07-12 07:12:34Z jgh $

PORTNAME=	dragonfly
PORTVERSION=	0.9.15
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	On-the-fly Rack-based image handling framework

RUN_DEPENDS+=	rubygem-rack>=0:${PORTSDIR}/www/rubygem-rack \
		rubygem-multi_json>=1.0:${PORTSDIR}/devel/rubygem-multi_json


USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
