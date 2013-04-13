# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: databases/p5-Class-DBI-AbstractSearch/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	Class-DBI-AbstractSearch
PORTVERSION=	0.07
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Abstract Class::DBI SQL with SQL::Abstract

RUN_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI \
		p5-SQL-Abstract>=0:${PORTSDIR}/databases/p5-SQL-Abstract \
		p5-SQL-Abstract-Limit>=0:${PORTSDIR}/databases/p5-SQL-Abstract-Limit
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Class::DBI::AbstractSearch.3

.include <bsd.port.mk>
