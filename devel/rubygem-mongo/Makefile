# Created by: Evan Sarmiento <bsdports@wayfair.com>
# $FreeBSD: devel/rubygem-mongo/Makefile 321617 2013-06-23 05:02:20Z swills $

PORTNAME=	mongo
PORTVERSION=	1.9.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library for mongo

RUN_DEPENDS=	rubygem-bson>=1.9.0:${PORTSDIR}/devel/rubygem-bson

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/mongo_console

.include <bsd.port.mk>
