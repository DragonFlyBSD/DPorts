# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: databases/rubygem-pg/Makefile 319683 2013-06-02 16:34:43Z swills $

PORTNAME=		pg
PORTVERSION=		0.15.1
CATEGORIES=		databases rubygems
MASTER_SITES=		RG

MAINTAINER=		ruby@FreeBSD.org
COMMENT=		Ruby interface to PostgreSQL library

RUN_DEPENDS=		rubygem-rake-compiler>=0.7:${PORTSDIR}/devel/rubygem-rake-compiler

USE_PGSQL=		yes
USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

PG_CONFIG=		${LOCALBASE}/bin/pg_config
CONFIGURE_ARGS=		--with-pgsql-include-dir=`${PG_CONFIG} --includedir` \
			--with-pgsql-lib-dir=`${PG_CONFIG} --libdir`

.include <bsd.port.mk>
