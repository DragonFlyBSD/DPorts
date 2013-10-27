# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: www/rubygem-activeresource/Makefile 331450 2013-10-24 01:45:27Z swills $

PORTNAME=	activeresource
PORTVERSION=	3.2.15
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
