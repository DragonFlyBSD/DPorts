# Created by: Matt Behrens <matt@zigg.com>
# $FreeBSD: head/security/p5-Authen-PAM/Makefile 341813 2014-01-30 08:45:50Z az $

PORTNAME=	Authen-PAM
PORTVERSION=	0.16
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	des@FreeBSD.org
COMMENT=	Perl interface to the PAM library

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	-DPAM_STRERROR_NEEDS_PAMH

.include <bsd.port.mk>
