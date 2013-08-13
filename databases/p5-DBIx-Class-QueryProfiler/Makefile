# Created by: andrey@kostenko.name
# $FreeBSD: databases/p5-DBIx-Class-QueryProfiler/Makefile 324174 2013-08-02 18:52:07Z mat $
PORTNAME=	DBIx-Class-QueryProfiler
PORTVERSION=	0.05
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBIx::Class profiler

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Module-Install>=0:${PORTSDIR}/devel/p5-Module-Install \
		p5-DBIx-Class>=0:${PORTSDIR}/databases/p5-DBIx-Class
RUN_DEPENDS=	p5-DBIx-Class>=0:${PORTSDIR}/databases/p5-DBIx-Class

TEST_DEPENDS=	p5-Test-Perl-Critic>=0:${PORTSDIR}/textproc/p5-Test-Perl-Critic

USES=		perl5
USE_PERL5=	configure

MAN3=		DBIx::Class::QueryProfiler.3

.include <bsd.port.mk>
