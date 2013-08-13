# Created by: tiger <tiger@whitetigersd.com>
# $FreeBSD: devel/p5-SSN-Validate/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=		SSN::Validate.3

test: all
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
