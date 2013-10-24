# $FreeBSD: net/rubygem-omniauth-oauth2/Makefile 331079 2013-10-21 01:40:12Z swills $

PORTNAME=	omniauth-oauth2
PORTVERSION=	1.1.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Abstract OAuth2 strategy for OmniAuth

RUN_DEPENDS=	rubygem-oauth2>=0.8.0:${PORTSDIR}/net/rubygem-oauth2 \
		rubygem-omniauth>=1.0:${PORTSDIR}/security/rubygem-omniauth

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes

.include <bsd.port.mk>
