# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: databases/p5-DBICx-TestDatabase/Makefile 334733 2013-11-24 15:20:32Z az $

PORTNAME=	DBICx-TestDatabase
PORTVERSION=	0.05
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JROCKWAY
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Module to create temporary database from a DBIx::Class::Schema

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DBIx-Class>=0.07005:${PORTSDIR}/databases/p5-DBIx-Class \
		p5-DBD-SQLite>=1.12:${PORTSDIR}/databases/p5-DBD-SQLite \
		p5-SQL-Translator>=0:${PORTSDIR}/databases/p5-SQL-Translator
RUN_DEPENDS=	p5-DBD-SQLite>=1.12:${PORTSDIR}/databases/p5-DBD-SQLite \
		p5-SQL-Translator>=0:${PORTSDIR}/databases/p5-SQL-Translator \
		p5-File-Temp>0:${PORTSDIR}/devel/p5-File-Temp
TEST_DEPENDS=	p5-Test-use-ok>=0:${PORTSDIR}/devel/p5-Test-use-ok

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
