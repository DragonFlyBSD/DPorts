# Created by: Evan Sarmiento <bsdports@wayfair.com>
# $FreeBSD: devel/rubygem-mongo/Makefile 322940 2013-07-13 16:03:22Z swills $

PORTNAME=	mongo
PORTVERSION=	1.9.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library for mongo

RUN_DEPENDS=	rubygem-bson>=1.9.1:${PORTSDIR}/devel/rubygem-bson

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/mongo_console

.include <bsd.port.mk>
