# $FreeBSD: www/rubygem-gon/Makefile 331033 2013-10-20 16:07:22Z swills $

PORTNAME=	gon
PORTVERSION=	4.1.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Framework to pass data to JS easily

RUN_DEPENDS=	rubygem-actionpack>=0:${PORTSDIR}/www/rubygem-actionpack \
                rubygem-json>=0:${PORTSDIR}/devel/rubygem-json

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes

.include <bsd.port.mk>
