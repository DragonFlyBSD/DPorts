# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: net/rubygem-twitter4r/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	twitter4r
PORTVERSION=	0.7.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Twitter client API in pure Ruby

RUN_DEPENDS=	rubygem-oauth>=0.4.1:${PORTSDIR}/net/rubygem-oauth \
		rubygem-json>=1.1.1:${PORTSDIR}/devel/rubygem-json

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/t4r-oauth-access bin/t4rsh

NO_STAGE=	yes
.include <bsd.port.mk>
