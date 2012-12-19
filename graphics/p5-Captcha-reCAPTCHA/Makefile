# New ports collection makefile for:	p5-Captcha-reCAPTCHA
# Date created:				2008/01/26
# Whom:					chinsan
#
# $FreeBSD: ports/graphics/p5-Captcha-reCAPTCHA/Makefile,v 1.7 2012/11/17 05:58:16 svnexp Exp $
#

PORTNAME=	Captcha-reCAPTCHA
PORTVERSION=	0.94
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ANDYA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A Perl implementation of the reCAPTCHA API

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-HTML-Tiny>=0:${PORTSDIR}/textproc/p5-HTML-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=		Captcha::reCAPTCHA.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
