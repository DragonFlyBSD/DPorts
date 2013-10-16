# Created by: stas
# $FreeBSD: databases/rubygem-dm-postgres-adapter/Makefile 327717 2013-09-20 16:13:47Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
