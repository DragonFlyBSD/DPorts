# Created by: wenheping <wenheping@gmail.com>
# $FreeBSD: net/rubygem-oauth/Makefile 319736 2013-06-03 00:38:33Z swills $

PORTNAME=	oauth
PORTVERSION=	0.4.7
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Rubygem for Creating both OAuth Consumers and Service Providers

RUN_DEPENDS=	${RUBY_PKGNAMEPREFIX}hmac>=0.3.2:${PORTSDIR}/security/ruby-hmac

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=		bin/oauth

.include <bsd.port.mk>
