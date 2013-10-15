# $FreeBSD: databases/rubygem-dm-transactions/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	dm-transactions
PORTVERSION=	1.2.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Makes transaction support available for adapters that support them

RUN_DEPENDS=	rubygem-dm-core>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-dm-core

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
