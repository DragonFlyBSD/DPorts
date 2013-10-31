# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: devel/p5-MooseX-POE/Makefile 332120 2013-10-30 14:44:54Z vanilla $

PORTNAME=	MooseX-POE
PORTVERSION=	0.215
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	The Illicit Love Child of Moose and POE

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Moose>=2.0002:${PORTSDIR}/devel/p5-Moose \
		p5-POE>=1.310:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-MooseX-Daemonize>=0:${PORTSDIR}/devel/p5-MooseX-Daemonize \
		p5-MooseX-Declare>=0:${PORTSDIR}/devel/p5-MooseX-Declare \
		p5-Test-Fatal>=0.003:${PORTSDIR}/devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
