# Created by: Koichiro IWAO <meta+ports@vmeta.jp>
# $FreeBSD: security/rubygem-jugyo-twitter_oauth/Makefile 340904 2014-01-24 14:53:03Z miwi $

PORTNAME=	jugyo-twitter_oauth
DISTVERSION=	0.5.0.pre5
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	meta+ports@vmeta.jp
COMMENT=	A fork of Twitter OAuth REST API client library for Ruby

RUN_DEPENDS=	rubygem-json>=1.1.9:${PORTSDIR}/devel/rubygem-json \
		rubygem-mime-types>=1.16:${PORTSDIR}/misc/rubygem-mime-types \
		rubygem-oauth>=0.4.1:${PORTSDIR}/net/rubygem-oauth

USE_RUBY=	yes
USE_RUBYGEMS=	yes
GEM_NAME=	${PORTNAME}-${DISTVERSION}
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
