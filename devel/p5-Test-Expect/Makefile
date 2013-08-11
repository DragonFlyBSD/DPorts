# New ports collection makefile for:	Test-Expect
# Date created:				23 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: devel/p5-Test-Expect/Makefile 324171 2013-08-02 18:21:05Z az $
#

PORTNAME=	Test-Expect
PORTVERSION=	0.31
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Automated driving and testing of terminal-based programs

BUILD_DEPENDS=	p5-Class-Accessor-Chained>=0:${PORTSDIR}/devel/p5-Class-Accessor-Chained \
		p5-Expect-Simple>=0:${PORTSDIR}/devel/p5-Expect-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Test::Expect.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
