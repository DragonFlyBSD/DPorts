# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: devel/rubygem-analogger/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	analogger
PORTVERSION=	0.5.0
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A fast, flexible, easy to use logging service for Ruby

RUN_DEPENDS=	rubygem-eventmachine>=0.0.0:${PORTSDIR}/devel/rubygem-eventmachine

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/analogger

NO_STAGE=	yes
.include <bsd.port.mk>
