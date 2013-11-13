# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: databases/p5-Pg/Makefile 332592 2013-11-03 06:53:54Z vanilla $

PORTNAME=	Pg
PORTVERSION=	2.1.1
PORTREVISION=	3
PORTEPOCH=	1
CATEGORIES=	databases perl5
MASTER_SITES=	${MASTER_SITE_PGSQL}
MASTER_SITE_SUBDIR=	projects/gborg/pgperl/stable
PKGNAMEPREFIX=	p5-
DIST_SUBDIR=	postgresql

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface for using perl5 to access PostgreSQL databases

USE_PGSQL=	yes
USES=		perl5
USE_PERL5=	configure

CONFIGURE_ENV=	POSTGRES_INCLUDE=${LOCALBASE}/include POSTGRES_LIB=${LOCALBASE}/lib

.include <bsd.port.mk>
