# Created by: Alexey V. Degtyarev
# $FreeBSD: devel/p5-MooseX-SemiAffordanceAccessor/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	MooseX-SemiAffordanceAccessor
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DROLSKY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Name your accessors foo() and set_foo()

BUILD_DEPENDS=	p5-Moose>=0.94:${PORTSDIR}/devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=		MooseX::SemiAffordanceAccessor.3 \
		MooseX::SemiAffordanceAccessor::Role::Attribute.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
