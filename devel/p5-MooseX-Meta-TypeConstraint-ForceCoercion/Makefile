# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-MooseX-Meta-TypeConstraint-ForceCoercion/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	MooseX-Meta-TypeConstraint-ForceCoercion
PORTVERSION=	0.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Force coercion when validating type constraints

BUILD_DEPENDS=	p5-Moose>=0:${PORTSDIR}/devel/p5-Moose \
		p5-namespace-autoclean>=0:${PORTSDIR}/devel/p5-namespace-autoclean
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		MooseX::Meta::TypeConstraint::ForceCoercion.3

NO_STAGE=	yes
.include <bsd.port.mk>
