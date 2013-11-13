# Created by: stas
# $FreeBSD: databases/rubygem-dm-postgres-adapter/Makefile 332032 2013-10-30 02:22:05Z swills $

PORTNAME=	dm-postgres-adapter
PORTVERSION=	1.2.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	PostgreSQL Adapter for DataMapper

RUN_DEPENDS=	rubygem-do_postgres>=0.10.6:${PORTSDIR}/databases/rubygem-do_postgres \
		rubygem-dm-do-adapter>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-dm-do-adapter

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
