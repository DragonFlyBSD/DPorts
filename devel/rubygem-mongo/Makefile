# Created by: Evan Sarmiento <bsdports@wayfair.com>
# $FreeBSD: devel/rubygem-mongo/Makefile 319628 2013-06-02 02:06:14Z swills $

PORTNAME=	mongo
PORTVERSION=	1.8.6
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library for mongo

RUN_DEPENDS=	rubygem-bson>=1.8.2:${PORTSDIR}/devel/rubygem-bson

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/mongo_console

.include <bsd.port.mk>
