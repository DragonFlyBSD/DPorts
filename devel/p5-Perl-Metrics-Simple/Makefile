# $FreeBSD: ports/devel/p5-Perl-Metrics-Simple/Makefile,v 1.5 2012/11/17 05:56:26 svnexp Exp $

PORTNAME=	Perl-Metrics-Simple
PORTVERSION=	0.16
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to count packages, subs, lines, etc. of many files

RUN_DEPENDS=	\
	p5-PPI>=1.113:${PORTSDIR}/textproc/p5-PPI \
	p5-Readonly>=1.03:${PORTSDIR}/devel/p5-Readonly \
	p5-Statistics-Basic>0:${PORTSDIR}/math/p5-Statistics-Basic
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	\
	p5-Test-Pod>0:${PORTSDIR}/devel/p5-Test-Pod \
	p5-Test-Pod-Coverage>0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

PERL_CONFIGURE=	yes

MAN1=	countperl.1
MAN3=	Perl::Metrics::Simple.3 \
	Perl::Metrics::Simple::Analysis.3 \
	Perl::Metrics::Simple::Analysis::File.3

post-patch:
	${FIND} ${WRKSRC} -name '*.orig' -delete

.include <bsd.port.mk>
