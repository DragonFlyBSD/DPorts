# $FreeBSD: ports/databases/p5-DBIx-QueryLog/Makefile,v 1.10 2013/01/14 14:47:10 svnexp Exp $

PORTNAME=	DBIx-QueryLog
PORTVERSION=	0.32
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for logging queries for DBI

RUN_DEPENDS=	\
	p5-DBI>0:${PORTSDIR}/databases/p5-DBI
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	\
	p5-DBD-SQLite>0:${PORTSDIR}/databases/p5-DBD-SQLite \
	p5-Class-Method-Modifiers>0:${PORTSDIR}/devel/p5-Class-Method-Modifiers \
	p5-Test-Requires>0:${PORTSDIR}/devel/p5-Test-Requires

PERL_CONFIGURE=	yes

MAN3=	DBIx::QueryLog.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
TEST_DEPENDS+=	p5-Test-Simple>=0.96:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
