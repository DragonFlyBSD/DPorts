# Created by: ijliao
# $FreeBSD: graphics/rubygem-gruff/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	gruff
PORTVERSION=	0.3.7
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A beautiful graphing library for Ruby using RMagick

RUN_DEPENDS=	${RUBY_SITEARCHLIBDIR}/RMagick2.so:${PORTSDIR}/graphics/ruby-rmagick \
		sow:${PORTSDIR}/devel/rubygem-hoe

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
