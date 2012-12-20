# New ports collection makefile for:	Moose-Policy
# Date created:	   25 February 2008
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-Moose-Policy/Makefile,v 1.7 2012/11/17 05:56:22 svnexp Exp $
#

PORTNAME=	Moose-Policy
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DROLSKY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Moose-mounted police

BUILD_DEPENDS=	p5-Moose>=0:${PORTSDIR}/devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

PERL_CONFIGURE=	yes

MAN3=		Moose::Policy.3 Moose::Policy::FollowPBP.3 \
		Moose::Policy::JavaAccessors.3 \
		Moose::Policy::SingleInheritence.3

.include <bsd.port.mk>
