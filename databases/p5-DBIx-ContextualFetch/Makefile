# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: databases/p5-DBIx-ContextualFetch/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	DBIx-ContextualFetch
PORTVERSION=	1.03
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Add contextual fetches to DBI

RUN_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-DBD-SQLite>=0:${PORTSDIR}/databases/p5-DBD-SQLite

USES=		perl5
USE_PERL5=	configure

MAN3=		DBIx::ContextualFetch.3

.include <bsd.port.mk>
