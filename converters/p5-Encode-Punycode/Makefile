# Created by: Timur Bakeyev <timur@FreeBSD.org>
# $FreeBSD: ports/converters/p5-Encode-Punycode/Makefile,v 1.6 2012/11/17 05:55:04 svnexp Exp $

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

PERL_MODBUILD=	yes

MAN3=		Encode::Punycode.3

.include <bsd.port.mk>
