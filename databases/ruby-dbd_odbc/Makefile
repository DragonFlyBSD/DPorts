# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: databases/ruby-dbd_odbc/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	dbd_odbc
PORTVERSION=	0.2.5
CATEGORIES=	databases ruby
MASTER_SITES=	RF
MASTER_SITE_SUBDIR=	ruby-dbi
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	dbd-odbc-${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	ODBC driver for DBI-for-Ruby

RUN_DEPENDS=	${RUBY_SITELIBDIR}/dbi.rb:${PORTSDIR}/databases/ruby-dbi \
		${RUBY_SITEARCHLIBDIR}/odbc.so:${PORTSDIR}/databases/ruby-odbc

USE_RUBY=	yes
USE_RUBY_SETUP=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
