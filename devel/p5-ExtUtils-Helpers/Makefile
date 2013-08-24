# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-ExtUtils-Helpers/Makefile 325134 2013-08-21 14:08:06Z sunpoet $

PORTNAME=	ExtUtils-Helpers
PORTVERSION=	0.021
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Various portability utilities for module builders

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USE_PERL5=	configure
USES=		perl5

MAN3=		ExtUtils::Helpers.3 \
		ExtUtils::Helpers::Unix.3 \
		ExtUtils::Helpers::VMS.3 \
		ExtUtils::Helpers::Windows.3

post-patch:
	@${SED} -i '' -e 's|3pm|3|' ${WRKSRC}/lib/ExtUtils/Helpers.pm ${WRKSRC}/t/man_pagename.t

.include <bsd.port.mk>
