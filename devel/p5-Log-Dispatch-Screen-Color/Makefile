# New ports collection makefile for:	Log::Dispatch::Screen::Color
# Date created:		23 Sep 2009
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Log-Dispatch-Screen-Color/Makefile,v 1.5 2012/11/17 05:56:21 svnexp Exp $
#

PORTNAME=	Log-Dispatch-Screen-Color
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to support color for Log::Dispatch::Screen

RUN_DEPENDS=	\
	p5-Log-Dispatch>0:${PORTSDIR}/devel/p5-Log-Dispatch \
	p5-Params-Validate>0:${PORTSDIR}/devel/p5-Params-Validate
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-IO-stringy>0:${PORTSDIR}/devel/p5-IO-stringy

PERL_CONFIGURE=	yes

MAN3=	Log::Dispatch::Screen::Color.3

.include <bsd.port.mk>
