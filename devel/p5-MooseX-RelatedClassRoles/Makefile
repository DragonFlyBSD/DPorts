# $FreeBSD: devel/p5-MooseX-RelatedClassRoles/Makefile 332120 2013-10-30 14:44:54Z vanilla $

PORTNAME=	MooseX-RelatedClassRoles
PORTVERSION=	0.004
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Apply roles to a class related to yours

BUILD_DEPENDS=	p5-Moose>=2:${PORTSDIR}/devel/p5-Moose \
		p5-MooseX-Role-Parameterized>=0.04:${PORTSDIR}/devel/p5-MooseX-Role-Parameterized
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
