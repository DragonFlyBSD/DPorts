# Created by: Anes Mukhametov <anes@anes.su>
# $FreeBSD: devel/p5-MooseX-Role-Matcher/Makefile 327887 2013-09-22 18:03:55Z sunpoet $

PORTNAME=	MooseX-Role-Matcher
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anes@anes.su
COMMENT=	Generic object matching based on attributes and methods

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils \
		p5-MooseX-Role-Parameterized>=0.03:${PORTSDIR}/devel/p5-MooseX-Role-Parameterized
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Deep>=0:${PORTSDIR}/devel/p5-Test-Deep

NO_STAGE=	yes
USE_PERL5=	configure
USES=		perl5

MAN3=		MooseX::Role::Matcher.3

.include <bsd.port.mk>
