# Created by:	Palle Girgensohn <girgen@pingpong.net>
# $FreeBSD: databases/postgresql84-contrib/Makefile 313635 2013-03-08 11:32:11Z bapt $

PORTNAME=	postgresql
PKGNAMESUFFIX=	-contrib
CATEGORIES=	databases

MAINTAINER=	pgsql@FreeBSD.org
COMMENT=	The contrib utilities from the PostgreSQL distribution

USE_PGSQL=	yes
DEFAULT_PGSQL_VER=84
MASTERDIR=	${.CURDIR}/../postgresql${DEFAULT_PGSQL_VER}-server

USES=		bison

BUILD_DIRS=	src/port contrib
INSTALL_DIRS=	contrib

SLAVE_ONLY=	yes
CONFIGURE_ARGS+=--with-libxslt --with-libxml --with-openssl
LIB_DEPENDS=	xslt.2:${PORTSDIR}/textproc/libxslt xml2.5:${PORTSDIR}/textproc/libxml2

post-install:
	@- ${INSTALL_DATA} ${WRKSRC}/contrib/README ${DOCSDIR}/contrib/README

.include "${MASTERDIR}/Makefile"
