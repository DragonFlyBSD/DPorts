# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-XML-Encoding/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	XML-Encoding
PORTVERSION=	2.08
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for parsing XML encoding maps

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		compile_encoding.1 make_encmap.1
MAN3=		XML::Encoding.3

.include <bsd.port.mk>
