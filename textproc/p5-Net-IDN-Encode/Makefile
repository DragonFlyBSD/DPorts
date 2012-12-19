# Created by: Timur Bakeyev <bat@cpan.org>
# $FreeBSD: ports/textproc/p5-Net-IDN-Encode/Makefile,v 1.6 2012/11/17 06:02:06 svnexp Exp $

PORTNAME=	Net-IDN-Encode
PORTVERSION=	2.003
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Internationalizing Domain Names in Applications (RFC 3490)

RUN_DEPENDS=	p5-Net-IDN-Nameprep>=0:${PORTSDIR}/converters/p5-Net-IDN-Nameprep
BUILD_DEPENDS:=	${RUN_DEPENDS} \
		p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings

PERL_MODBUILD=	yes

MAN3=		Net::IDN::Encode.3 Net::IDN::Overview.3 Net::IDN::Punycode.3 \
		Net::IDN::Punycode::PP.3 Net::IDN::Standards.3 \
		Net::IDN::UTS46.3 Net::IDN::UTS46::_Mapping.3

.include <bsd.port.mk>
