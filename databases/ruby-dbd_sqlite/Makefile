# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: databases/ruby-dbd_sqlite/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	dbd_sqlite
PORTVERSION=	0.1.2
CATEGORIES=	databases ruby
MASTER_SITES=	RF
MASTER_SITE_SUBDIR=	ruby-dbi
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	dbd-sqlite-${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	SQLite driver for DBI-for-Ruby

LIB_DEPENDS=	libsqlite.so:${PORTSDIR}/databases/sqlite2
RUN_DEPENDS=	${RUBY_SITELIBDIR}/dbi.rb:${PORTSDIR}/databases/ruby-dbi

USE_RUBY=	yes
USE_RUBY_SETUP=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
