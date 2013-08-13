# Created by: tobez@FreeBSD.org
# $FreeBSD: security/p5-Authen-Captcha/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Authen-Captcha
PORTVERSION=	1.023
PORTREVISION=	8
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to verify the human element in transactions

BUILD_DEPENDS=	p5-GD>=0:${PORTSDIR}/graphics/p5-GD
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Authen::Captcha.3

.include <bsd.port.mk>
