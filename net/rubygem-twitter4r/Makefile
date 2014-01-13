# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: net/rubygem-twitter4r/Makefile 338273 2013-12-31 10:09:20Z sunpoet $

PORTNAME=	twitter4r
PORTVERSION=	0.7.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Twitter client API in pure Ruby

LICENSE=	MIT

RUN_DEPENDS=	rubygem-json>=1.1.1:${PORTSDIR}/devel/rubygem-json \
		rubygem-oauth>=0.4.1:${PORTSDIR}/net/rubygem-oauth

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/t4r-oauth-access bin/t4rsh

.include <bsd.port.mk>
