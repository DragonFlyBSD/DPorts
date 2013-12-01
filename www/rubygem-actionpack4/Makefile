# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: www/rubygem-actionpack4/Makefile 335327 2013-11-30 18:29:40Z sunpoet $

PORTNAME=	actionpack
PORTVERSION=	4.0.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Action Controller and Action View of Rails MVC Framework

LICENSE=	MIT

RUN_DEPENDS=	rubygem-activesupport4>=${PORTVERSION}:${PORTSDIR}/devel/rubygem-activesupport4 \
		rubygem-builder31>=3.1.0:${PORTSDIR}/devel/rubygem-builder31 \
		rubygem-erubis>=2.7.0:${PORTSDIR}/www/rubygem-erubis \
		rubygem-rack15>=1.5.2:${PORTSDIR}/www/rubygem-rack15 \
		rubygem-rack-test>=0.6.2:${PORTSDIR}/www/rubygem-rack-test

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
