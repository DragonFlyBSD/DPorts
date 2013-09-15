# Created by: Palle Girgensohn <girgen@partitur.se>
# $FreeBSD: databases/postgresql90-plperl/Makefile 326900 2013-09-10 13:04:01Z az $

PORTNAME=	postgresql
CATEGORIES=	databases perl5
PKGNAMESUFFIX=	-plperl

MAINTAINER=	pgsql@FreeBSD.org
COMMENT=	Write SQL functions for PostgreSQL using Perl5

RUN_DEPENDS=	postgres:${PORTSDIR}/databases/postgresql${WANT_PGSQL_VER}-server

MASTERDIR=	${.CURDIR}/../../databases/postgresql${WANT_PGSQL_VER}-server

WANT_PGSQL_VER?=90

USES=		perl5
CONFIGURE_ARGS=	--with-perl

BUILD_DIRS=	src/backend src/pl/plperl
INSTALL_DIRS=	src/pl/plperl
SLAVE_ONLY=	yes

.include "${MASTERDIR}/Makefile"
