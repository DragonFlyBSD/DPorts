# New ports collection makefile for:	Class::Method::Modifiers::Fast
# Date created:		21 Jan 2009
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Class-Method-Modifiers-Fast/Makefile,v 1.6 2012/11/17 05:56:07 svnexp Exp $
#

PORTNAME=	Class-Method-Modifiers-Fast
PORTVERSION=	0.041
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to provide Moose-like method modifiers

RUN_DEPENDS=	\
	p5-Data-Util>=0.55:${PORTSDIR}/devel/p5-Data-Util
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Sub-Uplevel>=0.18:${PORTSDIR}/devel/p5-Sub-Uplevel

PERL_CONFIGURE=	yes

MAN3=		Class::Method::Modifiers::Fast.3

.include <bsd.port.mk>
