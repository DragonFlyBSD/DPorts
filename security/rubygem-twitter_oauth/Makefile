# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: security/rubygem-twitter_oauth/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	twitter_oauth
PORTVERSION=	0.4.94
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Twitter OAuth REST API client library for Ruby

RUN_DEPENDS=	rubygem-json>=1.8.0:${PORTSDIR}/devel/rubygem-json \
		rubygem-mime-types>=1.16:${PORTSDIR}/misc/rubygem-mime-types \
		rubygem-oauth>=0.4.7:${PORTSDIR}/net/rubygem-oauth

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
