# Created by: Daniel Wijnands <daniel@itxl.nl>
# $FreeBSD: databases/p5-Class-DBI-DDL/Makefile 324175 2013-08-02 21:38:09Z mat $

PORTNAME=	Class-DBI-DDL
PORTVERSION=	1.02
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DDL for Class-DBI

RUN_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Class::DBI::DDL.3 \
		Class::DBI::DDL::Pg.3

.include <bsd.port.mk>
