# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: devel/p5-Test-CheckDeps/Makefile 321745 2013-06-25 13:58:41Z culot $

PORTNAME=	Test-CheckDeps
PORTVERSION=	0.006
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Check for presence of dependencies

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-CPAN-Meta>=2.120920:${PORTSDIR}/devel/p5-CPAN-Meta \
		p5-CPAN-Meta-Check>=0.004:${PORTSDIR}/devel/p5-CPAN-Meta-Check \
		p5-Module-Build-Tiny>=0.021:${PORTSDIR}/devel/p5-Module-Build-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

MAN3=		Test::CheckDeps.3

.include <bsd.port.mk>
