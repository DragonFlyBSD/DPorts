# Created by: Frederic Culot <frederic@culot.org>
# $FreeBSD: devel/p5-MooseX-FollowPBP/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	MooseX-FollowPBP
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Name your accessors get_foo() and set_foo()

BUILD_DEPENDS=	p5-Moose>=1.16:${PORTSDIR}/devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}

LICENSE=	ART20

USES=		perl5
USE_PERL5=	configure

MAN3=		MooseX::FollowPBP.3 \
		MooseX::FollowPBP::Role::Attribute.3

NO_STAGE=	yes
.include <bsd.port.mk>
