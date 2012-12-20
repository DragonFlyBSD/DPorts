# New ports collection makefile for:	p5-MooseX-FollowPBP
# Date created:				11 August 2010
# Whom:					Frederic Culot <frederic@culot.org>
#
# $FreeBSD: ports/devel/p5-MooseX-FollowPBP/Makefile,v 1.5 2012/11/17 05:56:23 svnexp Exp $
#

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

PERL_CONFIGURE=	yes

MAN3=		MooseX::FollowPBP.3 \
		MooseX::FollowPBP::Role::Attribute.3

.include <bsd.port.mk>
