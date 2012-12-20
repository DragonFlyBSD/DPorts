# New ports collection makefile for:	p5-Test-Mock-LWP
# Date created:		2009-03-13
# Whom:			TAKAHASHI Kaoru <kaoru@kaisei.org>
#
# $FreeBSD: ports/devel/p5-Test-Mock-LWP/Makefile,v 1.4 2012/11/17 05:56:33 svnexp Exp $
#

PORTNAME=	Test-Mock-LWP
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kaoru@kaisei.org
COMMENT=	Easy mocking of LWP packages

RUN_DEPENDS=	p5-Test-MockObject>=1.08:${PORTSDIR}/devel/p5-Test-MockObject

PERL_CONFIGURE=	yes

MAN3=		Test::Mock::HTTP::Request.3 \
		Test::Mock::HTTP::Response.3 \
		Test::Mock::LWP::UserAgent.3 \
		Test::Mock::LWP.3

.include <bsd.port.mk>
