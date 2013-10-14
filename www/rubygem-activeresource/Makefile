# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: www/rubygem-activeresource/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	activeresource
PORTVERSION=	3.2.13
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A coherent wrapper object-relational mapping for REST web services

RUN_DEPENDS=	rubygem-activesupport>=${PORTVERSION}:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-activemodel>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-activemodel

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
