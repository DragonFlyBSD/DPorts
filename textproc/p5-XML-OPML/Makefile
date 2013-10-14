# Created by: ijliao
# $FreeBSD: textproc/p5-XML-OPML/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	XML-OPML
PORTVERSION=	0.26
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Creates and updates OPML (Outline Processor Markup Language) files

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser \
		p5-XML-SimpleObject>=0:${PORTSDIR}/textproc/p5-XML-SimpleObject
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	XML::OPML.3

NO_STAGE=	yes
.include <bsd.port.mk>
