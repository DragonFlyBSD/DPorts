# $FreeBSD: www/rubygem-lighthouse-api/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	lighthouse-api
PORTVERSION=	2.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby interface for lighthouse ticketing system

RUN_DEPENDS+=	rubygem-activesupport>=3.0.0:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-activeresource>=3.0.0:${PORTSDIR}/www/rubygem-activeresource

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
