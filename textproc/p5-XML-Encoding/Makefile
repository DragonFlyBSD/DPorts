# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-XML-Encoding/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	XML-Encoding
PORTVERSION=	2.08
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for parsing XML encoding maps

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN1=		compile_encoding.1 make_encmap.1
MAN3=		XML::Encoding.3

NO_STAGE=	yes
.include <bsd.port.mk>
