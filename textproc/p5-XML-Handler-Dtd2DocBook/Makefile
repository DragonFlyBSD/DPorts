# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: textproc/p5-XML-Handler-Dtd2DocBook/Makefile 340722 2014-01-22 17:00:46Z mat $

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

.include <bsd.port.mk>
