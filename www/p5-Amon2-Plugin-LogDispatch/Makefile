# $FreeBSD: www/p5-Amon2-Plugin-LogDispatch/Makefile 338769 2014-01-05 13:31:10Z az $

PORTNAME=	Amon2-Plugin-LogDispatch
PORTVERSION=	0.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension of Log::Dispatch glue for Amon2

RUN_DEPENDS=	\
	p5-Amon2>=2.33:${PORTSDIR}/www/p5-Amon2 \
	p5-Log-Dispatch>0:${PORTSDIR}/devel/p5-Log-Dispatch
BUILD_DEPENDS=	${RUN_DEPENDS}
TEST_DEPENDS=	\
	p5-Test-Requires>0:${PORTSDIR}/devel/p5-Test-Requires

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
