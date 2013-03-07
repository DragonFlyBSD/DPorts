# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: ports/graphics/rubygem-captcha/Makefile,v 1.14 2013/02/26 21:54:30 svnexp Exp $

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

.include <bsd.port.mk>
