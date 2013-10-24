# $FreeBSD: net/rubygem-omniauth-github/Makefile 331081 2013-10-21 01:59:58Z swills $

PORTNAME=	omniauth-github
PORTVERSION=	1.1.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Official OmniAuth strategy for GitHub

RUN_DEPENDS=	rubygem-omniauth-oauth2>=1.1:${PORTSDIR}/net/rubygem-omniauth-oauth2 \
		rubygem-omniauth>=1.0:${PORTSDIR}/security/rubygem-omniauth

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes

.include <bsd.port.mk>
