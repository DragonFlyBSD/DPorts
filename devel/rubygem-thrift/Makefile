# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/rubygem-thrift/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	thrift
PORTVERSION=	${THRIFT_PORTVERSION} # to keep in sync with ../thrift
PORTEPOCH=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	komarov@valerka.net
COMMENT=	Ruby interface to thrift

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include "../thrift/bsd.thrift.mk"
.include <bsd.port.mk>
