# New ports collection makefile for:	dbd_odbc for DBD-for-Ruby
# Date created:		9 June 2001
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/databases/ruby-dbd_odbc/Makefile,v 1.14 2012/11/17 05:55:24 svnexp Exp $
#

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

.include <bsd.port.mk>
