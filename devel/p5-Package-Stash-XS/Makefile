# $FreeBSD: devel/p5-Package-Stash-XS/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Package-Stash-XS
PORTVERSION=	0.26
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DOY
PKGNAMEPREFIX=	p5-

MAINTAINER=	milki@rescomp.berkeley.edu
COMMENT=	Faster and more correct implementation of the Package::Stash API

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Fatal>=0:${PORTSDIR}/devel/p5-Test-Fatal \
		p5-Test-Requires>=0:${PORTSDIR}/devel/p5-Test-Requires

USES=		perl5
USE_PERL5=	configure

MAN3=		Package::Stash::XS.3

NO_STAGE=	yes
.include <bsd.port.mk>
