# New ports collection makefile for:	PostgreSQL PL/Perl 
# Date created:		January 14, 2002
# Whom:			Palle Girgensohn <girgen@partitur.se>
#
# $FreeBSD: ports/databases/postgresql90-plperl/Makefile,v 1.4 2012/11/17 05:55:20 svnexp Exp $
#

PORTNAME=	postgresql
CATEGORIES=	databases perl5
PKGNAMESUFFIX=	-plperl

MAINTAINER=	pgsql@FreeBSD.org
COMMENT=	Write SQL functions for PostgreSQL using Perl5

RUN_DEPENDS=	postgres:${PORTSDIR}/databases/postgresql${WANT_PGSQL_VER}-server

MASTERDIR=	${.CURDIR}/../../databases/postgresql${WANT_PGSQL_VER}-server

WANT_PGSQL_VER?=90

USE_PERL5=	yes
CONFIGURE_ARGS=	--with-perl

BUILD_DIRS=	src/backend src/pl/plperl
INSTALL_DIRS=	src/pl/plperl
SLAVE_ONLY=	yes

.include "${MASTERDIR}/Makefile"
