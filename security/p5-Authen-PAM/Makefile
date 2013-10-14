# Created by: Matt Behrens <matt@zigg.com>
# $FreeBSD: security/p5-Authen-PAM/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Authen-PAM
PORTVERSION=	0.16
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	des@FreeBSD.org
COMMENT=	A Perl interface to the PAM library

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	-DPAM_STRERROR_NEEDS_PAMH

MAN3=		Authen::PAM.3 \
		Authen::PAM::FAQ.3

NO_STAGE=	yes
.include <bsd.port.mk>
