# Created by: Sergei Vyshenski <svysh.fbsd@gmail.com>
# $FreeBSD: devel/p5-Sys-SigAction/Makefile 338908 2014-01-06 17:17:09Z az $

PORTNAME=	Sys-SigAction
PORTVERSION=	0.20
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Perl extension for Consistent Signal Handling

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Time-HiRes>=1.9726:${PORTSDIR}/devel/p5-Time-HiRes
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

post-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} test

.include <bsd.port.mk>
