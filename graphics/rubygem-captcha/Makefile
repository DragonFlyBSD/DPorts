# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: graphics/rubygem-captcha/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	captcha
PORTVERSION=	1.2.2
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A simple CAPTCHA written in Ruby

BUILD_DEPENDS=	rubygem-rmagick>=1.0:${PORTSDIR}/graphics/rubygem-rmagick
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
