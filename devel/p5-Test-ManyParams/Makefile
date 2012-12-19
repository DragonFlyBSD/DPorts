# New ports collection makefile for:	p5-Test-ManyParams
# Date created:		2012-02-14
# Whom:			Steve Wills <swills@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Test-ManyParams/Makefile,v 1.2 2012/11/17 05:56:32 svnexp Exp $
#

PORTNAME=	Test-ManyParams
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to test many params as one test

BUILD_DEPENDS=	p5-Set-CrossProduct>0:${PORTSDIR}/devel/p5-Set-CrossProduct \
		p5-Test-Differences>0:${PORTSDIR}/devel/p5-Test-Differences \
		p5-Test-Exception>0:${PORTSDIR}/devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Test::ManyParams.3

.include <bsd.port.mk>
