# Created by: Sergei Vyshenski <svysh@pn.sinp.msu.ru>
# $FreeBSD: devel/p5-Sys-SigAction/Makefile 326728 2013-09-08 13:59:48Z az $

PORTNAME=	Sys-SigAction
PORTVERSION=	0.17
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Perl extension for Consistent Signal Handling

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

MAN3=		Sys::SigAction.3

post-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} test

.include <bsd.port.mk>
