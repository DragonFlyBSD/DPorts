# Created by: ijliao
# $FreeBSD: textproc/p5-XML-Parser-EasyTree/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	XML-Parser-EasyTree
PORTVERSION=	0.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Easier tree style for XML::Parser

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	XML::Parser::EasyTree.3

NO_STAGE=	yes
.include <bsd.port.mk>
