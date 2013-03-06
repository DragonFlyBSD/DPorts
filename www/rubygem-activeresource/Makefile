# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: ports/www/rubygem-activeresource/Makefile,v 1.24 2013/02/16 21:49:47 svnexp Exp $

PORTNAME=	activeresource
PORTVERSION=	3.2.12
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A coherent wrapper object-relational mapping for REST web services

RUN_DEPENDS=	rubygem-activesupport>=${PORTVERSION}:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-activemodel>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-activemodel

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
