# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: www/rubygem-activeresource/Makefile 335703 2013-12-05 20:27:45Z sunpoet $

PORTNAME=	activeresource
PORTVERSION=	3.2.16
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Coherent wrapper object-relational mapping for REST web services

RUN_DEPENDS=	rubygem-activemodel>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-activemodel \
		rubygem-activesupport>=${PORTVERSION}:${PORTSDIR}/devel/rubygem-activesupport

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
