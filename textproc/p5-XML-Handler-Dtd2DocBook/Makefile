# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: textproc/p5-XML-Handler-Dtd2DocBook/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	XML-Handler-Dtd2DocBook
PORTVERSION=	0.41
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate a DocBook documentation from a DTD

BUILD_DEPENDS=	p5-libxml>=0:${PORTSDIR}/textproc/p5-libxml \
		p5-XML-Handler-Dtd2Html>=0.41:${PORTSDIR}/textproc/p5-XML-Handler-Dtd2Html
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN1=		dtd2db.pl.1
MAN3=		XML::Handler::Dtd2DocBook.3

NO_STAGE=	yes
.include <bsd.port.mk>
