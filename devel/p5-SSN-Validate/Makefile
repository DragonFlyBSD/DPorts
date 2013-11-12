# Created by: tiger <tiger@whitetigersd.com>
# $FreeBSD: devel/p5-SSN-Validate/Makefile 332205 2013-10-31 07:36:25Z vanilla $

PORTNAME=	SSN-Validate
PORTVERSION=	0.18
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:KMELTZ
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to do SSN Validation

USES=		perl5
USE_PERL5=	configure

test: all
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
