# New ports collection makefile for:	p5-Class-DBI-Plugin-RetrieveAll
# Date created:				Apr 2 2004
# Whom:					Lars Thegler <lars@thegler.dk>
#
# $FreeBSD: databases/p5-Class-DBI-Plugin-RetrieveAll/Makefile 324352 2013-08-07 13:20:32Z az $

PORTNAME=	Class-DBI-Plugin-RetrieveAll
PORTVERSION=	1.04
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	More complex retrieve_all() for Class::DBI

BUILD_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-DBD-SQLite>=0:${PORTSDIR}/databases/p5-DBD-SQLite

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::DBI::Plugin::RetrieveAll.3

.include <bsd.port.mk>
