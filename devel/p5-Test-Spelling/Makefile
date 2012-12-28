# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: ports/devel/p5-Test-Spelling/Makefile,v 1.8 2012/12/21 17:10:45 svnexp Exp $

PORTNAME=	Test-Spelling
PORTVERSION=	0.16
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Check for spelling errors in POD files

BUILD_DEPENDS=	p5-Pod-Spell>=0:${PORTSDIR}/textproc/p5-Pod-Spell
RUN_DEPENDS=	p5-Pod-Spell>=0:${PORTSDIR}/textproc/p5-Pod-Spell
TEST_DEPENDS=	p5-Test-Tester>=0:${PORTSDIR}/devel/p5-Test-Tester

PERL_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

MAN3=		Test::Spelling.3

.include <bsd.port.mk>
