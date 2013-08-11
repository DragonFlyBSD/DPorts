# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-XML-Handler-YAWriter/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	XML-Handler-YAWriter
PORTVERSION=	0.23
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Yet another Perl SAX XML Writer

BUILD_DEPENDS=	p5-libxml>=0:${PORTSDIR}/textproc/p5-libxml
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN1=		xmlpretty.1
MAN3=		XML::Handler::YAWriter.3

.include <bsd.port.mk>
