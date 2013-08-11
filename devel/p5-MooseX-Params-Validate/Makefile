# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: devel/p5-MooseX-Params-Validate/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	MooseX-Params-Validate
PORTVERSION=	0.18
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extension of Params::Validate for using Moose types

BUILD_DEPENDS=	p5-Moose>=0.74:${PORTSDIR}/devel/p5-Moose \
		p5-Params-Validate>0:${PORTSDIR}/devel/p5-Params-Validate \
		p5-Devel-Caller>0:${PORTSDIR}/devel/p5-Devel-Caller
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>0:${PORTSDIR}/devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	configure

MAN3=		MooseX::Params::Validate.3

.include <bsd.port.mk>
