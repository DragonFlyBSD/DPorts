# $FreeBSD: www/rubygem-webmock/Makefile 332058 2013-10-30 03:05:18Z swills $

PORTNAME=	webmock
PORTVERSION=	1.13.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Allows stubbing HTTP requests and setting expectations on the requests

RUN_DEPENDS=	rubygem-crack>=0.3.2:${PORTSDIR}/devel/rubygem-crack \
		rubygem-addressable>=2.2.7:${PORTSDIR}/www/rubygem-addressable

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
