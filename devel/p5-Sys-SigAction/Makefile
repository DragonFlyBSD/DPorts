# New ports collection makefile for:	p5-Sys-SigAction
# Date created:				18 Sep 2006
# Whom:					svysh
#
# $FreeBSD: ports/devel/p5-Sys-SigAction/Makefile,v 1.11 2012/11/17 05:56:30 svnexp Exp $
#

PORTNAME=	Sys-SigAction
PORTVERSION=	0.15
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh@pn.sinp.msu.ru
COMMENT=	Perl extension for Consistent Signal Handling

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

PERL_CONFIGURE=	yes

MAN3=		Sys::SigAction.3

post-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} test

.include <bsd.port.mk>
