# Created by: chinsan
# $FreeBSD: graphics/p5-Captcha-reCAPTCHA/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Captcha-reCAPTCHA
PORTVERSION=	0.97
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PHRED
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl implementation of the reCAPTCHA API

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-HTML-Tiny>=0:${PORTSDIR}/textproc/p5-HTML-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=		Captcha::reCAPTCHA.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
