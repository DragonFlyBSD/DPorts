# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: www/rubygem-rack-openid/Makefile 319574 2013-06-01 14:30:18Z swills $

PORTNAME=	rack-openid
PORTVERSION=	1.3.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Provides a more HTTPish API around the ruby-openid library

RUN_DEPENDS=	rubygem-rack>=1.1.0:${PORTSDIR}/www/rubygem-rack \
		rubygem-openid>=2.1.8:${PORTSDIR}/net/rubygem-openid

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
