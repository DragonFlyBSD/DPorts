# Created by: Timur Bakeyev <timur@FreeBSD.org>
# $FreeBSD: converters/p5-Encode-Punycode/Makefile 326872 2013-09-10 07:55:33Z az $

PORTNAME=	Encode-Punycode
PORTVERSION=	1.001
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Encode plugin for Punycode

RUN_DEPENDS=	p5-Net-IDN-Encode>=0:${PORTSDIR}/textproc/p5-Net-IDN-Encode
BUILD_DEPENDS:=	${RUN_DEPENDS} \
		p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Encode::Punycode.3

.include <bsd.port.mk>
