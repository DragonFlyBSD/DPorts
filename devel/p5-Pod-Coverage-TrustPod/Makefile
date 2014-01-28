# Created by: milki <milki@rescomp.berkeley.edu>
# $FreeBSD: devel/p5-Pod-Coverage-TrustPod/Makefile 340549 2014-01-21 05:12:40Z milki $

PORTNAME=	Pod-Coverage-TrustPod
PORTVERSION=	0.100002
CATEGORIES=	devel textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RJBS
PKGNAMEPREFIX=	p5-

MAINTAINER=	milki@FreeBSD.org
COMMENT=	Declare trusted symbol names in POD

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Pod-Coverage \
		p5-Pod-Eventual>=0:${PORTSDIR}/textproc/p5-Pod-Eventual
RUN_DEPENDS=	p5-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Pod-Coverage \
		p5-Pod-Eventual>=0:${PORTSDIR}/textproc/p5-Pod-Eventual

TEST_DEPENDS=	p5-Test-Pod>=1.41:${PORTSDIR}/devel/p5-Test-Pod

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
