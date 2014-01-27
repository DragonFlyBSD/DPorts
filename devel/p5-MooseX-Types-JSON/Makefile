# Created by: milki <milki@rescomp.berkeley.edu>
# $FreeBSD: devel/p5-MooseX-Types-JSON/Makefile 340549 2014-01-21 05:12:40Z milki $

PORTNAME=	MooseX-Types-JSON
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MILA
PKGNAMEPREFIX=	p5-

MAINTAINER=	milki@FreeBSD.org
COMMENT=	JSON and relaxedJSON datatype for Moose

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Moose>=0.82:${PORTSDIR}/devel/p5-Moose \
		p5-MooseX-Types>=0.15:${PORTSDIR}/devel/p5-MooseX-Types \
		p5-JSON-XS>=2.00:${PORTSDIR}/converters/p5-JSON-XS

TEST_DEPENDS=	p5-Test-Pod>=1.00:${PORTSDIR}/devel/p5-Test-Pod

USES=		perl5
USE_PERL5=	configure

MAN3=		MooseX::Types::JSON.3

NO_STAGE=	yes
.include <bsd.port.mk>
